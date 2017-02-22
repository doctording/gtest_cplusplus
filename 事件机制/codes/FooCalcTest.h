#pragma once

#include "gtest/gtest.h"

// TestCaseÊÂ¼ş
class FooCalcTest : public testing::Test
{
protected:
	virtual void SetUp();
	
	virtual void TearDown();
};