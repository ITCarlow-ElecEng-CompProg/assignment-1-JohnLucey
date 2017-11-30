

/*Celcius to Fahrenheit Conversion
Created on 25-9-17
Author - John Lucey
Last Edited 25-9-17*/

//Pre-Programming Directive
#include <iostream>
using namespace std;

//Main Function
int main()
{
    //Decalring Variables
    double tf, tc;

    //Displays prog title
    cout <<"\n"<< "Celcius to Fahrenheit Conversion Calculator!" << endl;

    //Prompts user to enter celcius value
    cout<<"\n\n"<< "Enter Degrees in Celcius : ";

    //imput is stored
    cin>>tc;

    //conversion equation
    tf = 1.8*tc+32;

    //result displayed to user
    cout<<"\n"<<"Fahrenheit = "<<tf<<endl;

    return 0;
}
