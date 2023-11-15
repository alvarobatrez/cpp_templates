#include <iostream>
#include <climits>
#include <typeinfo>

using namespace std;

int main()
{
    // ***** DECLARATION AND ASSIGNATION *****

    string day {"Sunday"}; // declaration
    // string day = "Sunday"; // assignation

    int d; // not initialized
    int m {};
    int y {0};

    cout << "Today is " << day << " " << d << " " << m << " " << y << endl << endl;

    // ***** TYPES OF VARIABLES *****

    bool on_off {true};
    char letter {'A'};
    short small_int {-10};
    int regular_int {1000};
    long large_int {-1000000};
    long long extra_large_int {1000000000};
    unsigned short small_non_neg {12};
    unsigned int regular_non_neg {1234};
    unsigned long large_non_neg {123456};
    unsigned long long extra_large_non_neg {12345678};
    float fpi {3.1416};
    double dpi {3.14159265};
    long double lpi {3.1415926535897932};
    string name {"Alvaro"}; // this is an object

    cout << "bool: size = " << sizeof(on_off) << " byte" << endl;
    cout << "char: size = " << sizeof(letter) << " byte" << endl;
    cout << "short: size = " << sizeof(small_int) << " bytes" << endl;
    cout << "min value = " << SHRT_MIN << ", max value = " << SHRT_MAX << endl;
    cout << "int: size = " << sizeof(regular_int) << " bytes" << endl;
    cout << "min value = " << INT_MIN << ", max value = " << INT_MAX << endl;
    cout << "long: size = " << sizeof(large_int) << " bytes" << endl;
    cout << "min value = " << LONG_MIN << ", max value = " << LONG_MAX << endl;
    cout << "long long: size = " << sizeof(extra_large_int) << " bytes" << endl;
    cout << "min value = " << LLONG_MIN << ", max value = " << LLONG_MAX << endl;
    cout << "unsigned short: size = " << sizeof(small_non_neg) << " bytes" << endl;
    cout << "max value = " << USHRT_MAX << endl;
    cout << "unsigned int: size = " << sizeof(regular_non_neg) << " bytes" << endl;
    cout << "max value = " << UINT_MAX << endl;
    cout << "unsigned long: size = " << sizeof(large_non_neg) << " bytes" << endl;
    cout << "max value = " << ULONG_MAX << endl;
    cout << "unsigned long long: size = " << sizeof(extra_large_non_neg) << " bytes" << endl;
    cout << "max value = " << ULLONG_MAX << endl;
    cout << "float: size = " << sizeof(fpi) << " bytes" << endl;
    cout << "double: size = " << sizeof(dpi) << " bytes" << endl;
    cout << "long double: size = " << sizeof(lpi) << " bytes" << endl;
    cout << "string: size = " << sizeof(name) << " bytes" << endl << endl;

    // ***** CHANGING TYPES *****

    int num1 {10};
    auto num2 = static_cast<float>(num1);
    cout << "num1 type: " << typeid(num1).name() << endl;
    cout << "num2 type: " << typeid(num2).name() << endl << endl;

    string euler_str = "2.7183";
    auto euler_num = stod(euler_str); // stoi(), stoul
    cout << "euler_num type: " << typeid(euler_num).name() << endl << endl;

    double a {-12.3};
    auto b = to_string(a);
    cout << "b type = " << typeid(b).name() << endl << endl;

    // ***** MEMORY ADDRESS *****

    int x {60};
    cout << "Address of x: " << &x << endl;

    return 0;
}