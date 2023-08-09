/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <cstring>

using namespace std;

const int kMaxStr = 100; // 전역 상수

int Min(int a, int b)
{
    return a < b ? a : b; // 조건연산자(삼항연산자)
}

int main()
{
    // 문자열 복사
    char str1[] = "Hello, World!";
    char str2[kMaxStr];

    // dest, src 안내 (복사할 메모리 크기 주의)
    memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
    cout << str2 << endl;

    char *dynamic_array = new char[kMaxStr];

    // 주의: 동적할당 메모리는 변수 사이즈가 포인터 사이즈임 (배열이 아님)
    memcpy(dynamic_array, str1, Min(sizeof(str1), sizeof(kMaxStr)));
    // memcpy(dynamic_array, str2, kMaxStr);
    cout << dynamic_array << endl;

    cout << str1 << " " << str2 << " " << dynamic_array << endl;
    cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_array) << endl;

    // 보통 크기를 별도로 저장함

    delete[] dynamic_array; // 배열 삭제시 []

    // 지우지 않고 재할당할 경우 잃어버림
    // dynamic_array = new char[원하는크기];
    // delete[] dynamic_array; 다시 지워줘야 함

    return 0;
}
