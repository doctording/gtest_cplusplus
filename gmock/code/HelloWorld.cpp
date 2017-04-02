#include "HelloWorld.h"
#include "Messgener.h"

HelloWorld::HelloWorld()
{
}

HelloWorld::~HelloWorld()
{
}

string HelloWorld::getMessage(Messenger* messenger) const
{
    return messenger->getMessage();
}

int HelloWorld::hello_add(Messenger* messenger,int a, int b) const
{
    return messenger->add(a, b);
}
