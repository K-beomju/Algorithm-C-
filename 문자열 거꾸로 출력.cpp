#include <iostream>
using namespace std;
//20404 김범주

void Print(char a[]) {
	int i, len = 0;
	while (a[len] != 0) len++;

	for (i = len - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	printf(" ");
}

int main() {
char str[3][10] = { 0, };
	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}
	Print(str[0]);
	Print(str[1]);
	Print(str[2]);
}