#include <stdio.h>
void main()
{
int a[10000000], n, i, j, position, temp;
printf("Enter number of elements : ");
scanf("%d", &n);
printf("Enter %d Numbers : ", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
}
if(position != i)
{
temp=a[i];
a[i]=a[position];
a[position]=temp;
}
}
printf("Sorted Array:n");
for(j = 0; j < n; j++)
printf("%d \n", a[j]);
}
