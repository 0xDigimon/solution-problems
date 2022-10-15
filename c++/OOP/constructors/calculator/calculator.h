#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<iostream>
#include<string>
#pragma once
using namespace std;
class calculator
{
    
public:
    void setX(int x){
        X=x;
    }
    void setY(int y){
        Y=y;
    }
    int getX(){
        return X;
    }
    int getY(){
        return Y;
    }
    int add(int num1,int num2){
        return num1+num2;
    };
    int add(int num1,int num2,int num3);
    int add(int num1,int num2,int num3,int num4);
    calculator calculator::add(calculator num1,calculator num2);
    calculator();
    ~calculator();

private:
int X;
int Y;
};

#endif