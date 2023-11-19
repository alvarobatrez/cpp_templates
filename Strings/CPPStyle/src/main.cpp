#include <iostream>

using namespace std;

int main()
{
    // ***** STRING BASED FUNCTIONS *****

    string my_name {"Alvaro"};

    for (char letter : my_name)
    {
        cout << letter << endl;
    }

    cout << endl;

    for (int letter : my_name)
    {
        cout << letter << endl; // ASCII
    }

    cout << endl;

    my_name.at(3) = 'A';
    cout << my_name << endl;

    cout << my_name.length() << endl;

    string short_name {my_name, 0, 3};
    cout << short_name << endl;

    cout << my_name.erase(4, 2) << endl << endl;

    string name {"AlvaroBatrez"};
    name.insert(6, " ");
    cout << name << endl << endl;

    string xxx (10, 'x');
    cout << xxx << endl << endl;

    string example {"This is a string"};
    cout << example.substr(10, 6) << endl << endl;

    string full_name {"Alvaro Octavio Batrez de la Paz"};
    string middle_name = "Octavio";
    size_t position {full_name.find(middle_name)};
    
    if (position != string::npos)
    {
        cout << position << endl;
    }
    else
    {
        cout << middle_name << " not found" << endl;
    }

    cout << endl;

    string name1 {"Hector"};
    string name2 {"Aquiles"};

    if (name1 > name2)
    {
        name1.swap(name2);
    }

    cout << name1 + " " + name2 << endl;

    return 0;
}