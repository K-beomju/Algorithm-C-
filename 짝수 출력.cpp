#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
// 20204 김범주 


void oddnumbers(int n, int m)
 {
    if (n > m)
        return;
    else if(n % 2 == 0)
    {
        printf("%d \t",n);
    }
    oddnumbers(++n, m);

    
 
}
int main() {
    int a,b;
    scanf_s("%d %d", &a, &b);
    oddnumbers(a,b);
}