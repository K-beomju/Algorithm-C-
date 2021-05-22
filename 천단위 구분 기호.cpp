#include <iostream>
#include <stack>
#include <time.h>
using namespace std;


int main()
{
	
	char s[10]; 
	int num; 
	cin >> num;

	int len = strlen(s); 


	while (num != 0) 
	{
		num = num / 10;
	}
	for (int i = 0; i < len; i++)
	{
		if ((len - i) % 3 == 0 && i != 0) 
		{
			printf(",");
		}
		printf("%c", s[i]);
	}
	printf("\n");


}
