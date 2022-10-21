/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

double calculResistanceEquivalente(double R1 , double R2 , char typeAssociation) {
    if (typeAssociation == 'S')
        return(R1 + R2);
    else if (typeAssociation == 'P')
        return(1/(1/R1 + 1/R2));
    else
        return(false);
}



int main() {
    double R1, R2, res;
    char typeAssociation;

    cout << "enter value of R1, R2 and typeAssociation (S ou P)" << endl;
    cin >> R1 >> R2 >> typeAssociation;

    res = calculResistanceEquivalente(R1, R2, typeAssociation);

    if (res == false)
        cout << "bad type association";
    else
        cout << "resistance equivalente = " << res << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}