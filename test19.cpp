#include <iostream>
using namespace std;
class CStu{
    public:
        int nage;
        double dScore;
        Cstu(){
            nage=12;
            dScore=12.12;

        }
};

void operator+(Cstu &st,int a){
    cout << (st.nage+a) << endl;
}
int main()
{
    CStu st1;
    CStu st2;
    st1+12;
    return 1;
}
