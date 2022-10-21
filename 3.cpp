/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>

using namespace std;

char maj(char letter) {
    if (letter >= 65 && letter <= 90) { // MAJ
        return (letter);
    } else if (letter >= 97 && letter <= 122) { // min
        return (letter - 32);
    } else {
        return ('!');
    }
}

int main() {

    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    letter = maj(letter);

    if (letter == '!')
        cout << "pas une lettre";
    else 
        cout << letter;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}