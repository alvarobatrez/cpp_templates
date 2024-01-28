#include <iostream>

using namespace std;

// ***** STACK UNWINDING *****

void funC()
{
    cout << "Starting C\n";
    throw 101;
    cout << "Ending C\n";
}

void funB()
{
    cout << "Starting B\n";
    funC();
    cout << "Ending B\n";
}

void funA()
{
    cout << "Starting A\n";
    funB();
    cout << "Ending A\n";
}

int main()
{
    cout << "Starting main\n";
    try
    {
        funA();
    }
    catch(int &e)
    {
        std::cerr << "Exception " << e << '\n';
    }
    cout << "Ending main\n";
    
    return 0;
}