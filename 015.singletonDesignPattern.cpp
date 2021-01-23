#include <iostream>
#include <string>
using namespace std;

class Singleton
{
    static Singleton* INSTANCE;
    string s1="Initial";
    public:
        Singleton* getInstance()
        {
            if(!INSTANCE)
            {
                INSTANCE = new Singleton();
            }
            return INSTANCE;
        }
        bool set(string str)
        {
          s1 = str;
          return true;
        }
        string get()
        {
          return s1;
        }
    private:
        Singleton(){}
};

Singleton *Singleton::INSTANCE = 0;

int main() {

  Singleton *firstObject = firstObject->getInstance();
  cout<< firstObject->get()<<endl;

  firstObject->set("First value");

  Singleton *secondObject = secondObject->getInstance();
  cout<< secondObject->get()<<endl;

  if(firstObject == secondObject)
  {
    cout<< "Both objects are same "<<endl;
  }

}
