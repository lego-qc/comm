#ifndef messageprocessor_h
#define messageprocessor_h

class MessageProcessor;

#include "Message.hpp"

class MessageProcessor {
  public:
    virtual void receiveMessage(Message * message) = 0;
};

#endif
