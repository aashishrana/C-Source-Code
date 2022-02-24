#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (key == arr[mid])
        {
            return mid;
        }
        if (key <= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even_arr[4] = {2, 4, 6, 8};

    int odd_arr[5] = {1, 3, 5, 7, 9};

    cout << binarySearch(even_arr, 4, 6) << endl;
    cout << endl;
    cout << binarySearch(odd_arr, 5, 88) << endl;
}