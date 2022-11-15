/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

unsigned long niveauDeRouge(unsigned long pixel)
{
   unsigned long rouge;
   rouge = pixel >> 16;
   return rouge;
}

unsigned long niveauDeVert(unsigned long pixel)
{
   unsigned long vert , masque;
   vert = pixel >> 8;
   masque = 0xFF;
   vert = vert & masque;
   return vert;
}

unsigned long niveauDeBleu(unsigned long pixel)
{
   unsigned long bleu, masque;
   masque = 0xFF;
   bleu = pixel & masque;
   return bleu;
}

int main()
{
   unsigned long pixel;
   cout << "Entrez un pixel" << endl;
   cin >> pixel;
   pixel = 0x12459A;

   cout << "rouge: " << niveauDeRouge(pixel) << ", vert: " << niveauDeVert(pixel) << ", bleu: " << niveauDeBleu(pixel) << endl;

   cin.get();
   cin.ignore();

   return EXIT_SUCCESS;
}