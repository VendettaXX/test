#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int Stringlen(string x)
{
    int i;
    for(i=0;x[i]!='\0';i++);
    return i;
}
int CheckSting(string x)
{
    int i=Stringlen(x);
    for(int j=0;j<=i;j++)
    {
        if (x[j]!=x[i-j-1])
            return 0;

    }
    return 1;
}
int main()
{
    string a;
    cin>>a;
    cout<<CheckSting(a)<<endl;


}
