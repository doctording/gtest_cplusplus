#ifndef SRC_MESSENGER_H_
#define SRC_MESSENGER_H_

#include <string>
using namespace std;

class Messenger
{
public:
    virtual ~Messenger() {}
    virtual string getMessage() = 0;
    virtual int add(int a, int b) = 0;
};

#endif /* SRC_MESSENGER_H_ */
