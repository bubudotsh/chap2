/**********************************************

   Description:

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream> 
using namespace std;

int core (int nb) {
    int resultat = 1;

    while (nb != 1) {
        resultat = resultat * nb;
        nb--;
    }

    return resultat;
}


int main()
{
    int nb;

    cout << "entrer un nombre: " << endl;
    cin >> nb;

    cout << "resultat: " << core(nb) << endl;

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}