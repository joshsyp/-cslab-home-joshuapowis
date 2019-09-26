#include <iotream>
#include <string>

using namespace std;

bool Palindrome(LinkList<char> &list)
{
LinkList<char> clist=list;

int length str;

bool Palindrome = true;

cout<< "enter word";

getline (cin,str);

length=str.length();

    for (int i =0; i < len/2; i++)
    {
        if (str[i] != str[(length-1) -i])
        Palindrome=false;
    }

    if (Palindrome == true)

        cout<<str<< "is Palindrome" <<endl;

        else

        cout<< str << "Error"<< endl;

    return 0;
}  