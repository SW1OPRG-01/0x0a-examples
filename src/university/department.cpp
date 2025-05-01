#include "department.h"

Department::Department(std::string name) : _name(name) { }

std::string Department::getName() const { 
  return _name;
}