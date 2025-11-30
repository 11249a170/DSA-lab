Mergesort
Aim:
To sort a list efficiently by dividing it into smaller parts, sorting those parts, and then merging them back together in order.

Algorithm:
Divide: Split the list into two halves.
Conquer: Recursively apply Merge Sort to both halves.
Combine: Merge the two sorted halves into a single sorted list.
Repeat steps 1–3 until the entire list is sorted.

Program:
#include <stdio.h>
void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int temp[right - left + 1];
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);      
        mergeSort(arr, mid + 1, right); 
        merge(arr, left, mid, right);   
    }
}
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    mergeSort(arr, 0, n - 1);
    printf("Sorted array (Merge Sort): ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
