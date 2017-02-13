#include "MessageProvider.hpp"
#include "ControlMessage.hpp"

void MessageProvider::setConnector(Connector * conn) {
  connector = conn;
  isConnected = conn->connect();
}

void MessageProvider::sendData(const char data[128]) {
  connector->sendData(data);
}

void MessageProvider::addControlProcessor(MessageProcessor * processor) {
  controlProcessors.push_back(processor);
}

bool MessageProvider::removeControlProcessor(MessageProcessor * processor) {
  for (size_t i = 0; i < controlProcessors.size(); ++i) {
    if (controlProcessors[i] == processor) {
      controlProcessors.erase(controlProcessors.begin() + i);
      return true;
    }
  }
  return false;
}

void MessageProvider::sendMessage(Message * message) {
  sendData(message->getMessage().c_str());
}

void MessageProvider::receiveMessage(const char data[256]) {
  // check for message type...
  ControlMessage message;
  for (size_t i = 0; i < controlProcessors.size(); ++i) {
    controlProcessors[i]->receiveMessage(&message);
  }
}
