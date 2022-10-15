#include "calculator.h"
calculator calculator::add(Calculator num1,calculator num2){
    calculator num3;
    num3 = num1+num2;
    return num3;
}
int main (){
    calculator c1;
    calculator c2;
    calculator c3;
    c3.add(c1(1,0),c2(1,2));
    cout<<c1.add(5,8)<<endl;
    cout<<c1.add(5,3,2)<<endl;
    cout<<c1.add(1,2,3,4)<<endl;
    
}
int calculator::add(int num1,int num2,int num3){
    return  num1+num2+num3;
}
int calculator::add(int num1,int num2,int num3,int num4){
    return num1+num2+num3+num4;
}

calculator::calculator()
{

}

calculator::~calculator()
{

}