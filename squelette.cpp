/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
#include <windows.h>

using namespace std;



// declaration de fonction
void bonjour();

//utf-8


void bonjour() {
    cout << "bonjour";
}

int main() {
    SetConsoleOutputCP(1252);

	bonjour();

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}