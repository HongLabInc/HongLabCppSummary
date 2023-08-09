/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 파일 출력
    /*{
        ofstream ofile;

        ofile.open("my_contacts.txt");
        ofile << "안녕하세요? 반갑습니다.\n";
        ofile << "두 번째 줄입니다.\n";
        ofile << "세 번째 줄입니다.\n";
        ofile.close();
    }*/

    // 파일 입력
    {
        char line[100];

        ifstream ifile;
        ifile.open("my_contacts.txt");

        int line_number = 0;
        while (ifile.getline(line, sizeof(line)))
        {
            cout << line_number << " : ";
            cout << line << endl;

            line_number += 1;
        }

        ifile.close();
    }

    return 0;
}
