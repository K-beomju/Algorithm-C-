

#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;
// 20404 김범주
int main()
{
	stack<int> s;
	int n, m;
	cin >> n;
	m = (n % 10) * 10 + n / 10;
	s.push(m);

	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();

	}

}
