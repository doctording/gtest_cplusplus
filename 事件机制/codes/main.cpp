#include <cstdio>
#include <cstring>
#include <string>
#include "fun.h"
#include "FooEnvironment.h"
#include "FooCalcTest.h"
#include "gtest/gtest.h"

#ifdef _DEBUG  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtestd.lib")  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtest_maind.lib")  
#else  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest.lib")  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest_main.lib")   
#endif


TEST(fun, Foo)  
{  
	EXPECT_EQ(1, Foo(1,8)); 
	EXPECT_EQ(20, Foo(2,8)); 
	EXPECT_EQ(8, Foo(24,16)); 
}

TEST(fun2, isDigit)  
{  
	ASSERT_PRED1(isDigit, '2');
	ASSERT_PRED1(isDigit, 'a');
	ASSERT_PRED1(isDigit, 47);
}

TEST_F(FooCalcTest, HandleNoneZeroInput)
{
	EXPECT_EQ(99, Foo(24,16)); 
}

int main(int argc, char* argv[])
{
	testing::AddGlobalTestEnvironment(new FooEnvironment);
	::testing::InitGoogleTest(&argc, argv);  
	return RUN_ALL_TESTS();  

	//return 0;
}