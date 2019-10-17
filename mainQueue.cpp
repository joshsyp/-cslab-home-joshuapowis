#include <iostream>
#include <string>
#include <sstream>
#include "Node.h"
#include "Queue.h"

using namespace std;
using namespace ds;

void countToNBinary(int n)
{
    Queue <string> queue;
    string val;
    string binary[2]={"0","1"};
    
    if (n>=1)
    {
        cout<<"1\n";
    }
    queue.Enqueue("1");
    for (int i=2;i<=n;i+=1)
    {
        val=queue.Peek();
        val+=binary[i%2];
        cout<<val<<"\n";
        queue.Enqueue(val);
        if(i%2==1)
        {
            queue.Dequeue();
        }
    }
}
 int main ()
{
    countToNBinary (100);
return 0;
}