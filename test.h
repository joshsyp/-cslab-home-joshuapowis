#ifndef TEST_H
#define TEST_H

#include<iostream>
#include<string>
#include<sstream>

class shape
{
double *sides;
int sidesCount;
public:

shape(): sides(NULL), sidesCount(0) {}
shape (const shape& obj) //copy constructor
{
    if (obj.sides == NULL)
    {
        sides = NULL;
        sidesCount=0;
    }
else
    {
    sidesCount=obj.sidesCount;
    sides = new double[sidesCount]; //sides is a dynamic
    for(int i=0;i<sidesCount;i+=1)
    {
        sides[i]=obj.sides[i];
    }
}
}
}

shape& operator=(const shape& rhs)
{
    if (this != &rhs)
    {

        shape (const shape& obj) //copy constructor
{
    if (obj.sodes == NULL)
    {
        sides = NULL;
        sidesCount=0;
}
else
{
    sidesCount=obj.sidesCount;
    sides = new double[sidesCount]; //sides is a dynamic
    for(int i=0;i<sidesCount;i+=1)
    {
        sides[i]=obj.sides[i];
    }
    return *this;
}
~shape()
{
    delete[] sides;
}

virtual double perimeter() const =0;
virtual double perimeter() =0;
virtual double Area() const =0;
virtual double Area() =0;
}
#endif
