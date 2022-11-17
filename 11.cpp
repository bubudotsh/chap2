/**********************************************

   Description:

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream> 
#define min(x,y) ((x)<(y)?(x):(y))
#define abs(x) ((x)<0?(x*(-1)):(x))
using namespace std;


int main()
{
    double x = 5, y = 3;
    cout << "x=5 et y=3 le plus petit: "  << min(x, y) << endl;
    x = 8;
    y = 9;
    cout << "x=8 et y=9 le plus petit: "  << min(x, y) << "\n" << endl;

    x = -4;
    y = 5;
    cout << "la valeur absolue de -4 est: " << abs(x) << endl;
    cout << "la valeur absolue de 5 est: " << abs(x) << endl;

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}