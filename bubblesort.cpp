#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < n - i - 1; j++)
        { 

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}
int main()
{
    int arr[5] = {10, 1, 3, 14, 9};
    bubblesort(arr, 5);
    printArray(arr, 5);

    return 0;
}
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {

        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}
// int main()
// {
//     int arr[] = {8, 2, 9, 1, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Sorted array:" << endl;
//     bubblesort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Returns length of smallest subarray with sum greater than x.
// // If there is no subarray with given sum, then returns n+1
// int smallestSubWithSum(int arr[], int n, int x)
// {
//     // Initialize length of smallest subarray as n+1
//     int min_len = n + 1;

//     // Pick every element as starting point
//     for (int start = 0; start < n; start++)
//     {

//         int curr_sum = arr[start];

//         // If first element itself is greater
//         if (curr_sum > x)
//             return 1;

//         // Try different ending points for current start
//         for (int end = start + 1; end < n; end++)
//         {
//             // add last element to current sum
//             curr_sum += arr[end];

//             // If sum becomes more than x and length of
//             // this subarray is smaller than current smallest
//             // length, update the smallest length (or result)
//             if (curr_sum > x && (end - start + 1) < min_len)
//                 min_len = (end - start + 1);
//         }
//     }
//     return min_len;
// }

// /* Driver program to test above function */
// int main()
// {
//     int arr1[] = {1, 4, 45, 6, 10, 19};
//     int x = 51;
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int res1 = smallestSubWithSum(arr1, n1, x);
//     (res1 == n1 + 1) ? cout << "Not possible\n" : cout << res1 << endl;

//     int arr2[] = {1, 10, 5, 2, 7};
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     x = 9;
//     int res2 = smallestSubWithSum(arr2, n2, x);
//     (res2 == n2 + 1) ? cout << "Not possible\n" : cout << res2 << endl;

//     int arr3[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
//     int n3 = sizeof(arr3) / sizeof(arr3[0]);
//     x = 280;
//     int res3 = smallestSubWithSum(arr3, n3, x);
//     (res3 == n3 + 1) ? cout << "Not possible\n" : cout << res3 << endl;

//     return 0;
// }
// //
#include <iostream>
#include <vector>

// Merge two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(std::vector<int> &arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function to perform merge sort
void mergeSort(std::vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for large l and r
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

int main()
{
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arr_size = arr.size();

    std::cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        std::cout << arr[i] << " ";

    // Call mergeSort function
    mergeSort(arr, 0, arr_size - 1);

    std::cout << "\nSorted array is \n";
    for (int i = 0; i < arr_size; i++)
        std::cout << arr[i] << " ";

    return 0;
}
