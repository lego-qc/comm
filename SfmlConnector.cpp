#include "SfmlConnector.hpp"

bool SfmlConnector::connect() {
  const char * ip = "127.0.0.1";
  const unsigned int port = 54000;

  sf::Socket::Status status = socket.connect(ip, port, sf::seconds(10));
  if (status != sf::Socket::Done) {
    return false;
  } else {
    return true;
  }
}

void SfmlConnector::sendData(const char data[128]) {
  if (socket.send(data, 128) != sf::Socket::Done) {
    // exception handling?
  }
}

void SfmlConnector::receiveData() {
  char data[256];
  size_t received;
  while (true) {
    if (socket.receive(data, 256, received) == sf::Socket::Done) {
      // received...
      notifyListeners(data);
    }
  }
}

SfmlConnector::~SfmlConnector() {
  socket.disconnect();
}
