#include "Liquid.h"
#include<iostream>

#include <string>
#include <sstream>
using namespace std;

void Liquid::Init(string name, int  density)
{
	setName(name);
	setDensity(density);
}
void Liquid::Display() const
{
	cout << toString();
}
void Liquid::Read()
{
	string name;
	int  density;
	cout << "Введіть назву: "; cin >> name;
	cout << "Введіть густину: "; cin >> density;
	Init(name, density);
}
string Liquid::toString() const
{
	stringstream sout;           // створили об'єкт класу "літерний потік"
	sout << "Назва: " << name << endl;
	sout << "Густина: " << density << endl;
	return sout.str();
}


Liquid::Liquid()
	: name(""), density(0)
{}
Liquid::Liquid(const string name
)
	: name(name), density(0)
{}
Liquid::Liquid(const int density
)
	: name(""), density(density
	)
{}
Liquid::Liquid(const string name, const int density
)
	: name
	(name), density(density
	)
{}
Liquid::Liquid(const Liquid&
	m
)
	: name(
		m.name), density(
			m.density)
{}
Liquid& Liquid::operator =
(const Liquid&
	m
	)
{
	this
		->name
		=
		m.name;
	this
		->density =
		m.density;
	return
		*this
		;
}
ostream& operator <<
(ostream& out, const Liquid&
	m
	)
{
	out << string
	(
		m);
	return out
		;
}
istream& operator >>
(istream& in, Liquid&
	m
	)
{
	string name;
	int density;
	cout << endl;
	cout << "name = ? "; in >> name;
	cout << "density = ? "; in >> density;
	m.setName(name);
	m.setDensity(density);
	return in;
}
Liquid::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "name = " << name << endl;
	ss << "density = " << density << endl;
	return ss.str();
}
Liquid& Liquid::operator ++ ()
{
	++density;
	return *this;
}
Liquid& Liquid::operator -- ()
{
	--density;
	return *this;
}
Liquid Liquid::operator ++ (int)
{
	Liquid t(*this);
	density++;
	return t;
}
Liquid Liquid::operator -- (int)
{
	Liquid t(*this);
	density--;
	return t;
}
Liquid::~Liquid(void)
{}
