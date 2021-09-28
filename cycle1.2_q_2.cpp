/*
2. Write a program to find shortest distance between three coordinates points,
representing vertices of a triangle, using inline function. Also check the
validity of the sides to make a triangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

inline float sides(float a, float b, float c, float d){
return(sqrt(pow((b-a),2)+pow((d-c),2)));
}
inline float big(float x,float y,float z){
if(x<y&&x<z)
    return x;
else if(y<z)
    return y;
else
    return z;
}


int main(){
float a1,a2,a3,b1,b2,b3,A,B,C,value;
cout<<"Enter the co-ordinates of triangle int he form x1,y1,x2,y2,x3,y3 \n";
cin>>a1>>b1>>a2>>b2>>a3>>b3;
A=sides(a1,b1,a2,b2);
B=sides(a2,b2,a3,b3);
C=sides(a1,b1,a3,b3);
cout << "The Sides of the triangles \n";
cout << "\t" <<A << "\t"<<B<<"\t"<<C; //change1
if (A + B <= C || A + C <= B || B + C <= A){ //change 2
  cout<<"\n Invalid sides"<<endl;
}
    else
    {
         value=big(A,B,C);
         cout<<"\nThe Shortest Distance is " <<value ;
    }

}