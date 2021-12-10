#include<iostream>
#include<conio.h>
using namespace std;


//declaring class----


class student{


    public:

        int id;

        double gpa;

        void display(){


           cout<<id<<"  "<<gpa<<endl<<endl<<endl;


        }


};



int main(){


    student kylie;

    student kendall;


    //using student kylie-------

    cout<<"student kylie : "<<endl<<endl;

    cout<<"id   gpa"<<endl;

    kylie.gpa = 4.67;

    kylie.id = 786;

    kylie.display();




    //using student kendall-------


    cout<<"student kendall : "<<endl<<endl;

    cout<<"id   gpa"<<endl;

    kendall.gpa = 4.63;

    kendall.id = 787;

    kendall.display();








getch();

}


