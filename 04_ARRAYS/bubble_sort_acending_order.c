#include<stdio.h>
void main()
{
  int a[10], n, i, d, swap;
  printf("Enter number of elements in the array:\n");
  scanf("%d", &n); 
  printf("Enter integers: \n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  bubble_sort(a, n);
  printf("The sorted array:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
}
void bubble_sort(int a[], int n)
{
    int i = 0, j = 0, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {  
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}