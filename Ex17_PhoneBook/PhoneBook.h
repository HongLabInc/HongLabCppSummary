/*
    홍정모 연구소 https://honglab.co.kr/
*/

#ifndef PHONE_BOOK_H_
#define PHONE_BOOK_H_

const int kMaxStr = 20; // 문자열의 최대 글자 수

struct Contact
{
    char name[kMaxStr];
    char phone[kMaxStr];
};

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    bool IsEmpty();
    bool IsFull();
    void PrintAll();
    void PrintContact(int i);
    void AddContact();
    void AddContact(const char name[], const char phone[]);
    int FindByName();
    bool IsEqual(const char str1[], const char str2[]);
    void DeleteByName();

private:
    int capacity_ = 3; // 연락처 최대 개수 (변경 가능)
    int num_contacts_ = 0;
    Contact *contacts_ = nullptr;
};

#endif