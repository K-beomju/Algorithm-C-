#include <iostream>
#include <algorithm>
using namespace std;
// 20404 김범주 
void Max() 
{
	int val;
	int maxVal;
	cin >> val;
	maxVal = val;
	for (int i = 1; i < 5; i++) {
	
		cin >> val;

		if (val == 0)
			return Max();

		maxVal = max(maxVal, val);
	}
	cout << "max값: " << maxVal << endl;

	
}

int main() {

	Max();
}