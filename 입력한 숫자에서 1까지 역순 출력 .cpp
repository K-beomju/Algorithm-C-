#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;


//20404 김범주 
void rever(int num)
 {
    if (num < 1) 
        return;
    printf("%d\n", num);
    rever(num - 1);

    
 
}
int main() {
    int a;
    scanf_s("%d", &a);
    rever(a);
}