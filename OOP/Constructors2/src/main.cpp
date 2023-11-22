#include <iostream>

using namespace std;

// ***** RECOMMENDED WAY *****

class Dog
{
    private:

    string var_name;
    unsigned short var_age;
    string var_breed;

    public:

    Dog(string name = "None", unsigned short age = 0, string breed = "None");

    // ***** DELEGATE CONSTRUCTOR *****

    // Dog () : Dog("None", 0, "None") {}
};

Dog::Dog(string name, unsigned short age, string breed)
: var_name {name}, var_age {age}, var_breed{breed}
{
    cout << "Name: " << var_name << endl;
    cout << "Age: " << var_age << endl;
    cout << "Breed: " << var_breed << endl << endl;
}

int main()
{
    Dog cheems("Cheems", 10, "Shiba inu");
    Dog chilaquil;
    Dog lucho("Lucho", 4);
    
    return 0;
}