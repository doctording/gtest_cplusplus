#include <cstdio>

#include "fun.h"


#include "gtest/gtest.h"

#ifdef _DEBUG  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtestd.lib")  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtest_maind.lib")  
#else  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest.lib")  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest_main.lib")   
#endif


TEST(fun, add)
{
	EXPECT_EQ(1, add(2, -1)); // 正确 2 + -1 = 1 
	EXPECT_EQ(3, add(2, 3));  // 错误 2 + 3 = 5 不是3 
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

	//return 0;
}