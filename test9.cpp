#include <iostream>
using namespace std;
int c(int n,int k)
{
    if (k>n)
        return 0;
    else if(n==k||k==0)
        return 1;
    else
       return  c(n-1,k)+c(n-1,k-1);
}
int main(void)
{
    int n,k;
    cout<<"please key in  n  and k"<<endl;
    cin>>n>>k;
    cout<<c(n,k)<<endl;
}
