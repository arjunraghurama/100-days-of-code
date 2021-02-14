#include <iostream>
#include <stack>
#include <list>

using namespace std;

void TowerOfHanoi(int height, stack<int> &source, stack<int> &dest, stack<int> &temp)
{
    if (height >= 1)
    {
        TowerOfHanoi(height-1, source, temp, dest);
        dest.push(source.top());
        source.pop();
        TowerOfHanoi(height - 1, temp, dest, source);
    }
}

int main()
{
    list<int> src{ 1,2,3,4,5 };
    
    stack<int>source;
    for (auto i : src)
        source.push(i);
    stack<int>dest;
    stack<int>temp;
    
    TowerOfHanoi(5, source, dest, temp);
    
    return 0;
}
