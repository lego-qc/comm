#ifndef message_h
#define message_h

class Message;

#include <string>

class Message {
  public:
    virtual std::string getMessage() = 0;
};

#endif
