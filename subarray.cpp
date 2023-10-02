#include <iostream>
using namespace std;

void printSubarray(int arr[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int smallestsum(int arr[], int n, int x)
{
    int smalllength = n + 1;
    int startIdx = 0;
    int endIdx = 0;

    for (int s = 0; s < n; s++)
    {
        int sum1 = arr[s];

        if (sum1 > x)
        {
            printSubarray(arr, s, s);
            return 1;
        }

        for (int e = s + 1; e < n; e++)
        {
            sum1 += arr[e];

            if (sum1 > x && (e - s + 1) < smalllength)
            {
                smalllength = (e - s + 1);
                startIdx = s;
                endIdx = e;
            }
        }
    }

    if (smalllength > n)
    {
        return 0; // No subarray found
    }

    printSubarray(arr, startIdx, endIdx);
    return smalllength;
}

int main()
{
    int arr1[] = {1, 4, 45, 6, 10, 19};
    int x = 50;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = smallestsum(arr1, n1, x);
    if (res1 == 0)
    {
        cout << "Not present\n";
    }
    else if (res1 == 1)
    {
        cout << "Smallest subarray with sum greater than " << x << " is a single element: " << arr1[0] << endl;
    }
    else
    {
        cout << "Smallest subarray with sum greater than " << x << " is: ";
        cout << res1 << " elements: ";
        cout << endl;
    }
    return 0;
}
