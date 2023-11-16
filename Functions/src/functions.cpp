#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// ***** PROTOTYPING *****

double rectangle_area(double, double);

// ***** DEFINITIONS *****

void title(string argument)
{
    cout << "Hello " << argument << "! This function returns nothing." << endl;
}

void print_vector(vector <string> names)
{
    for (auto name : names)
    {
        cout << name << endl;
    }
}

double rectangle_area(double base, double height)
{
    return base * height;
}

double triangle_area(double base, double height)
{
    double area = rectangle_area(base, height) / 2;

    return area;
}

// ***** DEFAULT ARGUMENT VALUES *****

double circle_area(double radius = 0.0, double pi = 3.1)
{
    return pi * radius * radius;
}

//  ***** OVERLOADING *****

int hypotenuse(int a, int b)
{
    int c;
    c = sqrt(pow(a,2) + pow(b,2));
    return c;
}

double hypotenuse(double a, double b)
{
    double c;
    c = sqrt(pow(a,2) + pow(b,2));
    return c;
}

// ***** PASSING ARRAYS *****

int sum_array(const int arr[], size_t size)
{
    int sum {0};
    for (size_t i {0}; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

void ones(int arr[], size_t size)
{
    for (size_t i {0}; i < size; i++)
    {
        arr[i] = 1;
    }
}

// ***** PASS BY REFERENCE *****

void swap(int &a, int &b)
{
    int aux = b;
    b = a;
    a = aux;
}

void print_beatles(const vector<string> &names)
{
    // names.at(0) = "Yoko"; // this is not possible with const declaration
    cout << names.at(0) << "\t";
    cout << names.at(1) << "\t";
    cout << names.at(2) << "\t";
    cout << names.at(3) << "\n";
}

int sum_vec(const vector<int> &vec, size_t size)
{
    int sum {0};
    for (size_t i{0}; i < size; i++)
    {
        sum += vec[i];
    }

    return sum;
}

// ***** CALLING THE FUNCTIONS *****

int main()
{    
    title("Alvaro");
    title("Octavio");

    cout << "\n";
    
    vector <string> names {"Hugo", "Paco", "Luis"};
    print_vector(names);

    cout << "\n";
    
    double b {2.5}, h {3.0};
    cout << "The area of the rectangle is " << rectangle_area(b, h) << endl; // passed by value
    cout << "The area of the triangle is " << triangle_area(b, h) << endl;
    cout << "The area of the circle is " << circle_area(5.0) << endl;

    cout << "\n";
    
    cout << hypotenuse(6, 8) << endl;
    cout << hypotenuse(6.0, 8.0) << endl;

    cout << "\n";
    
    int numbers[5] {10,20,30,40,50};
    cout << sum_array(numbers, 5) << endl;
    ones(numbers,5); // pass by reference
    cout << sum_array(numbers, 5) << endl;

    cout << "\n";

    int x = 3, y = 6;
    swap(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    vector<string> beatles {"John", "Paul", "Jorge", "Ringo"};
    print_beatles(beatles);
    vector<int> num_list {1,2,3,4,5};
    cout << sum_vec(num_list, num_list.size()) << endl;
    
    return 0;
}