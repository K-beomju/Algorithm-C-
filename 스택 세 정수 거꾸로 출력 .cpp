
#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;
// 20404 김범주 
int main()
{
    stack<int> s;
    int n;
  
    for (int i = 0; i < 3; i++) {
        cin >> n;
        s.push(n);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();

    }
    
   
    
}
