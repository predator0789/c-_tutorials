#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
        swap(&arr[min], &arr[i]);
    }}
int main()
{
   int arr[100],n,i;
   printf("enter size");
   scanf("%d",&n);
   printf("enter elements");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
        for (i=0; i <n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;}
