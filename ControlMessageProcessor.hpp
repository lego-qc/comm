#ifndef controlmessageprocessor_h
#define controlmessageprocessor_h

class ControlMessageProcessor;

#include "MessageProcessor.hpp"

class ControlMessageProcessor : public MessageProcessor {
  public:
    virtual void receiveMessage(Message * message);
};

#endif
