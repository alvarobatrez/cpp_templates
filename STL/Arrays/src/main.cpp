#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

void display(const std::array<int,5> &arr)
{
    std::cout << "[ ";
    for (const auto &i: arr)
    {
        std::cout << i << " ";
    }
    std::cout << "]\n";
}

int main()
{
    // ***** ARRAYS *****

    std::array<int, 5> arr1 {1, 2, 3, 4, 5};
    std::array<int, 5> arr2;

    display(arr1);
    display(arr2);

    arr2 = {6, 7, 8, 9, 10};

    display(arr1);
    display(arr2);

    std::cout << "arr1 size = " << arr1.size() << std::endl;
    std::cout << "arr2 size = " << arr2.size() << std::endl;

    arr1[0] = 10;
    arr2.at(0) = 60;
    display(arr1);

    std::cout << "arr2 first element = " << arr2.front() << std::endl;
    std::cout << "arr2 last element = " << arr2.back() << std::endl;

    std::cout << std::endl;

    // ***** FILL - SWAP *****

    arr1 = {1, 2, 3, 4, 5};
    arr2 = {6, 7, 8, 9, 10};

    display(arr1);
    display(arr2);

    arr1.fill(0);

    display(arr1);
    display(arr2);

    arr1.swap(arr2);

    display(arr1);
    display(arr2);

    std::cout << std::endl;

    // ***** RAW POINTERS *****

    arr1 = {1, 2, 3, 4, 5};
    int *ptr = arr1.data();
    std::cout << ptr << std::endl;
    *ptr = 10;
    display(arr1);

    std::cout << std::endl;

    // ***** SORT *****

    arr1 = {3, 2, 4, 5, 1};
    std::sort(arr1.begin(), arr1.end());
    display(arr1);

    std::cout << std::endl;

    // ***** MAX - MIN *****

    arr1 = {3, 2, 4, 5, 1};
    std::array<int, 5>::iterator min_num = std::min_element(arr1.begin(), arr1.end());
    auto max_num = std::max_element(arr1.begin(), arr1.end());
    std::cout << "min: " << *min_num << ", max: " << *max_num << std::endl;
    
    std::cout << std::endl;

    // ***** ADJACENT *****

    arr1 = {3, 2, 4, 4, 1};
    auto adjacent = std::adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end())
    {
        std::cout << "Adjacent element found with value: " << *adjacent << std::endl;
    }
    else
    {
        std::cout << "No adjacent element found\n";
    }

    std::cout << std::endl;

    // ***** ACCUMULATE *****

    arr1 = {1, 2, 3, 4, 5};
    int sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    std::cout << "arr1 sum = " << sum << std::endl;

    std::cout << std::endl;

    // ***** COUNT *****

    int num {3};
    std::array<int, 10> arr3 {1,2,3,4,1,2,3,4,5,6};
    int count1 = std::count(arr3.begin(), arr3.end(), num);
    std::cout << "Number " << num << " found " << count1 << " times\n";

    std::cout << std::endl;

    // ***** COUNT IF *****

    std::array<int, 10> arr4 {1,2,3,4,5,6,7,8,9,10};
    int count2 = std::count_if(arr4.begin(),arr4.end(),[](int x) { return x >= 4 && x <=8; });
    std::cout << "Numbers between 4 and 8: " << count2 << std::endl;

    return 0;
}