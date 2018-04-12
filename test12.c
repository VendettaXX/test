#include <stdio.h>
int const X=456;
int main(void)
{
    int a[10]={1,2,4,33,45,67,89,127,345,456};
    int low=0,high=9,mid;
    while(low<=high)
    {

        mid=(low+high)/2;
        if (a[mid]<X)
        {
            low=mid+1;
        }
        else if(a[mid]>X)
        {
            high=mid-1;
        }
        else {
            printf ("%d\n",mid);
            return 1;
        }
    }
    printf("None");
}
