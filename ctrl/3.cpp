/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
#include <math.h>
using namespace std;

double getNombreHotes(double cidr) {
    double res = 0;
    res = pow(2, (32 - cidr)) - 2; // formule calcule cidr
    return (res);
}

int main() {
    double cidr;

    cout << "Saisir le cidr: ";
    cin >> cidr;

    while (cidr < 1 || cidr > 30) {
        cout << "cidr invalide\n";
        cout << "Saisir le cidr: ";
        cin >> cidr;
    } // tant que le cidr est invalide 

    cout << "Le masque en /" << cidr << " permettera d'adresser " << getNombreHotes(cidr) <<" hotes"; // affiche le resultat

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}