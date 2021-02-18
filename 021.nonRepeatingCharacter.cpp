#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
  string s = "loveleetcode";

  std::map<char, int> charMap;
  for(auto c : s)
  {
    if(charMap[c] >=1)
    {
      charMap[c]+=1;
    }
    else
    {
      charMap[c] = 1;
    }
  }

  for(auto c : s)
  {
    if(charMap[c] ==1)
    {
      cout<<"First unique char is : "<<c<<endl;
      break;
    }
  }

  return 0;
}
