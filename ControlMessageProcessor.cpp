#include <iostream>
#include "ControlMessageProcessor.hpp"

void ControlMessageProcessor::receiveMessage(Message * message) {
  std::cout << message->getMessage();
}
