#include <iostream>
#include <vector>

using namespace std;

class QuickUnion{

  private:
  std::vector<int> union_array;

  public:
  QuickUnion(int size){
    for (int i=0; i< size; ++i)
    {
      union_array.push_back(-1);
    }
  }

  int root(int element)
  {
    int i = element;
    while(union_array[i] > -1)
    {
      i = union_array[i];
    }
    return i;
  }

  bool isConnected(int a , int b)
  {
    return root(a) == root(b);
  }

  void connect(int a , int b)
  {
    int i = root(a);
    int j =  root(b);
    union_array[i] = j;
  }
};

int main() {

  int n =10;

  QuickUnion qu(n);

  qu.connect(4,3);
  qu.connect(3,8);
  qu.connect(2,1);

  cout<<" Is connected : " <<qu.isConnected(4, 8)<<endl;

  return 0;
}
