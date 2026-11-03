#include <iostream>
using namespace std;

// Partition function
int partition(int A[], int low, int high)
{
    int pivot = A[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i + 1], A[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int p = partition(A, low, high);

        quickSort(A, low, p - 1);
        quickSort(A, p + 1, high);
    }
}

// Display function
void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    int A[] = {10,7,8,9,1,5};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Original Array: ";
    display(A, n);

    quickSort(A, 0, n - 1);

    cout << "Sorted Array: ";
    display(A, n);

    return 0;
}