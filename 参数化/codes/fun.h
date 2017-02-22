#ifndef _FOO_H_  
#define _FOO_H_  

#include "DataTypes.h"

#include "DataTypes.h"
bool myfunc(Mytype dt)
{
	return dt.a == dt.b;
}

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

bool IsPrime(int n)
{
	// Trivial case 1: small numbers
	if (n <= 1) return false;

	// Trivial case 2: even numbers
	if (n % 2 == 0) return n == 2;

	// Now, we have that n is odd and n >= 3.

	// Try to divide n by every odd number i, starting from 3
	for (int i = 3; ; i += 2) {
		// We only have to try i up to the squre root of n
		if (i > n/i) break;

		// Now, we have i <= n/i < n.
		// If n is divisible by i, n is not prime.
		if (n % i == 0) return false;
	}
	// n has no integer factor in the range (1, n), and thus is prime.
	return true;
}

#endif//_FOO_H_