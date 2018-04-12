#include <iostream>
#include <stdio.h>
using namespace std;
enum a{
    one=1,two=10,three,four,five
}A,B,C,D,E;

int square(int a,int b)
{
    return a*a+b*b;
}
double square(double a,double b)
{
    return a*a+b*b;
}
int main(void)
{
    int a,b;
    double c,d;
    A=one;
    B=two;
    C=three;
    D=four;
    E=five;
    printf("A=%d\nB=%d\nC=%d\nD=%d\nE=%d\n",A,B,C,D,E);
    cout << A<< B<<C<<D<<E<<endl;

    cout<<"please key in the two integer figure"<<endl;
    cin>> a>>b;
    cout<<square(a,b)<<endl;
    cout<<"please key in the two floating number"<<endl;
    cin>>c>>d;
    cout<<square(c,d)<<endl;
}
