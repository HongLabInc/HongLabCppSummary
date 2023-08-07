/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <string>

#include "PhoneBook.h"

using namespace std;

int main()
{
    PhoneBook my_phonebook;

    // 초기 데이터
    my_phonebook.AddContact("홍정모", "1234-1234");
    my_phonebook.AddContact("둘리", "8585-2324");
    my_phonebook.AddContact("아이언맨", "7432-9897");

    int menu_number;

    while (true)
    {
        cout << "1: 모두 출력\n";
        cout << "2: 검색\n";
        cout << "3: 추가\n";
        cout << "4: 삭제\n";
        cout << "X: 종료\n";
        cout << "메뉴를 선택해주세요 : ";

        cin >> menu_number;
        cin.ignore();

        // if-else 대신에 switch 사용 가능
        if (menu_number == 1) // 모두 출력
        {
            my_phonebook.PrintAll();
        }
        else if (menu_number == 2) // 검색
        {
            my_phonebook.FindByName();
        }
        else if (menu_number == 3) // 추가
        {
            my_phonebook.AddContact();
        }
        else if (menu_number == 4) // 삭제
        {
            my_phonebook.DeleteByName();
        }
        else
        {
            cout << "종료합니다." << endl;
            break;
        }
    }

    return 0;
}

/*
    전화번호부 필요한 기능들
    - 모두 출력, 이름으로 찾기(검색)
    - 추가, 삭제

    더 해볼 것들
    - 파일 저장 및 읽어들이기
*/
