#include <iostream>

// ***** REVERSE ARRAYS *****

void reverse_array(int *arr, int size)
{
    for(int i = 0; i < size/2; i++)
    {
        arr[i] = arr[i] + arr[size-1-i];
        arr[size-1-i] = arr[i] - arr[size-1-i];
        arr[i] = arr[i] - arr[size-1-i];
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
}

int main()
{
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);

    reverse_array(array, size);

    print_array(array, size);
    
    return 0;
}