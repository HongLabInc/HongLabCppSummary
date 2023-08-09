/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

const int kMaxStr = 100; // 전역 변수 소개

// 함수 (선언과 정의 분리 가능)
int Add(int a, int b)
{
    return a + b; // 반환값 안내
}

// 반환 자료형이 지정되지 않았음 (void)
void Add(int a, int b, int *c)
{
    *c = a + b;
}

int main()
{
    cout << Add(1, 2) << endl;

    int sum;
    Add(4, 5, &sum);

    cout << sum << endl;

    return 0;
}
