#include <iostream>
#include <iomanip>

using namespace std;

// ***** IF - ELSE IF - ELSE *****

int main()
{
    float purchase_price, final_price;
    float discount[3] {0.05, 0.1, 0.2};
    string percentage;

    cout << "Enter the price: \t$";
    cin >> purchase_price;

    // 5% if price <= $10, 10% if price <= $50, 20% if price > $50
    if (purchase_price <= 10.0)
    {
        final_price = purchase_price * (1 - discount[0]);
        percentage = to_string(static_cast<unsigned short>(discount[0] * 100));
    }
    else if (purchase_price <= 50)
    {
        final_price = purchase_price * (1 - discount[1]);
        percentage = to_string(static_cast<unsigned short>(discount[1] * 100));
    }
    else
    {
        final_price = purchase_price * (1 - discount[2]);
        percentage = to_string(static_cast<unsigned short>(discount[2] * 100));
    }

    cout << fixed << setprecision(2);
    cout << "Discount: \t\t" + percentage + "%";
    cout << "\nTotal price: \t\t$" << final_price << endl;
    
    return 0;
}