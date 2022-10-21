/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

int estunChiffre (int nb) {
    if (nb <= 9 && nb >= 0)
        return (true);
    else 
        return (false);
}


int main() {
    int nb, res;

    cout << "enter nb: " << endl;
    cin >> nb;

    res = estunChiffre(nb);

    if (res == true)
        cout << nb << " est un chiffre" << endl;
    else 
        cout << nb << " n'est pas un chiffre" << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}