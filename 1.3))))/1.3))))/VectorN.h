/*
�  ���  ���������,  ���  ��������  �  �������  ��������,  ���������� ����� ���� ��������� ������� ������:
-Init();
-Read();
-Displ��();
-toString()
	����:
 N � ��������� �������,
 a � ����� ������ �����, ���� ������ ������.
	���������� ����� ���� ���������:
- �������� �� ������,
- ��������� �������,
- ���������� ������� �������,
- ��������� ������ �������.
- "TO STRING!"
*/

#pragma once
#include <vector>
#include <string>
#include <iostream>
#include<iomanip>
using namespace std;
class VectorN
{
private:

	int N,	 // ��������� �������
		k;	 // ������
	vector<int> a; // ����� ������ �����, ���� ������ ������

public:
	int getN() const { return N; };
	//int getA() const { return a; };
	int getK() const { return k; };

	void setN(int value) { N = value; };
	void setA(int value, int i) { a.insert(a.begin() + i, value); };
	void setK(int value) { k = value; };

	void Init(int N, int  el, int i);
	void Read();
	void Display() const;

	void mScalar(int k);			// �������� �� ������
	int  lVector();					// ���������� ������� �������
	bool Compare(VectorN name);		// ��������� �������
	bool lCompare(VectorN name);	// ��������� ������ �������
	string toString() const;

};

