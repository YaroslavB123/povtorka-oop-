// lab1_3.cpp
// ������ �������
// ����������� ������ � 1.3
// �ᒺ��� ���������� ������ (䳿 ��� ������� �ᒺ�����)
// ������ 23
#include <iostream>
#include<iomanip>
#include<time.h>
#include <locale>
#include "windows.h"
#include "VectorN.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    VectorN FirstVector;
    FirstVector.Read();
    VectorN SecondVector;
    SecondVector.Read();
    cout << endl;
    cout << "(1)��������� �������" << endl;
    cout << "(2)��������� ������ �������" << endl;
    cout << "������ ��: ";
    int option;
    cin >> option;
    if (option == 1)
    {
        SecondVector.Compare(FirstVector);
    }
    else if (option == 2)
    {
        SecondVector.lCompare(FirstVector);
    }
}
;