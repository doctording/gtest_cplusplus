#include <cstdio>
#include <cstring>
#include <string>

#include "fun.h"
#include "IsPrimeParamTest.h"

#include "gtest/gtest.h"

#ifdef _DEBUG  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtestd.lib")  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtest_maind.lib")  
#else  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest.lib")  
#pragma comment(lib, "E:\\gtest1.7.0\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest_main.lib")   
#endif


//TEST(fun, Foo)  
//{  
//	EXPECT_EQ(1, Foo(1,8)); 
//	EXPECT_EQ(20, Foo(2,8)); 
//	EXPECT_EQ(8, Foo(24,16)); 
//}

//TEST(fun2, isDigit)  
//{  
//	ASSERT_PRED1(isDigit, '2');
//	ASSERT_PRED1(isDigit, 'a');
//	ASSERT_PRED1(isDigit, 47);
//}

//使用参数测试
TEST_P(IsPrimeParamTest, HandleTrueReturn)
{
	Mytype dt =  GetParam();
	ASSERT_PRED1(myfunc, dt);
}

// 定义参数
INSTANTIATE_TEST_CASE_P(TrueReturn, IsPrimeParamTest,
	testing::Values(Mytype(1,2),
					Mytype(48, '0'), 
					Mytype(65, 'A'), 
					Mytype(65, 65), 
					Mytype(66, 'A'))
					);

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);  
	
	return RUN_ALL_TESTS();

	//return 0;
}