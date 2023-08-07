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
		cout << "짝수입니다.\n";
	else
		cout << "홀수입니다.\n";

	// 조건 연산자 (삼항 연산자)
	cout << (number % 2 == 0 ? "짝수입니다." : "홀수입니다.") << endl;

	// switch - case

	switch (number)
	{
	case 0:
		cout << "정수 0입니다." << endl;
		break; // 주의
	case 1:
		cout << "정수 1입니다." << endl;
		break;
	default:
		cout << "그 외의 숫자입니다." << endl;
		break; // 마지막은 생략 가능
	}

	return 0;
}
