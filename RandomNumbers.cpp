#include <iostream>
#include <string>
#include "vector.h"

using namespace std;

//Part 1 Define a void funtion that take a vector and an int as a parameter named vec and n respectively.
//It should assign n random # between 1-100  to vec.

//Part 2 Define void function that take a vector reference as parameter.
//It should reverse the element of the vector parameter.


void RandomNumbers(Vector<int>&vec,int n)
{
    vec.Clear();
    for(int i=0;i<n;i+=1)

    {
        vec.Insert(rand()%100+1);
    }
}

void Reverse(Vector<int>&vec)   
{
    int tmp;
    int n = vec.Size();

    for (int i=0;i<n/2;i+=1)
    {
        tmp = vec [i];
        vec[i]=vec [(n-1)-i];
        vec[(n-1)-i]=tmp;

    }
}


int main()
{
    srand(time(NULL));
    Vector<int> t;
    RandomNumbers(t,10);
    cout<< t << "\n";
    Reverse(t);
    cout<< t << "\n";
    
    return 0;
}
