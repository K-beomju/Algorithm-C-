#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


// 20404 김범주 

int main()
{
	int  Fact;
	int sum = 1;
	cout << "숫자를 입력해주세요 : ";
	cin >> Fact;
	
	for (int i = Fact; i > 0; i--) {
		sum *= i;
	}
	cout << sum << endl;
}