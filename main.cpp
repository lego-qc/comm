#include "ControlMessage.hpp"
#include "ControlMessageProcessor.hpp"
#include "MessageProvider.hpp"
#include "SfmlConnector.hpp"

int main() {
  MessageProvider provider;
  SfmlConnector connector;
  provider.setConnector(&connector);
  ControlMessageProcessor processor;
  provider.addControlProcessor(&processor);

  ControlMessage message;
  provider.sendMessage(&message);
}
