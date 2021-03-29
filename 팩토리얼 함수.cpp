#include <iostream>
#include <string.h>
using namespace std;

// 20404 김범주 

int Factorial(int num) {

	if (num == 1)
		return 1;

	return num * Factorial(num -1);
}

int main()
{
	int fact = 0;
	cin >> fact;
	cout << Factorial(fact);
	
		return 0;

}