#include <iostream>
using namespace std;

float NilaiBMI(float a, float b)
{
    return a/(b * b);
}

string Status_BMI(float r)
{
    if (r >= 30)
       return "Berat Badan Obesitas";
    else if (r >= 25)
       return "Berat Badan Kelebihan";
    else
       return "Berat Badan Normal";
}
