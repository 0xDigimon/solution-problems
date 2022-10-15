#ifndef SAS_H
#define SAS_H
#include<iostream>
#include<string>
#pragma once

class sas
{
public:
    int a;
    void setA(int b){
        a=b;
    }
    int getA(){
        return a;
    };
    sas(void)
    {
    a=444;
    };
    ~sas();

private:

};

#endif