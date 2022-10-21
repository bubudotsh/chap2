/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

double volumePyramide (double h, double la, double lo) {
    double volume = 0.0;
    if (lo == -1) {
        return ((la * la) * h / 3);
    } else {
        return ((la * lo) * h / 3);
    }
}


int main() {

    double h, la, lo = -1, volume;
    char chx;

    cout << "enter hautaur, largeur base: " << endl;
    cin >> h >> la;
    cout << "Voulez vous un longeur egale a la largeur ? (y/n) ";
    cin >> chx;

    if (chx == 'y') {
        volume = volumePyramide(h, la, lo);
        cout << "volume = " << volume << endl;
    } else if (chx == 'n') {
        cout << "entrer valeur longeur: " ;
        cin >> lo;
        volume = volumePyramide(h, la, lo);
        cout << "volume = " << volume << endl;
    } else {
        cout << "bad option";
    }

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}