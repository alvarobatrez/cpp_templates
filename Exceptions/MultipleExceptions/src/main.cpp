#include <iostream>

using namespace std;

double calculate_kml(double km, double l)
{
    if (l == 0)
    {
        throw 0;
    }
    if (km < 0 || l < 0)
    {
        throw string("Negative values");
    }
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

    // ***** MULTIPLE EXCEPTIONS *****
    try
    {
        km_l = calculate_kml(km, l);
        cout << "Kilometers per liter: " << km_l << std::endl;
    }
    catch (int &e)
    {
        std::cerr << "Division by zero.\n";
    }
    catch (string &e)
    {
        std::cerr << e << std::endl;
    }
    
    return 0;
}