#include <iostream>
#include <string>
using namespace std;
class Bird{
    public:
        Bird(){
            cout<< "I am a bird"<<endl;
            cout<<this->fly(1)<<endl;
        }
        Bird(string &str){

            cout <<"I am a bird"<<endl;
            if(str=="ji"){
               cout<<this->fly(0)<<endl;
            }

        }
        void fly(int a){
            if (a==1){
                cout <<"I can fly!"<<endl;
            }
            else if(a==0){
                cout <<"I can not fly!"<<endl;
            }
            else{
                cout <<"Error"<<endl;
            }
        }
};
int main(void)
{
    string a="ji";
    Bird c;
    Bird b(a);
    return 1;
}
