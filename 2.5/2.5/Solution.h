#pragma once
#include "Liquid.h"
#include <string>

using namespace std;
class Solution
{
private:
	Liquid liquid; // рідина
	int amount; // Відносна к-сть речовини

public:
	Liquid getLiquid() const { return liquid; };
	int getAmount() const { return amount; };

	void setLiquid(Liquid value) { liquid = value; };
	void setAmount(int value) { amount = value; };

	void Init(Liquid liquid, int  amount);
	void Display() const;
	void Read();
	string toString() const;

	Solution(const string name = "", const int density = 0, const int amount = 0);
	Solution(const Solution& s);
	Solution& operator = (const Solution& s);
	friend ostream& operator << (ostream& out, const Solution& s);
	friend istream& operator >> (istream& in, Solution& s);
	operator string () const;
	Solution& operator ++ ();
	Solution& operator -- ();
	Solution operator ++ (int);
	Solution operator -- (int);
	~Solution(void);
}; 
