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

double triangle_area(double base, double height)
{
    double area = rectangle_area(base, height) / 2;

    return area;
}

double rectangle_area(double base, double height)
{
    return base * height;
}

// ***** DEFAULT ARGUMENT VALUES *****

double circle_area(double radius = 1.0, double pi = 3.1)
{
    return pi * radius * radius;
}

// ***** OVERLOADING *****

int hypotenuse(int a, int b)
{
    return sqrt(pow(a,2) + pow(b,2));
}

double hypotenuse(double a, double b)
{
    return sqrt(pow(a,2) + pow(b,2));
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

void to_ones(int arr[], size_t size)
{
    for (size_t i {}; i < size; i++)
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

int sum_vec(const vector <int> &vec)
{
    size_t size {vec.size()};
    int sum {0};
    for (size_t i {}; i < size; i++)
    {
        sum += vec[i];
    }

    return sum;
}

int main()
{
    title("Alvaro");
    title("Octavio");

    cout << endl;

    vector <string> names {"Hugo", "Paco", "Luis"};
    print_vector(names);

    cout << endl;

    double b {2.5}, h {3.0};
    cout << "The area of the rectangle is " << rectangle_area(b, h) << endl; // pass by value
    cout << "The area of the triangle is " << triangle_area(b, h) << endl << endl;

    cout << "The area of the circle is " << circle_area() << endl;
    cout << "The area of the circle is " << circle_area(5.0) << endl;
    cout << "The area of the circle is " << circle_area(5.0, 3.1416) << endl << endl;

    cout << hypotenuse(6, 9) << endl;
    cout << hypotenuse(6.0, 9.0) << endl << endl;

    int numbers[5] {10, 20, 30, 40, 50};
    cout << sum_array(numbers, 5) << endl;
    to_ones(numbers, 5); // pass by reference
    cout << sum_array(numbers, 5) << endl << endl;

    int x = 3, y = 6;
    swap(x, y);
    cout << "x = " << x << ", y = " << y << endl << endl;

    vector <int> num_list {1, 2, 3, 4, 5};
    cout << sum_vec(num_list) << endl;
    
    return 0;
}