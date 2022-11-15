/**********************************************

   Description: squelette 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:46
 
************************************************/

#include <iostream>
using namespace std;

double transformeEnCarre(double xmin, double &xmax, double ymin, double &ymax) {
    double x = xmax - xmin;
    double y = ymax - ymin;

    if (x > y)
    {
        y = ymax - ymin;
        xmax = y + xmin;
    }
    else if (y > x)
    {
        x = xmax - xmin;
        ymax = x + ymin;
    }
}

int main() {

    double xmin, ymin, xmax, ymax;

    cout << "Enter xmin, ymin, xmax, ymax" << endl;
    cin >> xmin >> ymin >> xmax >> ymax;

    transformeEnCarre(xmin, xmax, ymin, ymax);
    cout <<"xmin= "<< xmin << "," <<"xmax= "<< xmax << "," <<"ymin= "<< ymin << "," <<"ymax= "<<ymax  << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}