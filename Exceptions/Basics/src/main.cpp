#include <iostream>

using namespace std;

double calculate_kml(double km, double l)
{
    if (l == 0.0) { throw 0; }
    return km / l;
}

int main()
{
    double km;
    double l;
    double km_l;

    cout << "Enter the km driven: ";
    cin >> km;

    cout << "Enter the liters used: ";
    cin >> l;

    // ***** EXCEPTION HANDLING *****

    try
    {
        if (l == 0.0)
        {
            throw 0;
        }

        km_l = km / l;
        cout << "Kilometers per liter: " << km_l << std::endl;
    }
    catch (int &e)
    {
        std::cerr << "Division by zero.\n";
    }

    // ***** USING A FUNCTION *****

    cout << "Enter the km driven: ";
    cin >> km;

    cout << "Enter the liters used: ";
    cin >> l;

    try
    {
        km_l = calculate_kml(km, l);
        cout << "Kilometers per liter: " << km_l << std::endl;
    }
    catch (int &e)
    {
        std::cerr << "Division by zero.\n";
    }
    
    return 0;
}