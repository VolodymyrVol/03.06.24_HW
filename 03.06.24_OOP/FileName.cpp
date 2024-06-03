#include <iostream>
#include "Account.h"
using namespace	std;

int main()
{
	
	Account a("Petrov", "123123123", 15, 20000);
	Account b("Popov", "214512", 25, 20000);
	Account::ShowStatic();
}