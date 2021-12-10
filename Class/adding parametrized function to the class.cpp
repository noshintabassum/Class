#include<iostream>
#include<conio.h>
using namespace std;


 class student{


 public:

    int id;

    double gpa;

    void display(){


        cout<<id<<"  "<<gpa<<endl<<endl<<endl;


    }

    void setValue(int x, double y){


        id = x;

        gpa = y;

    }



 };





int main(){



    student kylie, kendall;


    cout<<"student kylie : "<<endl<<endl;

    cout<<"id   gpa"<<endl;

    kylie.setValue(768, 4.76);

    kylie.display();



    cout<<"student kendall : "<<endl<<endl;

    cout<<"id   gpa"<<endl;

    kendall.setValue(769, 4.74);

    kendall.display();





getch();

}
