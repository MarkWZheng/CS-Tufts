// encrypt.cpp
// Written by: Megan Monroe (mmonroe)
// Edited for HW0 by: Mark Zheng (wzheng06)
// Date: 1/27/2024
// Purpose: This program encrypts a user-provided word
//          using a 5-shift Caesar cipher.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Create two variables to hold the shift amount and the word to encrypt
    int shift_amount = 5;
    string word_to_encrypt;

    // Print a message explaining the purpose of this program
    cout << "This program will encrypt any singular word that you want.";
    cout << endl;

    // Prompt the user for a word to encrypt
    cout << "Pick a word (MAKE SURE IT'S LOWERCASE): ";
    // Retrive the word from the user and store it in our variable
    cin >> word_to_encrypt;

    // These variables store the length of the word and the position in that word
    // of the next letter to encrypt.
    int length_of_word = word_to_encrypt.length();
    int next_letter_pos = 0;

    cout << "The encypted word: ";

    // Loop through each character of the word, generating the
    // encrypted output as we go
    /*while (next_letter_pos < length_of_word) {
        char new_letter;

        // Perform the shift; use a different equation to shift based on whether we
        // have to wrap-around to the start of the alphabet
        if (word_to_encrypt[next_letter_pos] < 'v') {
            new_letter = word_to_encrypt[next_letter_pos] + shift_amount;
        } 
        else {
            new_letter = word_to_encrypt[next_letter_pos] - 26 + shift_amount;
        }

        // Print out the encrypted letter
        cout << new_letter;

        // Move to the next character
        next_letter_pos = next_letter_pos + 1;
    }*/

    // Finish off by printing a newline
    cout << endl;

    return 0;
}
