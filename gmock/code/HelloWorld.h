#ifndef SRC_HELLOWORLD_H_
#define SRC_HELLOWORLD_H_

#include <string>
#include "Messgener.h"
using namespace std;

class HelloWorld
{
public:
    HelloWorld();
    virtual ~HelloWorld();
    string getMessage(Messenger* messenger) const;
    int hello_add(Messenger* messenger, int a, int b) const;
};

#endif /* SRC_HELLOWORLD_H_ */
