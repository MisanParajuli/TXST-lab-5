//Name: Misan Parajuli
//Date: 10/4/2023
//CS1428 Lab
//Lab 5
//Description: this program will print a numerical sequence with user-input length

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;

int main() {

    int length, hidden_multiple;

    // Prompt the user for the length
    // and the multiple they want hidden:
    cout << "Sequence Generator 2000!" << endl
         << "Enter the length: ";
    cin >> length;
    cout << "Multiples of what number should be hidden: ";
    cin >> hidden_multiple;
    cout << endl;

    // TODO: Validate input, then print the sequence:
    if (length==0 || hidden_multiple==0){
        cout << "ERROR: number and multiples must be larger than 0.";
    }

    else {
    for (int i=1; i<=length; i++){

        if ( i % hidden_multiple == 0){
            cout << "|#";
        }
        else{
            cout << "|"<< i << "";
        }





    }

    }
    cout << "|";




    return 0;
}
