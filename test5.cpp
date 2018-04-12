#include <iostream>
using namespace std;
double power(double x,int a)
{
    double power=1.0;

    for(;a>0;a--)
    {
        power*=x;
    }
    return power;
}
double CalculatePi (void)
{
    double Pi;
    double x1=0.0,x2=0.0;
    for(int i=1, j=1;power(0.2,i)>1e-15;i=i+2,j++)
    {
        x1+=(power(0.2,i)*power(-1,j+1));
    }
    for(int i=1,j=1;power(1/239.0,i)>1e-15;i=i+2,j++)
    {
        x2+=(power(1/239.0,i)*power(-1,j+1));
    }
    Pi=16.0*x1-4.0*x2;
    cout << x1<<","<<x2<<endl;

    return Pi;
}
int main(void)
{
    cout << power(1/239.0,1)<<endl;
    cout << power(0.2,1)<<endl;
    cout << CalculatePi() <<endl;
    return 1;
}

