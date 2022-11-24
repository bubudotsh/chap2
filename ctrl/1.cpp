/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

char minMaj(char &letter) {
    int i = letter; // on met la lettre en int 

    if (i >= 65 && i <= 90) { // si c'est une maj
        letter = i + 32;
        return true;

    } else if (i >= 97 && i <= 122) {// si c'est une min
        letter = i - 32;
        return true;

    } else {
        return false; // si c'est ps une lettre
    }
    return 0;
}


int main() {
    char letter;

    cout << "enter une lettre: ";
    cin >> letter; // demande et entrer de la lettre

    while (minMaj(letter) == false) {
        cout << "enter une lettre: ";
        cin >> letter;
        minMaj(letter);
    } // tant que la lettre saisie n'est pas une lettre on redemande

    minMaj(letter); // apelle de la fonction
 
    cout << "la lettre est trensformee en: " << letter; // on affiche le resultat
 
	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}