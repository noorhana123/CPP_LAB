/*
5. Polar coordinates are represented in angle and radius format while rectangular
coordinates represented as (x,y). Define classes for both types and include member
functions to convert from polar to rectangular coordinates.(conversion from class to class.)
*/
#include <iostream>
#include <cmath>

using namespace std;

class polar{
double radius,angle,radian;
public:
polar(double r,double a){
radius=r;
angle=a;
}
double getRadius(){
return (radius);
}
double getAngle(){
    radian=(angle*3.14159)/180;
return(radian);
}
};

class rect{
double x,y;
public:
    rect (){};
    rect(polar p){
    x=p.getRadius()*cos(p.getAngle());
    y=p.getRadius()*sin(p.getAngle());
    }
    void display(){
    cout<<"Rectangular Form is \n";
    cout<<"X= "<<x<<"\n"<<"Y = "<<y<<endl;
    }
};

int main(){
cout<<"-----POLAR TO RECTANGULAR CONVERSION-----\n";
double r,a;
rect R;
cout<<"\nEnter the radius = ";
cin>>r;
cout<<"\nEnter the angle(in degree)= ";
cin>>a;
polar P(r,a);
R=P;
R.display();
return 0;
}
