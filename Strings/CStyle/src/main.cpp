#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // ***** CHARACTER BASED FUNCTIONS *****

    char first_name[] {"Alvaro Octavio"};
    char last_name[] {"Batrez de la Paz"};
    char full_name[50];

    size_t fn_len {strlen(first_name)};
    size_t ln_len {strlen(last_name)};

    cout << "Your first name has " << fn_len << " characters" << endl;
    cout << "Your last names has " << ln_len << " characters" << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "Your full name is " << full_name << endl;

    for (size_t i {0}; i < strlen(full_name); i++)
    {
        full_name[i] = toupper(full_name[i]);
    }

    return 0;
}