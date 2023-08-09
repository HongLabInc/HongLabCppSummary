/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <cstring>

#include "MyClass.h" // <- 설명

using namespace std;

int main()
{
    MyClass my_class1;
    MyClass my_class2(123);

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class1.Print();

    // 배열 사용 가능
    // 포인터 사용 가능 등 안내
    // 기본 자료형과 비교

    return 0;
}
