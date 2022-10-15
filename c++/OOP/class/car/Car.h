#include<iostream>
using namespace std;
#include <string>
class car
{
private:
    string Company,Model;
    int Year;
public:
    void setCompany(string company)
    {
        Company=company;
    }
    void setModel(string model)
    {
        Model=model;
    }
    string getCompany()
    {
        return Company;
        
    }
    string getModel()
    {
        return Model;
        
    }
    void setYear(int year)
    {
        Year=year;
    }
    int getYear()
    {
        return Year;
        
    }
    car(string c ,string m ,int y)
    {
        Company=c;
        Model=m;
        Year=y;
    }
    void carInformation()
    {
        cout<<"Your Car from: "<<Company<<"\n"<<"Your Car Model is: "<<Model<<"\n"<<"Your Car Year is: "<<Year<<"\n";
    }
};