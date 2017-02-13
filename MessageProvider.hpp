#ifndef messageprovider_h
#define messageprovider_h

class MessageProvider;

#include <vector>
#include "Connector.hpp"
#include "Message.hpp"
#include "MessageProcessor.hpp"

class MessageProvider {
  private:
    std::vector<MessageProcessor*> controlProcessors;
    Connector * connector = nullptr;
    bool isConnected = false;
    void sendData(const char data[128]);

  public:
    void setConnector(Connector * connector);
    void addControlProcessor(MessageProcessor * processor);
    bool removeControlProcessor(MessageProcessor * processor);
    void sendMessage(Message * message);
    void receiveMessage(const char data[256]);
};

#endif
