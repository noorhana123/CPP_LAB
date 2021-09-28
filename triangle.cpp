#include <iostream>
#include <cmath>
using namespace std;

class shape{
private:
    int a,b,c;
public:
    void getata(){
    cout << "Enter the sides of Triangles \n";
    cin >> a >> b >> c;
    }
    void validity(){
    if(a<(b+c) && b<(a+c) && c<(a+b)){
        cout<< "The side of Triangle is Valid \n";
        display();
        area();
    }else
    cout << "Invalid side ! \n";
    }

    void display(){
    cout << "\n sides are =" << a <<"," << b <<"," << c;
    }
    void area(){
     float ar,p;
     p=(a+b+c)/2;
     ar=sqrt(p*(p-a)*(p-b)*(p-c));
     cout << " \nArea of Triangle is \n" << ar;
    }
};
int main(){
shape s;
s.getata();
s.validity();
}
