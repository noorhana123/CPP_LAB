/*
4. Write a function called power() that takes a double value for n and an int
value for p, and returns the result as a double value. Create a series of
overloaded functions with the same name that, in addition to double, also
work with types char, int, long, and float. Write a main() program that
exercises these overloaded functions with all argument types.
*/

#include <iostream>
using namespace std;

double power(double n,int p){
int i;
double product=1;
for(i=0;i<p;i++){
  product = product*n;
}
return (product);
}

double power(int n,int p){
int i;
int product=1;
for(i=0;i<p;i++){
  product = product*n;
}
return (product);
}


double power(float n, int p){
int i;
float product=1;
for(i=0;i<p;i++){
  product = product*n;
}
return (product);
}

double power(int n, char letter){
    int p=0;
if(letter=='s')
     p=2;
else if(letter=='c')
    p=3;
else{
    cout<< "invalid input "<<endl;
    return 0;
}
int i,product=1;
for(i=0;i<p;i++){

  product = product*n;
}
return (product);
}



int main(){
    int opt;

    cout << "\t Power calculator " <<endl;
    cout << "Choose the option " <<endl;
    cout << " 1 Base-double Exponent-int \n 2 Base-int Exponent-int \n 3 Base-float Exponent-int \n 4 Base-int Exponent-char \n";
cin >> opt;
switch(opt){
case 1:{
double b;
    int e;
    cout<<"Enter the Base and Exponent "<<endl;
    cin>>b>>e;
    double r = power(b,e);
    cout << r;
    break;
}
case 2:{
int b,e;
    cout<<"Enter the Base and Exponent "<<endl;
    cin>>b>>e;
    int r = power(b,e);
    cout << r;
    break;
}

case 3:{
float b;
    int e;
    cout<<"Enter the Base and Exponent "<<endl;
    cin>>b>>e;
    double r = power(b,e);
    cout << r;
    break;
}
case 4:{
 char e;
    int b;
    cout << "Enter the base and Exponent (square-'s',cube-'c')" << endl;
    cin>>b>>e;
    double r = power(b,e);
cout << r;
}

}

}
