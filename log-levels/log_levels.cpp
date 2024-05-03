#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

namespace log_line
{
  string message(string line)
  {
    int pos = line.find(": ");
    // std::string::size_type pos = line.find(": ");
    // cout << pos << endl;
    // cout<< line.substr(pos+2)<<endl;
    return line.substr(pos + 2);
  }

  string log_level(string line)
  {
    int pos1 = line.find("[");
    int pos2 = line.find("]");
    return line.substr(pos1 + 1, pos2 - 1);
  }

  string reformat(string line)
  {
    return message(line) + " (" + log_level(line) + ")";
  }
}
