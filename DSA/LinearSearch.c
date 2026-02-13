1.LinearSearch
Aim:To write a program that implements Linear Search to find the position of a given element in a list or array.

Algorithm:
step1:start
step2:Input the array A of size n
step3:Input the elements to search, say key
step4:Set i=0 A loop initializer
step5:Repeat while i<n,do the following
      if A[i] is equal to key,then
      print"Element found at position i"
      stop
      otherwise,increase i by 1
step6:If the loop completed&the element is not found 
      print"Element not found"
step7:Stop

program:
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, n, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    bool flag;
    flag = false;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("The element is found at index %d : %d\n", i, arr[i]);
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        printf("The element is not found");
    }
    return 0;
}


Output:
Enter the size of array:5
Enter the array elements:
1
2
3
4
6
Enter the element to be searched:8
the element is not found

Result: Program executed successfully and searched the given element correctly.
