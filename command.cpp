#include "command.h"
#include <iostream>

std::ostream& Command::print(std::ostream& input) {
  input << m_name << " " << m_args;
  return input;
}
