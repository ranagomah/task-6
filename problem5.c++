#include <iostream>

using namespace std;
double averge(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0];
    }
double result= averge(arr,  len-1);
return (result+arr[len-1])/2 ;
}
int main()
{
    int arr[] = {1, 8, 2, 10, 3};

    cout << averge(arr, 5);

    return 0;
}