#include <iostream>
using namespace std;
//20404 김범주 
int Gugu(int n, int j) {
	scanf_s("%d", &n);
	if (n == 0) {
		return Gugu(n,1);
	}
	for (j = 1; j < 10; j++)
	{
		printf("%d*%d = %d\n", n, j, j * n);
	}
}

int main()
{
    int a = 0;
    Gugu(a,1);

}