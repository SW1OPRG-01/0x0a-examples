#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
#include "university.h"

class Professor {
  public:
    Professor(std::string name);
    void setUniversity(University  *university);
    std::string getUniversity() const;
  private:
    std::string _name;
    University *_university;  
};

#endif