#pragma once

class Cal
{
public:

	Cal(int _a = 0, int _b = 0):a(_a), b(_b){}
	~Cal();

	int add();

	int sub();

	void setA(int _a);
	
	void setB(int _b);
private:
	int a;
	int b;
};
