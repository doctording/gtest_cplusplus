#pragma once

#include <iostream>
typedef struct Mytype
{
	int a;
	char b;

	Mytype(int _a = 0, char _b = 0)
	{
		a = _a;
		b = _b;
	}

	friend std::ostream& operator<<(std::ostream& out,const Mytype& mt)
	{
		out << "(" << mt.a << "," << mt.b << ")";
		return out;
	}

}Mytype;