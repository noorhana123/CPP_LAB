#include <iostream>
using namespace std;
struct phone{
int area,exchange,number;
};
int main(){
struct phone p1,p2;
p1.area = 212;
p1.exchange = 767;
p1.number = 89000;

cout << "Enter your Area_code \n";
cin >> p2.area;
cout << "Enter your exchange number \n";
cin >> p2.exchange;
cout << "Enter your Number \n";
cin >> p2.number;

//printing

cout << "\nMy number is  " << "(" <<p1.area<< ")" <<   p1.exchange   <<   p1.number   ;
cout << "\nYour number is " << "(" <<p2.area<< ")" <<   p2.exchange   <<   p2.number ;

}
