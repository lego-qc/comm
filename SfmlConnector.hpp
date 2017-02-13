#ifndef sfmlconnector_h
#define sfmlconnector_h

class SfmlConnector;

#include <SFML/Network.hpp>
#include "Connector.hpp"

class SfmlConnector : public Connector {
  private:
    sf::TcpSocket socket;

  public:
    virtual bool connect();
    virtual void sendData(const char data[128]);
    virtual void receiveData();
    ~SfmlConnector();
};

#endif
