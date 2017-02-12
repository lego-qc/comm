#ifndef controlmessage_h
#define controlmessage_h

class ControlMessage;

#include <string>
#include "Message.hpp"

class ControlMessage : public Message {
  public:
    virtual std::string getMessage();
};

#endif
