#include <iostream>

using namespace std;
int sufix_sum(int arr[], int len, int count)
{
    if (count == 0)
    {
        return 0;
    }
    return arr[len - 1] + sufix_sum(arr, len - 1, count - 1);
}
int main()
{
    int arr[] = {1, 3, 5, 7, 4, 2};
    cout << sufix_sum(arr, 6, 3);
    return 0;
    }