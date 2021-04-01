#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include<algorithm> 

using namespace std;
//20404 김범주 
void rever(int num) {
    if (num > 0) {
       printf("%d", num % 10);
        rever(num / 10);
       
    }

}
int main() {
    int a;
    cin >> a;
    rever(a);
   
}