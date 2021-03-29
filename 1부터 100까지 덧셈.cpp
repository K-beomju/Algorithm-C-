#include <iostream>
#include <string.h>
using namespace std;
//20404 김범주 

int Sum(int n) {
	if (n == 1)
		return 1;
	else
		return(Sum(n - 1) + n);

}


int main()
{

	
	cout << "= " << Sum(100) << endl;
}