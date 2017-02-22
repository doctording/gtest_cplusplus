#ifndef _FOO_H_  
#define _FOO_H_  

int Foo(int m, int n)
{
	if( m <= 0  || n <= 0)
		throw "don't do that";

	if(m < n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}

	int r = m % n;
	while(r != 0){
		m = n;
		n = r;
		r = m % n;
	}
	
	return n;
}

bool isDigit(char c)
{
	if(c >= '0' && c <= '9')
		return true;

	return false;
}

#endif//_FOO_H_