#include <iostream>

#include "professor.h"
#include "university.h"

int main() {

  University aarhus("Aarhus University");
  aarhus.addDepartment("Department of Electrical and Computer Engineering");
  aarhus.addDepartment("Department of Medicine");
  aarhus.addDepartment("Department of Computer Science");

  Professor jbb = Professor("Jens Bennedsen");
  jbb.setUniversity(&aarhus);

  std::cout << jbb.getUniversity() << std::endl;

  return 0;
}