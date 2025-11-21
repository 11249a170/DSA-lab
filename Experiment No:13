Quicksort

Aim:
To sort a list efficiently by repeatedly partitioning it around a chosen pivot element.

Algorithm:
Choose a pivot element from the list.
Partition the list into two parts: elements less than the pivot and elements greater than the pivot.
Recursively apply Quicksort to the left part and the right part.
Combine the sorted left part, the pivot, and the sorted right part to get the final sorted list.

Program:
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int list[], int low, int high)
{
    int pivot = list[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (list[j] < pivot)
        {
            i++;
            swap(&list[i], &list[j]);
        }
    }
    swap(&list[i + 1], &list[high]);
    return i + 1;
}
void quickSort(int list[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(list, low, high);
        quickSort(list, low, pi - 1);
        quickSort(list, pi + 1, high);
    }
}
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int list[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &list[i]);
    quickSort(list, 0, n - 1);
    printf("Sorted array (Quick Sort): ");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    return 0;
}
