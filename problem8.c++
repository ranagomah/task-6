#include <iostream>

using namespace std;
void left_max(short arr[], int len)
{ if (len == 0){
        return;
        }

        left_max (arr, len - 1);
             arr[len - 1]=  max(arr[len - 1],arr[len - 2]);

}
int main()
{
    short arr[] = {1, 3, 5, 7, 4,2};

    left_max(arr, 6);

    for (int i = 0; i < 6; ++i)
    {
        cout << arr[i] << "   ";
    }
    return 0;
}