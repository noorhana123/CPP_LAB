/*
7. Write a C++ program to create a class STUDENT with age name and register number.
Using Inheritance, derive two classes MTech-stud and BTech-stud.List both the category of
students in the increasing order of marks( for BTech-stud) and gpa( for MTech-stud). In
case of tie, display whichever name comes first. Make sort() function as a virtual function.
*/

#include <iostream>
using namespace std;

class STUDENT{
protected:
    string name;
    int age,reg_no;
public:
    void getData();
    virtual void getMark(){};
    virtual int retMark(){};
   virtual int sortting(){cout<<"error";};
    void outPut();
};

class Btech:public STUDENT{
protected:
    int mark;
public:
    void getMark();
    int retMark(){
    return(mark);
    }
   int sortting();
};
class Mtech:public STUDENT{
protected:
     float gpa;
public:
    void getMark();
   // int sort();
};

void STUDENT::getData(){
cout<< "Enter the Register Number, Name,Age\n";
cin>>reg_no>>name>>age;
}
void STUDENT::outPut(){
    int mark=retMark();

  cout<<reg_no<<"\t"<<name<<"\t"<<mark<<endl;

}

void Btech::getMark(){
cout<<"Enter the marks"<<endl;
cin>>mark;
}

int Btech::sortting(){

}

void Mtech::getMark(){
cout<<"Enter the GPA"<<endl;
cin>>gpa;
}



int main(){

    int i,j,key,n,f;
    STUDENT *str;
    STUDENT temp;
    Btech b[20],t;
    Mtech m;

    cout<<"Select \n 1.Btech \n 2.Mtech \n";
    cin >> key;
    switch(key){
     case 1:
       cout<< "Enter the number of Btech Students" <<endl;
       cin>> n;
 //str=b;
        for(i=0;i<n;i++){

            b[i].getData();
            b[i].getMark();

        }

      /*   for(i=0;i<n;i++){
            str=&b[i];
            str->sortting();

        }
        cout<<"checking"<<endl;;
        t=b[1];
        str=&t;
        str->outPut();


      /* for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
                 str=&b[i];
                f=str[j]->sortting();
                cout <<"before"<<f<<endl;
                if(f==1){
                        cout <<"f="<<f<<endl;
                     temp=*str[j];
                  *str[j]=*str[j+1];
                  *str[j+1]=temp;

                   t=b[j];
                  b[j]=b[j+1];
                  b[j+1]=t;
                }

        }
                  }
*/

                  cout<<"RegNo.\tName\tMarks"<<endl;

            for(i=0;i<n;i++){

                b[i].outPut();
            }
       /*        break;
     case 2:
         cout<< "Enter the number of Mtech Students" <<endl;
       cin>> n;

     for(i=0;i<n;i++){
            str[i]=&m;
            str[i]->getData();
            str[i]->getMark();
            }
*/
            break;
    }


return 0;
}


