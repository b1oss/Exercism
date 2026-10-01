#include <string>
#include <iostream>

namespace log_line {
std::string message(std::string line) {
    return line.substr(line.find(" ") + 1);
}

std::string log_level(std::string line) {
    return line.substr(1, line.find("]") - 1);
}

std::string reformat(std::string line) {
    std::string log = " (" + line.substr(1, line.find("]") - 1) + ")";
    std::cout << line << std::endl;
    return line.substr(line.find(" ") + 1) + log;
}
}  // namespace log_line
