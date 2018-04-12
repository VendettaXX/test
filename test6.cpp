#include <iostream>
using namespace std;
int CheckNumber(unsigned long long int x)
{
    int i=0;
    for(;x!=0;)
    {
        x=x/10;
        i++;
    }
    return i;
}
int main(void)
{
     unsigned long long int i;
    cout << "please key in number"<< endl;
    cin >> i ;
    cout<<"total number is"<< CheckNumber(i)<<endl;
    int n=CheckNumber(i);
    for(int i=1;)
}
