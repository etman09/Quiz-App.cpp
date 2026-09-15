#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class quiz_app
{
  public:

       int grade = 0 ;

       char answer ;


void display1 ()
{



  cout<<"=== Quiz App ===";

  cout<< endl ;

  cout<<"Q1: What is the heighest mountain peak in the world?" << endl;

  cout<<"a) The Alps" << endl ;
  cout<<"b) The Himalayas" << endl ;
  cout<<"c) The Andes" << endl ;

  cout<<"Your answer: ";




cin>> answer ;

    while (answer != 'a' && answer != 'b' && answer != 'c' )

 {

 cout<< "Invalid input!" << endl;

 cout<< "Try again : " ;

  cin >> answer ;

 }



  if ( answer == 'b' )
  {
         cout<<"Correct!";

         grade ++ ;
   }
   else
    cout<<"Wrong! Correct answer: b";

cout<< endl ;
cout<< endl ;
cout<< endl ;

////////////////////////////////////////////////


  cout<<"Q2: What is the largest ocean in the world?" << endl;

  cout<<"a) The Pacific Ocean" << endl ;
  cout<<"b) The Atlantic Ocean" << endl ;
  cout<<"c) The Indian Ocean" << endl ;

  cout<<"Your answer: ";

    cin >> answer ;


    while (answer != 'a' && answer != 'b' && answer != 'c' )

 {

 cout<< "Invalid input!" << endl;

 cout<< "Try again : " ;



        cin >> answer;
 }

  if ( answer == 'a' )
  {
      cout<<"Correct!";

      grade++ ;
  }

   else
    cout<<"Wrong! Correct answer: a";

cout<< endl ;
cout<< endl ;
cout<< endl ;

cout<<"=== Quiz Complete ===";

cout<< endl ;

cout<<"Score: " << grade << " / 2" ;

}

};

int main()
{

    quiz_app q1 ;

    q1.display1() ;



}
