#include <iostream>
#include <climits>
#include <typeinfo>

using namespace std;

int main()
{
    // ***** DECLARATION AND ASSIGNATION *****

    string day {"Sunday"};
    // string day = "Sunday";

    int a; // not initialized
    int b {};
    int c {0};

    cout << "day = " << day << ", a = " << a << ", b = " << b << ", c = " << c << endl << endl;

    // ***** TYPES OF VARIABLES *****

    bool on_off {true};
    char letter {'A'};
    short small_int {-100};
    int regular_int {10000};
    long large_int {-1000000};
    long long extra_large_int {100000000};
    unsigned short non_neg_small_int {12};
    unsigned int non_neg_regular_int {1234};
    unsigned long non_neg_large_int {123456};
    unsigned long long non_neg_extra_large_int {12345678};
    float fpi {3.1416};
    double dpi {3.14159265};
    long double lpi {3.141592653589};
    string name {"Alvaro"}; // this is an object

    cout << "bool: size = " << sizeof(on_off) << " byte" << endl;
    cout << "char: size = " << sizeof(letter) << " byte" << endl;
    cout << "short: size = " << sizeof(small_int) << " bytes, " ;
    cout << "min value = " << SHRT_MIN << ", max value = " << SHRT_MAX << endl;
    cout << "int: size = " << sizeof(regular_int) << " bytes, " ;
    cout << "min value = " << INT_MIN << ", max value = " << INT_MAX << endl;
    cout << "long: size = " << sizeof(large_int) << " bytes, " ;
    cout << "min value = " << LONG_MIN << ", max value = " << LONG_MAX << endl;
    cout << "long long: size = " << sizeof(extra_large_int) << " bytes, " ;
    cout << "min value = " << LLONG_MIN << ", max value = " << LLONG_MAX << endl;
    cout << "unsigned short: size = " << sizeof(non_neg_small_int) << " bytes, " ;
    cout << "max value = " << USHRT_MAX << endl;
    cout << "unsigned int: size = " << sizeof(non_neg_regular_int) << " bytes, " ;
    cout << "max value = " << UINT_MAX << endl;
    cout << "unsigned long: size = " << sizeof(non_neg_large_int) << " bytes, " ;
    cout << "max value = " << ULONG_MAX << endl;
    cout << "unsigned long long: size = " << sizeof(non_neg_extra_large_int) << " bytes, " ;
    cout << "max value = " << ULLONG_MAX << endl;
    cout << "float: size = " << sizeof(fpi) << " bytes, " << endl;
    cout << "double: size = " << sizeof(dpi) << " bytes, " << endl;
    cout << "long double: size = " << sizeof(lpi) << " bytes, " << endl;
    cout << "string: size = " << sizeof(name) << " bytes" << endl << endl;

    // ***** CHANGING TYPES *****

    int num1 {10};
    auto num2 = static_cast<float>(num1);
    cout << "num1 type: " << typeid(num1).name() << endl;
    cout << "num1 type: " << typeid(num2).name() << endl;

    string euler_str = "2.7183";
    auto euler_num = stod(euler_str); // stoi, stoul
    cout << "euler_num type: " << typeid(euler_num).name() << endl;

    double x {-12.3};
    auto y = to_string(x);
    cout << "y type: " << typeid(y).name() << endl << endl;

    // ***** MEMORY ADDRESS *****

    int i {27};
    cout << "Address of i: " << &i << endl;
    
    return 0;
}