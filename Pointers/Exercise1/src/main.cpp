#include <iostream>

// ***** SWAP POINTERS *****

void swap(int *ptr1, int *ptr2)
{
    /* int aux {*ptr2};
    *ptr2 = *ptr1;
    *ptr1 = aux; */
    
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main()
{
    int a{1};
    int b{2};

    int *ptrA {&a};
    int *ptrB {&b};

    swap(ptrA, ptrB);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    return 0;
}