#include <iostream>
using namespace std;
int main(void)
{
    int b;
    int c=10;
    int a=c+(a=5,b=5,a=a+b);
    cout<<a<<endl;
}
