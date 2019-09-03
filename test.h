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
    sidesCount = obj.sidesCount;
    sides = new double[sidesCount]; //sides is a dynamic
    for(int i=0;i< sidesCount;i+=1)
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


//
//
//
class shape
{
    public:
    shape(int size): sidesCount(size)
{
    if (sidesCount<=0) 
{
    sidesCount=3;
}
    sides=new double [sidesCount];
    for (inti=0;i<sidesCount;i+=1)
{
    sides[i]=1.0;
}
}
//Encapsulation

int Getsides() const
{
    return sidesCount;
}

int Getsides()
{
    return sidesCount;
}

double Getsides (int index) const

{
    if(index>=0 && index < sidesCount)
    {
        return sides[index;]
    }
throw "out of bound";
}


//

int Getsides() const
{
    return sidesCount;
}

int Getsides()
{
    return sidesCount;
}

double Getsides (int index) const

{
    if(index>=0 && index < sidesCount)
{
        return sides[index;]
}
throw "out of bound";
}


void SetSide(int index, double value)
{
    if (index >=0 && index < sidesCount && value > 0)
{
    sides[index]=value;
}
}

const double& operator[](int index) const
{
    if(index > = 0 && index < sidesCount)
    {
        return sides[index];
    }
    throw "out of bound";
    }
    
double & opreator [](index)

{
if(index > = 0 && index < sidesCount)
    {
        return sides[index];
    }
    throw "out of bound";
}

// Inheritance

class Rectangle: public shape
{
    public:
    rectangle(): shape(2) {}
    Rectangle(double lenght,double width):
    Rectangle()
{
    if(length > 0 && width > 0)
    {
        SetSide(0,(length < width)?(length): (width));
        SetSide(1,(length > width)? (lenght): (width));
    }

}
}

Rectangle (const Rectangle & obj):
shape(dynamic_cast < const shape& > (obj)) {}

Rectangle & operator =(const rectangle & rhs)
{
    if(this !=&rhs)
    {
        shape::operator=(dynamci_cast <const shape & >(rhs));
    }
    return *this;
}

string ToString() const
{
    stringstream out;
    out << "[";
    for (int i=0;i<sidesCount;i+=1)
    {
        out<< sides[i];
        if(i+1 !=sidesCount)
        {
            out<<",";
        }
    }
    out<<"]";
    return out.str();
}


friend ostream& operator<<(ostream out, const Rectangle& obj)
{
    out << obj.ToString();
    return out;
}


//
~Rectangle () {}

void setWidth(double value)
{
    if(Getsides(1) > value && value > 0)
    {
        SetSide(0,value);
    }
}

void SetLength (double value)
{
    if (Getsides(0) < value && value > 0)
    {
        SetSide(1,value);
    }
}

double GetWidth()
{
    return Getsides(0);
}
double GetLength()
{
    return Getsides(1);
}
}

double perimeter() const
{
    return 2*(Getsides(0)+Getsides(1));

}
double perimeter()
{
    return 2*(Getsides(0)+Getsides(1));

}

double Area() const

{
    return Getsides(0)*Getsides(1);
}

double Area()
{
    return Getsides(0)*Getsides(1);
}

private:
    using   shape::Getside;
    using   shape::Setsides;
    using   shape::Getsides;
    using   shape::Getsides const;

// ToString method

string ToString() const
{
    stringstream out;
    out << "[";
    for (int i=0;i<sidesCount;i+=1)
    {
        out<< sides[i];
        if(i+1 !=sidesCount)
        {
            out<<",";
        }
    }
    out<<"]";
    return out.str();
}


friend ostream& operator<<(ostream out, const shape& obj)
{
    out << obj.ToString();
    return out;
}

