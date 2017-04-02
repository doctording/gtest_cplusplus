#ifndef SRC_MOCKMESSENGER_H_
#define SRC_MOCKMESSENGER_H_

#include "Messgener.h"
#include <string>
#include <gmock/gmock.h>
using namespace std;

class MockMessenger : public Messenger
{
public:
    MOCK_METHOD0(getMessage, string());
    MOCK_METHOD2(add, int(int, int));
};

#endif /* SRC_MOCKMESSENGER_H_ */
