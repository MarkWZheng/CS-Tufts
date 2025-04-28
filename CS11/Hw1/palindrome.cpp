// palindrome.cpp
// Mark Zheng (wzheng06)
// Date: 2/4/2024
// Purpose: This program checks whether or not a word is a palindrome.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Creates a string that can be checked by the palindrome decider.
    string word_to_check;

    // Greets the user and introduces purpose of the code. Sets up boolean to
    // loop if needed
    bool palindrome = true;
    cout << "Greetings! I am the palindrome decider!";
    cout << endl;

    while (palindrome == true) {

        // This sets up the reversal system to allow checks.
        string reverse_word = "";
        cout << "Please enter a word: ";
        cin >> word_to_check;
        int length_of_word = word_to_check.length();

        // Creates a for loop that writes the word in reverse to 
        // compare it to the original word.
        for(int i = length_of_word - 1; i >= 0; i--) {
            reverse_word += word_to_check[i];
        }
    
        // Compares the words together to check if they are the same.
        if( reverse_word.substr(0,3) == word_to_check.substr(0,3) ) {

            // If the first three letters are the same, 
            // we can check if the rest is.
            if(reverse_word == word_to_check) { 
                cout << "Your word is a palindrome! Fantastic!";
                cout << endl;
            }

            else {
                cout << "Not quite a palindrome, but close enough.";
                cout << endl;
            }

        }  

        // If the first three letters aren't the same
        // then it's immediately not a palindrome.
        else {
            palindrome = false;
            cout << "Your word is NOT a palindrome. Thanks anyway!";
            cout << endl;
        }

    }

    return 0;
}
