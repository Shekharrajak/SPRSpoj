#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{

string text;
char again = 'y';
int letterOne = 0, letterTwo = 0;

while (again == 'y')
{
cout << "Enter a line of text.\n";
getline(cin, text);

    for(int i = letterOne; i < text.size(); i++)
    {
            if(text[i] == ' ' && text[i] != ',')
            {
            letterTwo = i;
            if((letterTwo - letterOne) == 5)
            {
            text.replace(letterOne + 1, 4, "love");

            if (letterOne == 0)
            {
            text.replace(letterOne, 4, "Love");
            }

            if (text[i] == '\0')
            text.replace(letterOne - 1, 4, "love");
            }
            letterOne = i;
            }
    }

cout << text << endl;

cout << "Would you like to try again? (y/n): ";
cin >> again;
}

     system("PAUSE");
     return 0;
}
