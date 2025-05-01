#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
  public:
    Engine();
    void start();
    void stop();
  private:
    int horsePower;
    std::string type;
};

#endif