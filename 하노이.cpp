#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

//20404 김범주 

int hanoi(int n, char from, char temp, char to) {
    if (n == 1) {
        printf("원반 %d를 기둥 %c에서 기둥 %c으로 옮긴다.\n", n, from, to);
    }
    else {
        hanoi(n - 1, from, to, temp);
        printf("원반 %d를 기둥 %c에서 기둥 %c으로 옮긴다.\n", n, from, to);
       return hanoi(n - 1, temp, from, to);
    }
    
}


int main() {
	
    hanoi(4, 'A', 'C', 'B');

    return 0;
}


