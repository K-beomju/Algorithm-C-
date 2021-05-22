#include <iostream>
#include <stack>
// 20404 김범주
using namespace std;

int main()
{
    stack <int> s;
    s.push(12323);
    s.push(4123);
    s.push(511);
    s.push(966);
    s.push(2444);
    
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << "\n" <<s.size();
    
}