/*
4. A class representing distance is measured in the unit of feet and inches. Write a
program to do conversion from meter unit to objects of class type and objects of class type
to meter.
*/

#include <iostream>
using namespace std;

class Distance{
int feet,inches;
double METERS_PER_FOOT = 0.3048;
double INCHES_PER_FOOT = 12.0;
public:
    Distance(){feet=0;inches=0;}
    Distance(int f,int i){
        feet=f;
        inches=i;
    }
    Distance(double m){

        double heightInMeters = m;
        double heightInFeet = heightInMeters / METERS_PER_FOOT;
        feet = (int)heightInFeet;
        inches = (int)((heightInFeet - feet) * INCHES_PER_FOOT + 0.5);

    }
    operator double(){
        return((feet*METERS_PER_FOOT)+(inches*METERS_PER_FOOT/INCHES_PER_FOOT));
    }
    void outData(){
    cout<<"Distance in \nfeet  = "<<feet<<"\ninches  = "<<inches<<endl;
    }
};

int main(){
double m;
int x=1,f,i,l;
cout<<"---CONVERSION---"<<endl;
while(x!=0){
    cout<<"\nSELECT \n1. METER -> feet and inches \n2. feet and inches -> METER \n0. Exit"<<endl;
cin>>x;
switch(x){
case 1:{
        cout<<"Enter the Distance in meter unit\n";
        cin >>m;
        Distance d;

        d=m;
        d.outData();
        }
        break;
case 2:{
        cout<<"Enter the Distance in feet and inches units\n";
        cin >>f>>i;
        Distance d(f,i);
        m=d;
        cout<<"Distance in meter = "<<m<<endl;
        }
        break;
case 0: cout<<"EXIT \n";
break;
default:cout<<"Invalid input\n";
break;
}
}
return 0;
}
