#include "FooEnvironment.h"


void FooEnvironment::SetUp()
{
	std::cout << "Foo FooEnvironment SetUP" << std::endl;
}


void FooEnvironment::TearDown()
{
	std::cout << "Foo FooEnvironment TearDown" << std::endl;
}
