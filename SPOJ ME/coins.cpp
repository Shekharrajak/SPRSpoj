/* This is C++ sample code for game that lets user guess the number generated by program. We are using
this game to demontrate the use of while loop*/
#include <iostream> // library that contains basic input output functions
#include <cstdlib> // library that contains random numbers generation functions
#include <time.h> // library that contains time functions.
#include <string> // library to use advanced c++ strings

using namespace std;

int main()
{
    bool play_again = true;
    while(play_again == true) //loop will run on user's entered choice to play game again or not
    {
      /* setting time as feed to generate random number.it help us generate different random depend upon 
      computer's current time.time(NULL) provides current time stamp*/
      srand(time(NULL));  
      int number =  rand() % 100 + 1; //generating and storing and random number between 1-100
  	  /* while loop will be terminated on this flag. When user will enter
      correct number as generrated by computer, this flag will be set to true*/
      bool is_guess_correct = false; 
  	  int input_number; //will be used to save user input number 
  	  int attempts_count = 1; // keep track of attempts user has made to guess correct number
    
      //this loop will take number again and again until user enters correct number
  	  while(is_guess_correct == false) 
  	  {
          //Displaying different prompt lines for first and all other attempts
  		    if(attempts_count == 1) // if it is first attempt to guess the number then don't print "Again"
  		    {
  				  cout << "Enter Number : ";
  		    }
  		    else
  		    {
    				cout << "Enter Number Again : "; //this line will be printed on all attempts except first one
  		    }
  		    cin >> input_number; // taking number as input in input_number
          
          /*Check if input number is same as that of randomly generated number or not*/
  		    if(input_number == number)
  		    {
            //We are here because user entered same number as generated by computer
    				 cout << "Congratulation! You have guessed the correct number in " << attempts_count << " attempts" << endl;
    				 is_guess_correct = true; //settting this flag to true because we want to terminate loop
  		    }
  		    else
  		    {
            //We are here because user did not entered same number as generated by computer
    				 attempts_count++; // increamenting attempts
             /*Displaying informational message that helps user to determine number quickly*/
    				 if(input_number < number) //if user entered number is less than random number 
    				 {
    				   cout << "Entered number is small than then number to be guess." << endl;
    				 }
    				 else  //if user entered number is greater than random number
    				 {
    				   cout << "Entered number is greater than then number to be guess." << endl;
    				 }
  		    }
  	  }
      //Asking user if he/she want to continue game or not
      string choice;
      cout << "Press Y to play again or any other key to terminate : ";
      cin >> choice;
      //if user enters any other key than Y/y, set play_again flag to false
      if(choice != "Y" && choice != "y")
      {
        play_again = false;
      }
	 }
   return 0; //Successful teermination of program returns zero
}
