/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

double calculeTTC(double ht, double tva) {
    return (ht + ht * tva / 100.0);
}

int main() {

    double ht, tva = 20;
    char chx;

    cout << "entrer somme ht: " << endl;
    cin >> ht;
    cout << "TVA standart ? (y/n) ";
    cin >> chx;

    if (chx == 'y') {
        cout << "prix: " << calculeTTC(ht, tva);
    } else if (chx == 'n') {
        cout << "entrer tva: " << endl;
        cin >> tva;
        cout << "prix: " << calculeTTC(ht, tva);
    } else {
        cout << "bad option" << endl;
        return 0;
    }

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}