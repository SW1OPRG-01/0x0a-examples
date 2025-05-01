#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <vector>
#include "professor.h"


class Department {
  public:
    Department(std::string name);
    std::string getName() const;
  private:
    std::vector<Professor> _professors;
    std::string _name;
};

#endif