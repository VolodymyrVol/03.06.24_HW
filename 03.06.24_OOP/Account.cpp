#include "Account.h"
#include <iostream>
using namespace std;

int Account::objCount = 0;

Account::Account()
{
	surname = accNum = nullptr;
	percent = sum = 0;
}

Account::Account(const char* S, const char* A, int P, int Sum)
{
	surname =  new char[strlen(S) + 1];
	strcpy_s(surname, strlen(S) + 1, S);

	accNum = new char[strlen(A) + 1];
	strcpy_s(accNum, strlen(A) + 1, A);

	percent = P;

	sum = Sum;

	objCount++;
}

Account::~Account()
{
	delete[] surname;
	delete[] accNum;
}

void Account::ChangeOw(const char* NewOw)
{
	surname = new char[strlen(NewOw) + 1];
	strcpy_s(surname, strlen(NewOw) + 1, NewOw);
}

void Account::Withdraw(double M)
{
	if (sum >= M)
	{
		sum -= M;
	}
	else
	{
		cout << "Err\n\n";
	}
}

void Account::Add(double M)
{
	sum += M;
}

void Account::AddPerc(int P)
{
	percent += P;
}

void Account::ShowDoll()
{
	cout << sum<<" UAH is -> "<<sum * 40.39<<" dollars" << endl << endl;
}

void Account::ShowEur()
{
	cout << sum << " UAH is -> " << sum * 43.98 << " eur" << endl << endl;
}

void Account::ShowSum()
{
	cout << sum << endl;
}

void Account::ShowStatic()
{
	cout << Account::objCount<<endl<<endl;
}
