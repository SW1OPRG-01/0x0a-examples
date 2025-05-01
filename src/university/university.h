#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "department.h"

class University {
  public:
    University(std::string name);
    void addDepartment(std::string name);
    std::string getName() const;
  private:
    std::string _name;
    std::vector<Department> _departments;
};

#endif