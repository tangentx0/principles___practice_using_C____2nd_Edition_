#include "std_lib_facilities.h"

//solve quadratic equations of the form ax^2 + bx + c = 0
//use formula x = (-b +/- sqrt(b^2 - 4ac)) / 2a

//determinant will calculate whether roots exist or not
//determinant calculated as b^2-4ac

//if determinant > 0 then there are two real roots which are different
//(-b + sqrt(b^2 - 4ac)) / 2a
//(-b - sqrt(b^2 - 4ac)) / 2a

//if determinant = 0 then there are two real roots which are equal
//-b/2a

//if determinant < 0 then there are two complex roots which are different
//(-b/2a) + i * (

int main ()
{
    double a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients for a, b & c:" << endl;
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "Roots are real and the same" << endl;
        cout << "x1 & x2 = " << x1 << endl;
    }

    else if (discriminant < 0) {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and different" << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << endl;
    }

    else {
        cout << "error during input or calculation" << endl;
    }

    return 0;

}