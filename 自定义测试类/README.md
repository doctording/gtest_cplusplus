
自定义测试类，测试自己写的方法和类

---

# 运行环境

vs2015 + gtest 1.7.0

# 工程截图

![](./images/01.png)


其中Cal是个类

MyTestClass.cpp 主要是测试 Cal的，代码如下

```
#include "Cal.h"
#include <string>

#include "gtest/gtest.h"

#ifdef _DEBUG  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtestd.lib")  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Debug\\gtest_maind.lib")  
#else  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest.lib")  
#pragma comment(lib, "C:\\dwl\\gtest\\googletest-release-1.7.0\\msvc\\gtest\\Release\\gtest_main.lib")   
#endif

class MyTestClass : public ::testing::Test
{
public:
	MyTestClass() {}
	virtual ~MyTestClass() {}

	virtual void SetUp() {
		pCal = std::auto_ptr<Cal>(new Cal());
	}
	virtual void TearDown() {
	}
public:
	std::auto_ptr<Cal> pCal;
};

// 第一个参数必须是类名MyTestClass
TEST_F(MyTestClass, test_add)
{
	pCal->setA(2);
	pCal->setB(3);
	EXPECT_TRUE(pCal->add() == 5);
}

TEST_F(MyTestClass, test_sub)
{
	pCal->setA(2);
	pCal->setB(3);
	EXPECT_TRUE(pCal->sub() == -1);
}
```

---

# 运行截图
![](./images/02.png)