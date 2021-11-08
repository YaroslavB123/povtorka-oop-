#pragma once
#include <string>

using namespace std;
class Liquid
{
private:
	string name; // Назва рідини
	int density; // Густина

public:
	string getName() const { return name; };
	int getDensity() const { return density; };

	void setName(string value) { name = value; };
	void setDensity(int value) { density = value; };

	void Init(string name, int  density);
	void Display() const;
	void Read();
	string toString() const;

	Liquid();
	Liquid(const string name);
	Liquid(const int density);
	Liquid(const string name, const int density);
	Liquid(const Liquid& m);
	Liquid& operator = (const Liquid& m);
	friend ostream& operator << (ostream& out, const Liquid& m);
	friend istream& operator >> (istream& in, Liquid& m);
	operator string () const;
	Liquid& operator ++ ();
	Liquid& operator -- ();
	Liquid operator ++ (int);
	Liquid operator -- (int);
	~Liquid(void);

};

