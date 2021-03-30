#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

//20404 김범주 
int Sum(int num) {
	int sum = 0;
	if (num == 1) {
		return 1; 
	}
	else
	{
		for (int i = 1; i <= num; i++)	sum += i;
	}
	return sum;
}



int main()
{
	int i, Fact;
	cout << "값을 입력해주세요 " << endl;
	cin >> Fact;
	cout << "= " << Sum(Fact) << endl;
	return 0;
}