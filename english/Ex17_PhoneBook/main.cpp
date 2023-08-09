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
    my_phonebook.AddContact("Jeong-Mo Hong", "1234-1234");
    my_phonebook.AddContact("Barbie", "8585-2324");
    my_phonebook.AddContact("Ironman", "7432-9897");

    int menu_number;

    while (true)
    {
        cout << "1: Print all\n";
        cout << "2: Find by name\n";
        cout << "3: Add\n";
        cout << "4: Delete \n";
        cout << "X: Exit\n";
        cout << "Menu : ";

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
            cout << "Exiting." << endl;
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
