#// Generic Function

#include <iostream>
#include <iostream>
using namespace std;


template<typename T>
T& max(const T&x, const T&y)
{
    if (x>y)
    {
        return x;
    }
    else{
        return y;
    }
}

int main()

int (x,y);
{
    cout << Max(3,4) << "\n";
    cout << Max('a','A')<< "\n";
    cout << Max(4.423,21.32)<< "\n";
    cout << Max ("Hello, World")<< "\n";


    cin >> x;
    cin >> y;

    cout << Max(x,y) << "\n";
    cout << Max<float>(2.34,21.32) <<"\n"


    return 0;
}