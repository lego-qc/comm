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
    Connector * connector;
    void sendData(const char data[128]);

  public:
    void addControlProcessor(MessageProcessor * processor);
    bool removeControlProcessor(MessageProcessor * processor);
    void sendMessage(Message * message);
};

#endif
