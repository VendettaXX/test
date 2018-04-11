#include <iostream>
using namespace std;
int fun1(int i)
{
    int s=1;
    if (i==0)
        return 1;
    else
        s=fun1(i-1)*i;
    return s;
}
int main(void)
{
    int i;
    cin>>i;
    cout<<fun1(i)<<endl;
}
