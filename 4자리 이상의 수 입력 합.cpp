#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
//20404 김범주 
int sum = 0;

void Sum(int n) {
   
  if (n == 0)
    {
        cout << sum;
        return;
    }
    sum += n % 10;
    n /= 10;

    Sum(n);
}

int main()
{
    int a = 0;
    scanf_s("%d", &a);
    Sum(a);

}

