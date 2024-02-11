#include <iostream>
#include <iomanip>

int main()
{
    // ***** DEFAULT *****
    
    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;

    // ***** BOOLALPHA *****

    std::cout << std::boolalpha;

    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;

    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;

    // ***** NO BOOLALPHA *****

    std::cout << std::noboolalpha;

    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;
    
    // ***** USING SETF METHOD *****

    std::cout.setf(std::ios::boolalpha);

    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;

    // ***** RESET FLAGS *****

    std::cout << std::resetiosflags(std::ios::boolalpha);

    std::cout << (10 == 10) << std::endl;
    std::cout << (10 == 20) << std::endl;

    std::cout << "\n";

    // ***** DISPLAY INTEGER BASES *****

    int num1 {255};
    int num2 {-255};

    std::cout << std::dec << num1 << std::endl;
    std::cout << std::hex << num1 << std::endl;
    std::cout << std::oct << num1 << std::endl;

    // **** SHOWING BASE PREFIX - UPPERCASE - POSITIVE SIGN*****

    std::cout << std::showbase << std::uppercase << std::showpos;

    std::cout << std::dec << num1 << std::endl;
    std::cout << std::hex << num1 << std::endl;
    std::cout << std::oct << num1 << std::endl;

    // ***** USING SETF METHOD *****

    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    std::cout << std::dec << num2 << std::endl;
    std::cout << std::hex << num2 << std::endl;
    std::cout << std::oct << num2 << std::endl;

    // ***** RESET FLAGS *****

    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::uppercase);

    std::cout << num2 << std::endl;

    std::cout << "\n";

    // ***** DEFAULT FLOAT NUMBERS *****

    double num3 {123456789.987654321};
    double num4 {1234.5678};
    double num5 {1234.0};

    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    std::cout << num5 << std::endl;

    // ***** SET PRECISION *****

    std::cout << std::setprecision(5);

    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    std::cout << num5 << std::endl;

    // ***** SET PRECISION - SHOWPOINT*****

    std::cout << std::setprecision(10) << std::showpoint;

    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    std::cout << num5 << std::endl;

    // ***** SET PRECISION - FIXED*****

    std::cout << std::setprecision(3) << std::fixed;

    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    std::cout << num5 << std::endl;

    // ***** SCIENTIFIC NOTATION - UPPERCASE*****

    std::cout << std::setprecision(4) << std::scientific << std::uppercase;

    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    std::cout << num5 << std::endl;

    // ***** USING UNSETF METHOD *****

    std::cout.unsetf(std::ios::scientific | std::ios::fixed);

    // ***** RESET FLAGS *****

    std::cout << std::resetiosflags(std::ios::showpoint);
    std::cout << std::setprecision(6);

    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    std::cout << num5 << std::endl;

    std::cout << "\n";

    // ***** ALIGN AND FILL *****

    int n {1234};
    double d {1234.5678};
    std::string s {"Alvaro"};

    std::cout << "123456789012345678901234567890\n";

    std::cout << n << "\t" << d << "\t" << s << std::endl;

    std::cout << std::setw(10) << n 
              << std::setw(10) << d 
              << std::setw(10) << s 
              << std::endl;

    std::cout << std::setfill('-');
    std::cout << std::setw(10) << n 
              << std::setw(10) << d 
              << std::setw(10) << s 
              << std::endl;

    std::cout << std::setfill('-') << std::left;
    std::cout << std::setw(10) << n 
              << std::setw(10) << d 
              << std::setw(10) << s 
              << std::endl;

    return 0;
}