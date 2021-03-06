/*
main.cpp
variables_osx

Created by Alan Trevino De Arcos on 9/14/14.
Copyright (c) 2014 Alan Trevino. All rights reserved.

This program will teach exactly where and when to use different type of variables
 
 */

#include <iostream>
#include <string>
//#include <windows.h>
#include <unistd.h>
using namespace std;

int main(int argc, const char * argv[])
{

    //DECLARE!
    int example_one;
    short example_two;
    float example_three;
    char example_four;
    string example_five;
    
    
    cout << "Hello! This program will help teach you exactly when to use\n";
    cout << "different variable types. It is important to know which ones\n";
    cout << "exist and what they can do.\n\n\n";
    sleep(1);
    //Sleep(800)
    cout << "One thing you should know before we start is that all\n";
    cout << "data types CANNOT have the variable start with a\n";
    cout << "digit or have a symbol excempt for underscore ( _ )\n\n\n";
    sleep(1);
    //Sleep(1000);
    system("pause");
    
    
    //*****THE INT EXPLANATION
    
    cout << "Let's take INT for example.\n";
    cout << "Please type in as many numbers for INT.\n";
    cin >> example_one;
    sleep(1);
    //Sleep(1000);
    
    cout << "\n\n INT is " << example_one << "\n\n";
    cout << "The INT data type can store a 10 digit number\n";
    cout << "and only takes up 4 bytes of space.\n";
    cout << "This is the most common variable that is used and\n";
    cout << "is great for non-decimal numbers, basic operations, etc.";
    cout << "An example of how far INT stretches is this.\n\n";
    cout << "-2,147,483,648 to +2,147,483,648\n\n";
    cout << "The variable type LONG is the same as INT.\n\n\n";
    sleep(1);
    //Sleep(1000);
    cout << "There is also UNSIGNED INT which gets everyhing from\n";
    cout << "0 to 4,294,967,295. Look! No negatives! =D\n\n\n";
    sleep(2);
    //Sleep(2000);
    system("pause");
    
    
    
    
    
    //******* THE SHORT EXPLANATION
    
    cout << "The next variable is SHORT.\n";
    cout << "Short is great if you're not using big numbers.\n";
    cout << "Please type in as many numbers as you want.\n";
    cin >> example_two;
    sleep(1);
    //Sleep(1000;
    
    cout << "Short is " << example_two <<"\n\n";
    cout << "The SHORT data type can only hold a 5 digit number\n";
    cout << "and takes up 2 bytes of space!\n";
    cout << "SHORT isn't as popular as INT because it only holds\n";
    cout << "half of INT, but it can be very useful when using small numbers\n";
    cout << "An Example of how much SHORT can hold is from -32,768 to +32,768\n";
    sleep(1);
    //Sleep(1000);
    cout << "There is also a UNSIGNED SHORT, same a SHORT but without negative\n";
    cout << "numbers. 0 to 65,535\n\n\n";
    sleep(2);
    //Sleep(2000);
    system("pause");
    
    
    
    //******** THE FLOAT EXPLANATION
    
    
    cout << "The FLOAT data type can be used to define variables that\n";
    cout << "can hold real numbers. This data type includes the decimal\n";
    cout << "point, so this is ideal for currency variables, and science\n";
    cout << "equations. Go ahead and enter a number with a decimal.\n";
    cin >> example_three;
    cout << "\n\n\n";
    sleep(1);
    //Sleep(1000)
    
    cout << "The number you input was " << example_three << "\n\n";
    cout << "If you try to assign a decimal point to any other\n";
    cout << "data type, it will only record the number BEFORE the\n";
    cout << "decimal\n\n\n\n";
    sleep(2);
    //Sleep(2000)
    system("pause");
    
    
    //******** THE DOUBLE EXPLANATION
    
    cout << "The DOUBLE & LONG DOUBLE data type is similar to the FLOAT data type\n";
    cout << "in uses. Except it is prefered when making programs for scientists\n";
    cout << "because it can hold numbers that have are extremely large.\n";
    cout << "Take 1.7 E-308 as an example. That means you'll move the\n";
    cout << "decimal 308 times!\n\n\n";
    system("pause");
    
    
    
    //******* THE CHAR EXPLANATION
    
    cout << "This section is dedicated to the CHAR variable.\n\n";
    cout << "CHAR is great when you need your users to enter quick\n";
    cout << "one letter responces. Especially when it is a Y or n answer\n";
    sleep(1);
    //Sleep(1000);
    cout << "For example, enter your name.\n";
    cin >> example_four;
    cout << "\n\n";
    sleep(1);
    //Sleep(800);
    
    
    cout << "Your input was " << example_four <<"\n";
    cout << "CHAT will only take one letter and save it.\n";
    cout << "If a user inputs more than one letter, CHAR will\n";
    cout << "only catch the first letter that was entered.\n\n\n";
    sleep(1);
    //Sleep(1000);
    system("pause");
    
    
    
    
    
    //******** THE STRING EXPLANATION
    
    cout << "What is your name again?\n";
    cin >> example_five;
    cout << "\n\n";
    sleep(1);
    //Sleep(800);
    
    cout << "Your name is " << example_five << "\n";
    cout << "Using the STRING variable, I can catch your name\n";
    cout << "and output it back to you. It is very easy to utilize\n";
    cout << "STRING with all of your programming. It is the easiest\n";
    cout << "variable to incorporate with your program. It adds a human\n";
    cout << "aspect to your program, and makes it much more interesting\n";
    cout << "for your users. You must include <string> to your program\n";
    cout << "in order to be able to use it\n\n";
    system("pause");
    
    
    
    
    cout << "Thank you for downloading and going through this program!\n";
    cout << "It is your to keep, fix, break, and rewrite. =]\n\n\n";
    
    
    
    
    return 0;
}




//There is nothing past this line of code. Oh well. =/