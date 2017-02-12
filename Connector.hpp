#ifndef connector_h
#define connector_h

class Connector;

#include <vector>
#include "MessageProvider.hpp"

class Connector {
  private:
    std::vector<MessageProvider*> listeners;

  public:
    void addListener(MessageProvider * provider);
    bool removeListener(MessageProvider * provider);
    virtual void sendData(const char data[128]) = 0;
};

#endif
