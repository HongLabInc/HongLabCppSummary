#include "MyClass.h" // 선언 헤더 꼭 include

#include <iostream>

using namespace std; // 보통 .h 파일 대신 .cpp에 사용

MyClass::MyClass()
{
    // 호출 시점 확인
    cout << "MyClass()" << endl;
}

MyClass::MyClass(int number) // init_str이 유효한 메모리라고 가정
{
    cout << "MyClass(int number)" << endl;

    // this pointer 소개
    this->number_ = number;
}

MyClass::~MyClass()
{
    // 호출 시점 확인
    cout << "~MyClass()" << endl;
}

void MyClass::Increment(int a)
{
    number_ += a;
}

void MyClass::Print()
{
    cout << number_ << endl;
}