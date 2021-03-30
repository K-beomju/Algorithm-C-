#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

//20404 김범주 
int fibo(int num) {
	if (num == 1 ) {
		return 1;
	}
	else if (num == 2) {
		return 1;
	}
	else
	{
		return fibo(num - 1) + fibo(num - 2);
	}

	
		
	
}


int main()
{
	int f = 0;
	cout << "수를 입력해주세요 :";
	cin >> f;
	for (int i = 1; i <= f; i++)
	{
		cout << fibo(i) << endl;
	}
	
	return 0;
}