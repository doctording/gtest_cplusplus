#include "Cal.h"

//Cal::Cal(int _a = 0, int _b = 0)
//{
//	this->a = _a;
//	this->b = _b;
//}

Cal::~Cal()
{
}

int Cal::add()
{
	return this->a + this->b;
}

int Cal::sub()
{
	return this->a - this->b;
}

void Cal::setA(int _a)
{
	this->a = _a;
}

void Cal::setB(int _b)
{
	this->b = _b;
}