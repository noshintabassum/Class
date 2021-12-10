#include<iostream>
#include<conio.h>
using namespace std;


//declaring a class----

//classKeyword className {  publicKeyword:   variables-----functions--------};


class student{


   public:

   int id;

   double gpa;


};





int main(){




//declaring an object------

//className objectName;---

student kylie;

student kendall;



//using object kylie----

kylie.gpa = 4.50;

kylie.id = 787;

cout<<endl<<"kylie's id : "<<kylie.id<<endl<<"kylie's gpa : "<<kylie.gpa<<endl;



//using object kendall----


kendall.id = 788;

kendall.gpa = 4.43;

cout<<endl<<"kendall's id : "<<kendall.id<<endl<<"kendall's gpa : "<<kendall.gpa<<endl;




getch();


}
