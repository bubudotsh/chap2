/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream> // entete de gestion des E/S
#include <windows.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
unsigned long passageEnGris(unsigned long pixel);


/*======================================================
Fonction principal
========================================================*/
int main()
{
    unsigned long pixel;
    SetConsoleOutputCP(1252);
    //code endesous
    //cout << "Entrez un pixel" << endl;
    //cin >> pixel;
    pixel = 0x12459A;

    cout << "le pixel " << pixel << " vaut " << passageEnGris(pixel) << endl;

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
unsigned long passageEnGris(unsigned long pixel)
{
    unsigned long rouge, vert, masque, bleu, gris, moyenne;
    rouge = pixel >> 16;

    
    vert = pixel >> 8;
    masque = 0xFF;
    vert = vert & masque;


    bleu = pixel & masque;


    moyenne = (rouge + vert + bleu) / 3;
    gris = moyenne;
    
    return gris;
}