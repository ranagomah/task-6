#include <iostream>

using namespace std;
void arrPrint(int arr[],int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }
}
void array_increment(int arr[], int len)
{
    if (len == 0)
        return;

    array_increment(arr, len - 1);
    arr[len - 1] += len - 1;
}

int main()
{
    int arr[] = {1, 8, 2, 10, 3};

    array_increment(arr, 5);
    arrPrint(arr,5);
    return 0;
}
