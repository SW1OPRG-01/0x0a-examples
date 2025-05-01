#include "professor.h"  

Professor::Professor(std::string name) : _name(name) { }

void Professor::setUniversity(University  *university) {
  _university = university;
}

std::string Professor::getUniversity() const { 
  return _university->getName();
}