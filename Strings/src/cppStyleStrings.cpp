#include <iostream>

using namespace std;

int main()
{
    // ***** STRING BASED FUNCTIONS *****
    
    string my_name {"Alvaro"};
    
    for (char i : my_name)
    {
        cout << i << endl;
    }

    cout << endl;

    for (int i : my_name)
    {
        cout << i << endl; // ASCII
    }

    cout << endl;

    cout << my_name.at(2) << endl << endl;
    
    my_name.at(3) = 'A';
    cout << my_name << endl << endl;

    cout << my_name.length() << endl << endl;

    string short_name {my_name, 0, 3};
    cout << short_name << endl;

    cout << my_name.erase(5, 1) << endl;

    string name {"AlvaroBatrez"};
    name.insert(6, " ");
    cout << name << endl << endl;

    string xxx (10, 'x');
    cout << xxx << endl << endl;

    string example {"This is a string"};
    cout << example.substr(5, 2) << endl << endl; // from index 5 to index+2

    string full_name {"AlvaroOctavio Batrez de la Paz"};

    string last_name {"Octavio"};
    size_t position = full_name.find(last_name);
    if (position != string::npos)
    {
        cout << position << endl;
    }
    else
    {
        cout << last_name << " not found" << endl;
    }

    cout << endl;

    string name1 {"Hector"};
    string name2 {"Carlos"};

    if (name1 > name2)
    {
        name1.swap(name2);
    }

    cout << name1 + " " + name2 << endl << endl;

    return 0;
}