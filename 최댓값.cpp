#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define MAX(x,y) ((x) > (y) ? (x) : (y))


int findMax(int arr[], int n)
{
    if (n == 0)
        return arr[0];
    int max = findMax(arr, n - 1); 
    arr[n] = max < arr[n] ? arr[n] : max; 
    return arr[n];
}

void Maximum() {
    int array[6] = { 0, };
    for (int i = 0; i < 5; i++)
    {
        scanf_s("%d", array + i);
    }
    cout << findMax(array, 5);
}
int main(void) { Maximum();}

