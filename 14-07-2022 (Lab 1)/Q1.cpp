#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 34, 59, 56, 6, 77, 81, 82, 83, 7, 5, 43, 99, 76, 4, 3, 34, 56, 71, 49};
    int no;
    cin >> no;
    int l = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < l; i++)
    {
        if (no == arr[i])
        {
            cout << "Time to find the number is " << i + 1 << " units";
            return 0;
        }
    }
    cout << "Time complexity is O(n)";
}