/*
	홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

int main()
{
	// 0이 아니면 true다 안내
	// 나머지 연산자 안내
	// 줄 바꿈 '\n' newline
	// 블럭 내용이 한 줄일 경우에는 {} 생략 가능

	int number;

	cin >> number;

	if (number % 2 == 0)
		cout << "Even\n";
	else
		cout << "Odd\n";

	// 조건 연산자 (삼항 연산자)
	cout << (number % 2 == 0 ? "Even" : "Odd") << endl;

	// switch - case

	switch (number)
	{
	case 0:
		cout << "Number 0" << endl;
		break; // 주의
	case 1:
		cout << "Number 1" << endl;
		break;
	default:
		cout << "Other" << endl;
		break; // 마지막은 생략 가능
	}

	return 0;
}
