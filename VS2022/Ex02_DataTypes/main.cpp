/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

int main()
{
    // 변수를 정의할 때 자료형을 미리 지정해야 합니다.
    // 자료형은 바꿀 수 없습니다.

    // 내부적으로 메모리를 이미 갖고 있습니다.
    int i;   // 변수 정의
    i = 123; // 변수에 값 지정 (객체 레퍼런스 아님)

    // sizeof 소개
    cout << i << " " << sizeof(i) << endl; // 추측해보세요.

    float f = 123.456f; // 마지막 f 주의
    double d = 123.456; // f 불필요

    cout << f << " " << sizeof(f) << endl; // 123.456 4
    cout << d << " " << sizeof(d) << endl; // 123.456 8

    // C++는 글자 하나와 문자열을 구분합니다.
    char c = 'a';

    cout << c << " " << sizeof(c) << endl; // a 1

    // 그 외에도 다양한 자료형이 존재합니다.

    // 형변환
    i = 987.654; // double을 int에 강제로 저장

    cout << "int from double " << i << endl; // 추측해보세요.

    f = 567.89; // 이것도 형변환

    // 기본 연산자

    // i = 987;
    i += 100; // i = i + 100;
    i++;      // i = i + 1;

    cout << i << endl; // 추측해보세요.

    // 불리언
    bool is_good = true;
    is_good = false;

    cout << is_good << endl; // 0

    cout << boolalpha << true << endl;   // true
    cout << is_good << endl;             // false
    cout << noboolalpha << true << endl; // 1

    // 논리 연산 몇 가지 소개 (참고 문서 사용)
    // https://en.cppreference.com/w/cpp/language/operator_precedence

    cout << boolalpha;
    cout << (true && true) << endl;  // 추측해보세요.
    cout << (true || false) << endl; // 추측해보세요.

    // 비교

    cout << (1 > 3) << endl;
    cout << (3 == 3) << endl;
    cout << (i >= 3) << endl;
    cout << ('a' != 'c') << endl;
    cout << ('a' != 'a') << endl;

    // 영역(scope)

    i = 123; // 더 넓은 영역

    {
        int i = 345;       // <- 더 좁은 영역의 다른 변수
        cout << i << endl; // 추측해보세요.
    }

    cout << i << endl; // 추측해보세요.

    return 0;
}
