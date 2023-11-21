#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ***** DECLARATION *****

    // int *p; // uninitialized
    int *p {nullptr};
    // int *p = nullptr;

    cout << "Type of p: " << typeid(p).name() << endl;
    cout << "Value of p: " << p << endl;
    cout << "Size of p: " << sizeof(p) << " bytes" << endl;
    cout << "Address of p: " << &p << endl << endl;

    // ***** SIZE *****

    double var {27.5};
    double *var_ptr {&var};

    cout << "Address of var: " << &var << endl;
    cout << "Value of var_ptr: " << var_ptr << endl << endl;

    // ***** DEREFERENCE *****

    int num {30};
    int *num_ptr {&num};
    cout << num << endl;
    cout << *num_ptr << endl;
    *num_ptr = 50;
    cout << num << endl << endl;

    double pi {3.0};
    double *pi_ptr {&pi};
    cout << *pi_ptr << endl;
    pi = 3.14;
    cout << *pi_ptr << endl << endl;

    vector <string> beatles {"John", "Paul", "George", "Ringo"};
    vector <string> *beatles_ptr {&beatles};
    
    cout << (*beatles_ptr).at(0) << endl <<endl;

    // ***** DYNAMIC MEMORY ALLOCATION *****

    bool *bool_ptr {nullptr};
    bool_ptr = new bool; // allocate on the heap
    cout << bool_ptr << endl << endl;
    delete bool_ptr; // free up memory space

    string *list_ptr {nullptr};
    size_t size {10};
    list_ptr = new string[size];
    cout << list_ptr << endl << endl;
    delete [] list_ptr;

    // ***** ARRAYS *****

    int arr[3] {5, 10, 15};
    int *arr_ptr {arr};
    cout << "arr: " << arr << endl;
    cout << "arr_ptr: " << arr_ptr << endl << endl;

    // memory
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl << endl;

    // array subscript notation
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl << endl;

    // pointer subscript notation
    cout << arr_ptr[0] << endl;
    cout << arr_ptr[1] << endl;
    cout << arr_ptr[2] << endl << endl;

    // array offset notation
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl << endl;

    // pointer offset notation
    cout << *arr_ptr << endl;
    cout << *(arr_ptr + 1) << endl;
    cout << *(arr_ptr + 2) << endl << endl;

    // ***** POINTER ARITHMETIC *****

    // ++
    int numbers[] {104, 117, 131, 145, 160, 171, -1};
    int *numbers_ptr {numbers};
    while (*numbers_ptr != -1)
    {
        cout << *numbers_ptr << endl;
        numbers_ptr++;
        // cout << *numbers_ptr++ << endl;
    }

    cout << endl;

    // ==
    string name1 {"Alvaro"};
    string name2 {"Alvaro"};
    
    string *name1_ptr {&name1};
    string *name2_ptr {&name2};
    string *name3_ptr {&name1};

    cout << "name1 == name2: " << (name1 == name2) << endl;
    cout << "name1_ptr == name2_ptr: " << (name1_ptr == name2_ptr) << endl;
    cout << "name1_ptr == name3_ptr: " << (name1_ptr == name3_ptr) << endl;

    // ***** COMMON ISSUES WITH POINTERS *****

    /*
    1. Uninitialized pointers.
    2. Point to invalid or deleted address memory.
        + Pointers pointing to a deleted memory address.
            - 2 pointers pointing to the same address.
            - 1 pointer releases the addres with delete.
            - The other pointer try to access the address.
        + Pointers pointing to an invalid address.
            - Return a pointer to a function local variable.
    3. Not check if new failed.
        + Dereferencing a null pointer.
        + new throws an exception.
    4. Leaking memory.
        + Forget to delete the allocated address.
    */

    return 0;
}