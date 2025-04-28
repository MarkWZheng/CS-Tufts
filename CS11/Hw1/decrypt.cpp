// decrypt.cpp
// Mark Zheng (wzheng06)
// Date: 2/4/2024
// Purpose: This program decrypts a user-provided word
//          using a Caesar cipher and a shift decided by the user.

#include <iostream>
#include <string>

using namespace std;

int main()
{
   
    // Create two variables to hold the shift amount and the word to encrypt
    int shift_amount;
    string word_to_decrypt;

    // Print a message explaining the purpose of this program
    cout << "Enter the word that you would like to decrypt ";
    cout << "(in lowercase characters)";
    cout << endl;

    // Prompt the user for a word to encrypt
    cout << "Word to decrypt: ";
    // Retrive the word from the user and store it in our variable
    cin >> word_to_decrypt;

    //Prompt the user to choose the amount they want to shift the cypher by
    cout << "Enter the shift amount: ";
    cin >> shift_amount;

    // These variables store the length of the word and the position in that 
    // word of the next letter to encrypt.
    int length_of_word = word_to_decrypt.length();
    int next_letter_pos = 0;

    cout << "Decrypted word: ";

    // Loop through each character of the word, generating the
    // decrypted output as we go
    while (next_letter_pos < length_of_word) {
        char new_letter;

        // Perform the shift; use a different equation to shift based on whether
        // we have to wrap-around to the start of the alphabet
        if (word_to_decrypt[next_letter_pos] >= ('a'+ shift_amount)) {
            new_letter = word_to_decrypt[next_letter_pos] - shift_amount;
        } 
        else {
            new_letter = word_to_decrypt[next_letter_pos] + 26 - shift_amount;
        }

        // Print out the decrypted letter
        cout << new_letter;

        // Move to the next character
        next_letter_pos = next_letter_pos + 1;
    }

    // Finish off by printing a newline
    cout << endl;

    return 0;
}
