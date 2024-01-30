#include <iostream>

using namespace std;

class DivideByZero {};
class NegativeValue {};

double calculate_kml(double km, double l)
{
    if (l == 0)
    {
        throw DivideByZero();
    }
    if (km < 0 || l < 0)
    {
        throw NegativeValue();
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
    catch (const DivideByZero &e)
    {
        std::cerr << "Division by zero.\n";
    }
    catch (const NegativeValue &e)
    {
        std::cerr << "Negative values\n";
    }
    
    return 0;
}