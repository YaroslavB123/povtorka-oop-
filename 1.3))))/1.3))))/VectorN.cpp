/*
�  ���  ���������,  ���  ��������  �  �������  ��������,  ���������� ����� ���� ��������� ������� ������:
-����� ����������� Init();
-����� �������� � ��������� Read();
-����� ��������� �� ����� Displ��();
-����� ������������ �� �������� ����� toString()
*/

#include "VectorN.h"
#include <iostream>
#include <string>
#include <sstream>
#include < cmath >

using namespace std;
void VectorN::Display() const
{
	cout << toString();
	cout << endl;
}

void VectorN::Init(int N, int  el, int i)
{
	setN(N);
	a.reserve(N);
	setA(el, i);
}

void VectorN::Read()
{
	int N, el;
	// ��������� �������
	cout << "��������� �������: "; cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "������� �" << i + 1 << " = "; cin >> el;
		Init(N, el, i);
	}
	Display();
	int option;
	cout << "   ĳ� ��� ��������" << endl;
	cout << "(1)�������� �� ������" << endl;
	cout << "(2)���������� ������� �������" << endl;
	cout << "(3)ĳ� ��� ���������" << endl;
	cout << "������ ��: ";			cin >> option;
	switch (option)
	{
	case 1:
		cout << "������ ������: "; cin >> k;
		mScalar(k);
		break;
	case 2:
		lVector();
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
}

string VectorN::toString() const
{
	stringstream sout; // �������� ��'��� "������� ����"
	// ����������� � ������� ����
	string vect;
	for (int i = 0; i < N; i++)
	{
		ostringstream strg;
		strg << a[i];
		vect += strg.str() + "; ";
	}
	sout << "������ = { " << vect << "}" << endl;
	cout << " N = " << N << endl;
	cout << "������ = " << a[0] << endl;
	// ��������� ����� ��� ��'���
	return sout.str();	// str() ���������� ������� ���� �� �������� �����
}

/*
	���������� ����� ���� ���������:
- �������� �� ������,			k*a = (k*a[0], k*a[1])
- ���������� ������� �������,	|a| = sqrt(a[0]^2 +a[1]^2..+a[n]^2)
- ��������� �������,			a[0] == b[0] .. a[n] == b[n]
- ��������� ������ �������.	|a| == |b|
*/

void VectorN::mScalar(int k)
{
	for (int i = 0; i < N; i++)
	{
		a.at(i) = a[i] * k;
		cout << a[i] << endl;
	}
	Display();
}
int VectorN::lVector()
{
	int length = 0;
	for (int i = 0; i < N; i++)
	{
		length += a[i] * a[i];
	}
	length = abs(sqrt(length));
	return length;
}
bool VectorN::Compare(VectorN name)
{
	if (getN() == name.getN())
	{
		bool tf;
		int tfr = 0;
		for (int i = 0; i < N; i++)
		{
			tf = a[i] == name.a[i];
			if (tf == false)
			{
				tfr += 1;
			}
		}
		if (tfr == 0)
		{
			cout << "������� �������.";
			return true;
		}
		else if (tfr > 0)
		{
			cout << "������� �� �������.";
			return false;
		}
	}
	else
	{
		cout << "��������� ������� �� ��������!";
		return false;
	}
}
bool VectorN::lCompare(VectorN name)
{
	bool lc = lVector() == name.lVector();
	if (lc)
	{
		cout << "������� ������� ���." << endl;
		return true;
	}
	else if (!lc)
	{
		cout << "������� ������� �� ���." << endl;
		return false;
	}
}
