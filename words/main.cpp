#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
  ifstream in("/usr/share/dict/words");
  string s;
  while(in >> s)
  {
    if(s.find("dup")!=string::npos) cout << s << '\n';
  }
  return 0;
}
