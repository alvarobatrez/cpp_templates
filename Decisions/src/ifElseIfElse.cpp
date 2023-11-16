#include <iostream>

using namespace std;

// ***** IF - ELSE IF - ELSE *****

int main()
{
    float purchase_price, final_price;
    float discount[3] {0.05, 0.1, 0.2};
    string percentage;

    cout << "Enter the price: ";
    cin >> purchase_price;

    if (purchase_price <= 10.0)
    {
        final_price = purchase_price * (1 - discount[0]);
        percentage = to_string(discount[0]);
    }
    else if (purchase_price <= 20.0)
    {
        final_price = purchase_price * (1 - discount[1]);
        percentage = to_string(discount[1]);
    }
    else
    {
        final_price = purchase_price * (1 - discount[2]);
        percentage = to_string(discount[2]);
    }

    cout << "Discount = " << percentage << '%' << endl;
    cout << "Total price = " << final_price << endl;

    return 0;
}