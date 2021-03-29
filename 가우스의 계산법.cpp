#include <iostream>
using namespace std;

//20404 김범주 Gabriel
int Gauss(int num ) {
	
		int sum = 1; 
		for (int i = 1; i <= num; i++) {
			sum = { (1 + i) * i / 2 };
		}
	return sum;
}

int main()
{
	int i , Fact;
	cout << "값을 입력해주세요 " << endl;
	cin >> Fact;
	
	

		cout << "= "<< Gauss(Fact) <<endl;
	
}