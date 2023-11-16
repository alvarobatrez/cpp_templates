#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // ***** CHARACTER BASED FUNCTIONS *****
    
    char first_name[] {"Alvaro Octavio"};
    char last_name[] {"Batrez de la Paz"};
    char full_name[40] {};

    size_t fn_length {strlen(first_name)};
    size_t ln_length {strlen(last_name)};

    cout << "Your first name has " << fn_length << " characters" << endl;
    cout << "Your last name has " << ln_length << " characters" << endl;
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout << "Your full name is " << full_name << endl << endl;

    for (size_t i {0}; i < strlen(full_name); i++)
    {
        full_name[i] = toupper(full_name[i]);
    }

    cout << "Your uppercase full name is " << full_name << endl;

    return 0;
}