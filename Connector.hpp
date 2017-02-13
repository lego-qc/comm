#ifndef connector_h
#define connector_h

class Connector;

#include <vector>
#include "MessageProvider.hpp"

class Connector {
  private:
    std::vector<MessageProvider*> listeners;

  public:
    virtual bool connect() = 0;
    void addListener(MessageProvider * provider);
    void notifyListeners(const char data[256]);
    bool removeListener(MessageProvider * provider);
    virtual void sendData(const char data[128]) = 0;
    virtual void receiveData() = 0;
};

#endif
