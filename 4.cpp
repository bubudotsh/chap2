/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>

using namespace std;

int nombrechiffres(long n) {
    int res;
    int i = 0;

    while (true) {
        res = n / 10;
        i++;
        n = res;

        if (n == 0) {
            break;
        }
    }

    return (i);
}


int main() {

    long nb;

    cout << "enter nb: ";
    cin >> nb;

    nb = nombrechiffres(nb);

    cout << nb << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}