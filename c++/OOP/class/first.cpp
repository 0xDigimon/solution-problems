#include<iostream>
using namespace std;
class first{
    public:
            float h;
            float w;
    float Rectangel(float h,float w){
        float z;
        z= h*w*0.5;
        cout << "area is = "<<z<<endl;
    };
};

int main(){
    first f1;
    f1.h=5;
    f1.w=4;
    f1.Rectangel();
    return 0;

}