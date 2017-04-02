#include "HelloWorld.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "MockMessgener.h"
#include <string>
#include <memory>

using namespace testing;

class HelloWorldTest : public ::testing::Test
{
public:
	HelloWorldTest() {}
	virtual ~HelloWorldTest() {}

	virtual void SetUp() {
	}
	virtual void TearDown() {
	}
public:
	MockMessenger mock_messenger;
	HelloWorld helloWorld;
};

TEST_F(HelloWorldTest, hello_add)
{
	int a = 3;
	int b = 11;
	EXPECT_CALL(mock_messenger, add(a, b)).WillRepeatedly(Return(a+b));
	
	EXPECT_EQ(14, helloWorld.hello_add(&mock_messenger, a, b));
	
	a = 1;
	b = 2;
	EXPECT_CALL(mock_messenger, add(a, b)).WillRepeatedly(Return(a + b + 100));
	EXPECT_EQ(103, helloWorld.hello_add(&mock_messenger, a, b));
}

TEST_F(HelloWorldTest, getMessage)
{
	std::string msg = "Hello World";
	EXPECT_CALL(mock_messenger, getMessage()).WillRepeatedly(Return(ByRef(msg)));
	
    	EXPECT_EQ("Hello World", helloWorld.getMessage(&mock_messenger));
   	EXPECT_EQ("Hello World", helloWorld.getMessage(&mock_messenger));
}
