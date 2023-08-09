/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <cstring>

using namespace std;

// public, private 접근 권한 안내

class MyString
{
public:
    MyString()
    {
        // 호출 시점 확인
        cout << "MyString()" << endl;

        size_ = 1;
        str_ = new char[size_];
    }

    MyString(const char *init_str) // init_str이 유효한 메모리라고 가정
    {
        cout << "MyString(const char *init_str)" << endl;

        // 1. 글자 수 먼저 확인
        size_ = 0;
        while (init_str[size_] != '\0')
        {
            size_++; // ++ 연산자 안내
        }

        // 2. 글자 수가 0이 아니면 메모리 할당
        if (size_ > 0)
        {
            str_ = new char[size_];
        }

        // 3. 복사
        for (int i = 0; i < size_; i++)
        {
            str_[i] = init_str[i];
        }
        // memcpy() 사용 가능
    }

    ~MyString()
    {
        // 호출 시점 확인
        cout << "Destructor" << endl;

        size_ = 0;
        if (str_)
            delete[] str_;
    }

    void Resize(int new_size)
    {
        char *new_str = new char[new_size];

        // memcpy() 사용 가능
        for (int i = 0; i < (new_size < size_ ? new_size : size_); i++)
        {
            new_str[i] = str_[i];
        }

        delete[] str_;
        str_ = new_str;
        size_ = new_size;

        // new_str 지우면 안되요!
    }

    void Print()
    {
        for (int i = 0; i < size_; i++)
        {
            cout << str_[i];
        }
        cout << endl;
    }

    void Append(MyString *app_str) // 같은 타입을 매개변수로 사용 가능
    {
        int old_size = size_;

        // 다른 멤버 함수 호출 가능
        // Resize(...);

        // 중요한 개념
        for (int i = old_size; i < size_; i++)
        {
            // TODO: 복사
        }
    }

private:
    int size_ = 0;        // m_size
    char *str_ = nullptr; // m_str (여기서는 구글 스타일)
};

int main()
{
    // 클래스 기본 문법 안내

    MyString str1("ABCDE"); // 생성자 이용
    MyString str2("123");

    str1.Append(&str2); // 주소 넣어줌

    str1.Print();

    return 0;
}
