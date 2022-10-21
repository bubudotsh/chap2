/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

double transformeEnCarre( double xmin , double ymin, double &xmax, double &ymax) {
    double x = xmax - xmin;
    double y = ymax - ymin;

    if (ymax < xmax) {
        xmax = xmin + y;
        return (xmax);
    } else {
        ymax = ymin + x;
        return (ymax);
    }
}

int main() {

    double xmin, ymin, xmax, ymax;

    cout << "Enter xmin, ymin, xmax, ymax" << endl;
    cin >> xmin >> ymin >> xmax >> ymax;

    cout << "xmin: " << xmin << " ymin: " << ymin << " ymax: " << transformeEnCarre(xmin, ymin, xmax, ymax) << " xmax: " << transformeEnCarre(xmin, ymin, xmax, ymax);

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}