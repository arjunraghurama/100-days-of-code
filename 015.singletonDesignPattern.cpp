#include <iostream>
#include <string>
using namespace std;

class Singleton
{
    static Singleton* INSTANCE;
    string s1="Initial";
    public:
        static Singleton* getInstance()
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

Singleton *Singleton::INSTANCE;

int main() {

  Singleton *firstObject = Singleton::getInstance();
  cout<< firstObject->get()<<endl;

  firstObject->set("First value");

  Singleton *secondObject = Singleton::getInstance();
  cout<< secondObject->get()<<endl;

  if(firstObject == secondObject)
  {
    cout<< "Both objects are same "<<endl;
  }
  
  return 0;

}
