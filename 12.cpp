/**********************************************

   Description:

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream> 
using namespace std;


void hanoi (int n, int depart, int arrivee) {
    int i = ((depart + arrivee) - 3) * (-1);

    n--;

    cout << "Deplacement d'un disque de " << depart << " vers " << arrivee << endl;

    hanoi
}


int main()
{

    int n, depart, arrivee, i;

    cout << "entrer nombre de disque a deplacer, la tour de depart et celle d'arrivée: " << endl;
    cin >> n >> depart >> arrivee;

    hanoi (n, depart, arrivee);

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}