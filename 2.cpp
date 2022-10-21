/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>

using namespace std;

unsigned niveauDeGris(unsigned rouge, unsigned vert, unsigned bleu) {
    unsigned sum = 0;
    sum = (rouge + vert + bleu)  / 3;
    return (sum);
}


int main() {

    unsigned rouge = 0;
    unsigned vert = 0;
    unsigned bleu = 0;
    unsigned res = 0;

    cout << "enter 3 number: " << endl;
    cin >> rouge >> vert >> bleu;

    res = niveauDeGris(rouge, vert, bleu);

    cout << "result: " << res << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}