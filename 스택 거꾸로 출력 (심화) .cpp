
#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;
// 20404 김범주
int main()
{
	stack<int> reverse;
	int n,m, count;
	

	for (int i = 0; i < 1; i++)
	{
		cin >> n;
	 if (n > 1000)
		 return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> count;
		reverse.push(count);
		m = (count % 10) * 10 + count / 10;

	}
	while (!reverse.empty())
	{
		cout << reverse.top() << " ";
		reverse.pop();

	}
}

