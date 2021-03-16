#include <iostream>
#include <vector>
using namespace std;

class QuickFind{

  private:
  std::vector<int> union_array;

  public:
  QuickFind(int size)
  {
    for(int i= 0; i< size;++i)
    {
      union_array.push_back(i);
    }
  }

  int FindConnection(int a , int b)
  {
    return union_array[a] == union_array[b];
  }

  void Union(int a , int b)
  {
    int val_a = union_array[a];
    int val_b = union_array[b];

    for(int i=0; i< union_array.size(); ++i)
    {
      if(union_array[i] == val_a)
      {
        union_array[i] = val_b;
      }
    }
  }

  void Print()
  {
    for(auto i :union_array )
    {
      cout<<i <<" ";
    }
  }
};
int main() {
  int n =10;

  QuickFind qf(n);

  int a = 4, b=3;
  qf.Union(a,b);
  qf.Union(3,8);

  qf.Union(2,1);

  cout<<" Is connected : " <<qf.FindConnection(2, 1)<<endl;
  
  return 0;
}
