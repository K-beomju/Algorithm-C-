#include <iostream>
using namespace std;

//20404 김범주 
int main()
{
	char array[14];
	cout << "주민등록번호를 입력해주세요 ";
	cin >> array;


	if (array[6] % 2 == 1) {
		cout << "남자" << endl;
	}
	else
	{
		cout << "여자" << endl;
	}

	int year = (array[0] - 48) * 10 + (array[1] - '0');
	year += array[6] <= '2' ? 1900 : 2000;
	cout << "출생년도" << year << endl;
	int old = 2021 - year + 1;
	cout << "나이" << old << endl;

	int area = (array[7] - 48) * 10 + array[8] - 48;


	if (area < 9) {
		cout << "지역번호 : 서울" << endl;
	}
	else if (area < 13)
	{
		cout << "지역번호 : 부산" << endl;
	}
	else if (area < 16)
	{
		cout << "지역번호 : 인천" << endl;
	}
	else if (area < 19)
	{
		cout << "지역번호 : 경기도 주요 도시" << endl;
	}
	else if (area < 26)
	{
		cout << "지역번호 : 그 밖의 경기도" << endl;
	}
	else if (area < 35)
	{
		cout << "지역번호 : 강원도" << endl;
	}
	else if (area < 40)
	{
		cout << "지역번호 : 충청북도" << endl;
	}

	else if (area < 48)
	{
		cout << "지역번호 : 충청남도" << endl;
	}

	else if (area < 55)
	{
		cout << "지역번호 : 전라북도" << endl;
	}
	else if (area < 67)
	{
		cout << "지역번호 : 전라남도" << endl;
	}
	else
	{
		cout << "지역번호 : 경상도" << endl;
	}
	if (array[12] - 48 == 11 - ((array[0] - 48) * 2 + (array[1] - 48) * 3 + (array[2] - 48) * 4 + (array[3] - 48) * 5 + (array[4] - 48) * 6 + (array[5] - 48) * 7 + (array[6] - 48) * 8 + (array[7] - 48) * 9 + (array[8] - 48) * 2 + (array[9] - 48) * 3 + (array[10] - 48) * 4 + (array[11] - 48) * 5) % 11 % 10)
	{
		cout << "주민등록번호 유효성 검사: 일치" << endl;
	}
	else
	{
		cout << "주민등록번호 유효성 검사: 불일치" << endl;
	}


}