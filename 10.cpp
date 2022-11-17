/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream> 

using namespace std;

unsigned long passageEnGris(unsigned long pixel)
{
    unsigned long rouge, vert, masque, bleu, gris, moyenne;
    rouge = pixel >> 16;
    vert = pixel >> 8;
    masque = 0xFF;
    vert = vert & masque;
    bleu = pixel & masque;

    return ((rouge + vert + bleu) / 3);
}


int main()
{
    unsigned long pixel;
    cout << "Entrez un pixel" << endl;
    cin >> pixel;
    pixel = 0x12459A;

    cout << "le pixel " << pixel << " vaut " << passageEnGris(pixel) << endl;

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}