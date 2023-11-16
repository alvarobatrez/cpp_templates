#include <iostream>

using namespace std;

void reverse_array(int *arr, size_t size)
{
    for(size_t i {0}; i < size/2; i++)
    {
        arr[i] = arr[i] + arr[size-1-i];
        arr[size-1-i] = arr[i] - arr[size-1-i];
        arr[i] = arr[i] - arr[size-1-i];
    }
}

int main()
{
    int array[] {1,2,3,4,5};
    size_t size {sizeof(array) / sizeof(array[0])};
    
    reverse_array(array, size);

    for (size_t i {0}; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}