/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

void zoom(double &cote1, double &cote2, double facteurEchelle) {
    cote1 = cote1 * facteurEchelle; // on multiplie avec le facteurEchelle
    cote2 = cote2 * facteurEchelle;

}

int main() {

    double cote1, cote2, facteurEchelle = 2;
    char choix;

    cout << "Saisir longeur et largeur: " << endl;
    cin >> cote1 >> cote2;

    cout << "Voulez-vous faire le zoom par default (o/n) ? ";
    cin >> choix;

    if (choix == 'o') {
        zoom(cote1, cote2, facteurEchelle);
        cout << "Apres le zoom, longeur=" << cote1 << " largeur=" << cote2; // si echelle default
    } else if (choix == 'n') {
        cout << "Saisir facteur echelle: ";
        cin >> facteurEchelle;
        zoom(cote1, cote2, facteurEchelle);
        cout << "Apres le zoom, longeur=" << cote1 << " largeur=" << cote2;// si echelle personaliser
    } else {
        cout << "choix invalide";
    }

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}