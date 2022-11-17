/**********************************************

   Description:

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
#include <string> 
using namespace std;


int lenght (string str) {
    int len = 0;
    int i = 0;
    while (str[i] != '\0') {
        len ++;
    }
}
 
char classe (string octet1, string octet2, string octet3, string octet4) {

    if (lenght(octet1) == 1 || lenght(octet1) == 2)
        return 'A'

    
}


int main()
{
    string octet1, octet2, octet3, octet4;

    cout << "entrer octect1, octet2, octet3 et octet4" << endl;
    cin >> octet1 >> octet2 >> octet3 >> octet4;  

    cout << classe(octet1, octet2, octet3, octet4) << endl;

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}