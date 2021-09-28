/*
3. Write a program using operator overloading to overload Stream operators (&lt;&lt; and &gt;&gt;)
to read and display the objects of complex class.
*/

#include <iostream>
using namespace std;

class complex{
	float real,img;
	public:

	friend istream & operator >>(istream &,complex &);
	friend ostream & operator<<(ostream &,complex &);
	};

	

	ostream & operator<<(ostream &out,complex &c){
		cout<< "complex number= "<<endl;
		if(c.img>0){
            out<<c.real;
            cout <<" + ";
            out<<c.img<<"j";
            cout<<"\n";
		}

		else if(c.img<0){
            out<<c.real;
            cout<<"";
            out<<c.img<<"j";
            cout<<"\n";
		}

		else{
		out<<c.real;
		cout<<"\n";
		}
	}
    istream & operator>>(istream &in,complex &c){
        cout<< "Enter the real value of complex number \n";
		in>>c.real;
		cout<< "Enter the imaginary value of the complex number \n";
		in>> c.img;
		}

		int main(){
			complex c;
			cin>>c;
			cout<<c;
			return 0;
			}
