#include <iostream>
using namespace std;
class Test
{
    public:
    Test(int x)
        :_b(x)
        ,_a(_b)
    {
        cout << _a<<endl<<_b<<endl;
    }

private:
    int _a;
    int _b;
};
int main(void)
{
    Test A(10);
}
