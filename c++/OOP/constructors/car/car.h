#ifndef CAR_H
#define CAR_H
#include<iostream>
#pragma once
using namespace std;
class car{

private:
    string company,model;
    int year;
public:
    void setCompany(string Company){
        Company=company;
    }
    void setModel(string Model){
        Model=model;
    }
    void setYear(int Year ){
        Year=year;
    }
    string getCompany(){
        return company;
    }
    int getYear(){
        return year;
    }
    string getModel(){
        return model;
    }

    car(string c,string m,int y);
    void GetInformation(){
        cout<<"company is: "<<company<<endl<<"model is: "<<model<<endl<<"year is: "<<year<<endl;
    }
    car();
    ~car();
    /* car::car()
    {
        Company="aaaaa";
        Model="gg";
        Year=0;

    }


/* public:
    
    string Company;
    int Year;
    void setCompany(string c){
        Company=c;
    };
    void setYear(int y){
        Year=y;
    };
    string getCompany(){
        return Company;
    };
    int getYear(){
        return Year;
    };
    car();
    ~car(); */



};


#endif