#pragma once

#include "gtest/gtest.h"

// 全局事件
class FooEnvironment : public testing::Environment
{
public:

	// 1. SetUp()方法在所有案例执行前执行
	virtual void SetUp();

	// 2. TearDown()方法在所有案例执行后执行
	virtual void TearDown();

};

