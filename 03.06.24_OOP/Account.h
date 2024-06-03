#pragma once
class Account
{
	char* surname;
	char* accNum;
	int percent;
	double sum;
	static int objCount;
public:
	Account();
	Account(const char* S, const char* A, int P, int Sum);
	~Account();
	void ChangeOw(const char* NewOw);
	void Withdraw(double M);
	void Add(double M);
	void AddPerc(int P);
	void ShowDoll();
	void ShowEur();
	void ShowSum();
	static void ShowStatic();
};

