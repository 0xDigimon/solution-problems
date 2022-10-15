#include<iostream>
using namespace std ;
class Employee{
    private:
    string Name,Company,Address;
    int Age;
    public:
    void setName(string name){
        Name =name;
    }
    void setCompany(string company){
        Company =company;
    }
    void setAddress(string address){
        Address = address;
    }
    void setAge(int age){
        if(age>=20)
        {
        Age =age;
        }
        
    }
    string getName(){
        return Name;
    }
    string getCompany(){
        return Company;
    }
    string getAddress(){
        return Address;
    }
    int getAge(){
        return Age;
    }
    void introduceyourself(){
        if(Age>=20)
        {
        
        cout<<"Hello My Name's " <<Name<<" "<<"and i'm work in "<<Company
        <<"\n"<<"my Address is "<<Address<<"\n"<<"my Age is "<<Age<<"\n";
        }
        else{
            cout<<"u r underage!"<<"\n";
        }
        

    }
    Employee(string N,string C,string A,int age){
        Name = N;
        Company = C;
        Address = A;
        Age =age;
        

    }

};
int main(){
    
    
    Employee Employee1 = Employee ("Abdoo","Company","Address",23) ;
    Employee1.introduceyourself();
    cout<<"\n";
    Employee Employee2=Employee("Ahmed","Company","Address",18);;
    Employee2.introduceyourself();
    Employee1.setName("Abdoo2");
    Employee1.getName();
    Employee1.introduceyourself();

    /* Employee1.Name="abdoo";
    Employee1.Company="company name";
    Employee1.Address="Address";
    Employee1.Age=23;
    Employee2.Name="abdoo2";
    Employee2.Company="company name2";
    Employee2.Address="Address2";
    Employee2.Age=232;
    Employee1.introduceyourself();
    Employee2.introduceyourself(); */

    
}