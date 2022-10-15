#include "car.h"
#include<iostream>
using namespace std;
car::car(string c,string m,int y):company(c),model(m),year(y){
    cout<<"this is initial value"<<endl;
}
car::~car(){
    cout <<"bye bye"<<endl;
};
int main(){
    cout<<"This is first constractor"<<endl;
    car c1("TOYOTA","X4",2019);
    c1.GetInformation();
    car c2("DIMAX","4 DOORS",2020);
    
    c2.GetInformation();
}
