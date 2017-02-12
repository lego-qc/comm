#include "Connector.hpp"

void Connector::addListener(MessageProvider * provider) {
  listeners.push_back(provider);
}

bool Connector::removeListener(MessageProvider * provider) {
  for (size_t i = 0; i < listeners.size(); ++i) {
    if (listeners[i] == provider) {
      listeners.erase(listeners.begin() + i);
      return true;
    }
  }
  return false;
}
