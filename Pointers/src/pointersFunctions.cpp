#include <iostream>
#include <cmath>

using namespace std;

void times10(int *num)
{
    *num *= 10;
}

int *max(int *a, int *b)
{
    if (*b > *a)
    {
        return b;
    }

    return a;
}

int *integer_powers(int base, size_t order)
{
    int *arr {nullptr};
    arr = new int[order];
    for (size_t n {0}; n <= order; n++)
    {
        *(arr + n) = pow(base,n);
    }

    return arr;
}

void print_table(const int *const table, size_t order)
{
    for (size_t i {0}; i <= order; i++)
    {
        cout << table[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // ***** PASS BY REFERENCE *****
    
    int v {1};
    cout << v << endl;
    times10(&v);
    cout << v << endl;
    int *v_ptr {&v};
    times10(v_ptr);
    cout << v << endl << endl;

    // ***** CONSTANTS *****

    // pointers to constants
    int a {1};
    int b {2};
    const int *ptrA {&a};
    ptrA = &b; // *ptrA = 3 not possible

    // constant pointers
    int i {1};
    int j {2};
    int *const ptrI {&i};
    *ptrI = 3; // ptrI = &j not possible

    // constant pointers to constant
    int x {1};
    int y {2};
    const int *const ptrX {&x}; // changes are no allowed

    // ***** RETURNING POINTERS *****

    // returning arguments
    int num1 {1};
    int num2 {2};
    int *result {nullptr};
    result = max(&num1, &num2);
    cout << "num1 address: " << &num1 << endl;
    cout << "num2 address: " << &num2 << endl;
    cout << "result address: " << result << endl;
    cout << "result value: " << *result << endl << endl;

    // returning dynamically allocated memory
    int number {2};
    size_t n {10};
    int *table {nullptr};
    table = integer_powers(number, n);
    print_table(table, n);
    delete [] table;

    return 0;
}