#include <iostream>

using namespace std;

void swap_pointers(int *ptr1, int *ptr2)
{
    // int aux {*ptr2};
    // *ptr2 = *ptr1;
    // *ptr1 = aux;

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main()
{
    int a {10};
    int b {20};

    int *ptrA = &a;
    int *ptrB = &b;

    swap_pointers(ptrA, ptrB);

    cout << a << endl;
    cout << b << endl;
    
    return 0;
}