#include <iostream>

using namespace std;
int sum(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0];
    }

    int result = sum(arr, len - 1);
    return result + arr[len - 1];
}
int main()
{
    int arr[] = {1, 8, 2, 10, 3};

    cout << sum(arr, 5);

    return 0;
}