#include <ostream>
#include <string>

class Command {
 public:
 Command(std::string name, std::string args) : m_name(name), m_args(args) {}
 std::ostream& print(std::ostream& input);

 private:
 std::string m_name;
 std::string m_args;
};
