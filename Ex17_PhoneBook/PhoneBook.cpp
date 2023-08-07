/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include "PhoneBook.h"

#include <cassert>
#include <iostream>
#include <cstring> // memcpy(.)

using namespace std;

PhoneBook::PhoneBook()
{
    contacts_ = new Contact[capacity_];
}

PhoneBook::~PhoneBook()
{
    if (contacts_)
        delete[] contacts_;
}

bool PhoneBook::IsEmpty()
{
    assert(num_contacts_ >= 0);

    if (num_contacts_ == 0)
        return true;
    else
        return false;
}

bool PhoneBook::IsFull()
{
    if (num_contacts_ == capacity_)
        return true;
    else
        return false;
}

void PhoneBook::PrintAll()
{
    for (int i = 0; i < num_contacts_; i++)
    {
        PrintContact(i);
    }
}

void PhoneBook::PrintContact(int index)
{
    cout << index << " ";
    cout << contacts_[index].name;
    cout << ", " << contacts_[index].phone << endl;
}

void PhoneBook::AddContact(const char name[], const char phone[])
{
    assert(!IsFull()); // 디버깅할 때 assert 괄호 안쪽 조건이 false가 되면 오류 처리

    memcpy(contacts_[num_contacts_].name, name, sizeof(contacts_[num_contacts_].name));
    memcpy(contacts_[num_contacts_].phone, phone, sizeof(contacts_[num_contacts_].phone));

    num_contacts_ += 1;
}

void PhoneBook::AddContact()
{
    // capacity_가 고정된 경우
    if (IsFull())
    {
        cout << "더 이상 추가할 수 없습니다." << endl;
        return;
    }

    // 더 해볼 것: 메모리를 재할당 받아서 연락처 개수 제한 없애기

    char new_name[kMaxStr];
    char new_phone[kMaxStr];

    cout << "이름을 입력해주세요 : ";
    cin.getline(new_name, sizeof(new_name));

    cout << "전화번호를 입력해주세요 : ";
    cin.getline(new_phone, sizeof(new_phone));

    AddContact(new_name, new_phone);
}

int PhoneBook::FindByName()
{
    char search_name[kMaxStr];

    cout << "검색할 이름을 입력해주세요 : ";
    cin.getline(search_name, sizeof(search_name));

    // TODO: IsEqual(), PrintContact(i), return i

    cout << search_name << " 님을 찾지 못했습니다." << endl;

    return -1;
}

bool PhoneBook::IsEqual(const char str1[], const char str2[])
{
    for (int i = 0; i < kMaxStr; i++)
    {
        if (str1[i] != str2[i])
            return false;

        if (str1[i] == '\0')
            return true;
    }

    return true;
}

void PhoneBook::DeleteByName()
{
    // 삭제할 때 메모리를 줄이지는 않는 것으로 할께요.

    int index = FindByName();

    if (index >= 0)
    {
        // TODO: 중간에서 삭제했을 경우 데이터 정리

        // TODO: num_contacts_ 하나 감소

        num_contacts_ -= 1;
    }
}