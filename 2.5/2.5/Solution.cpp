#include "Solution.h"
#include<iostream>

#include <string>
#include<sstream>
using namespace std;

void Solution::Init(Liquid liquid, int  amount)
{
	setLiquid(liquid);
	setAmount(amount);
}
void Solution::Display() const
{
	cout << endl;
	cout << " Рідина" << endl;
	liquid.Display();
	cout << toString() << endl;
}
void Solution::Read()
{
	int amount;
	cout << "Рідина:" << endl;
	liquid.Read();
	cout << "Відносна к-сть речовини: "; cin >> amount;
	Init(liquid, amount);
}
string Solution::toString() const
{
	stringstream sout;

	sout << "Відносна к-сть речовини: " << amount << endl;
	return sout.str();
}

Solution::Solution(const string name, const int density, const int amount)
	: liquid(name, density), amount(amount)
{}

Solution::Solution(const Solution& s)
{
	liquid = s.liquid;
	amount = s.amount;
}
Solution& Solution::operator = (const Solution& s)
{
	liquid = s.liquid;
	amount = s.amount;
	return *this;
}
ostream& operator << (ostream& out, const Solution& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Solution& s)
{
	int amount;
	cout << endl;
	cout << "liquid = ? "; in >>
		s.liquid;
	cout << "amount = ? "; in >> amount;

	s.setAmount(amount);
	return in;
}
Solution::operator string () const {
	stringstream ss;
	ss << "amount = " << amount << endl;
	return string(liquid) + ss.str();
}
Solution& Solution::operator ++ () {
	++liquid;
	return *this;
}
Solution& Solution::operator -- () {
	--liquid;
	return *this;
}
Solution Solution::operator ++(int)
{
	Solution s(*this);
	liquid++;
	return s;
}
Solution Solution::operator --(int)
{
	Solution s(*this);
	liquid--;
	return s;
}
Solution::~Solution(void)
{}