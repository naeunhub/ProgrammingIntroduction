#include<stdio.h>
#include<stdlib.h>
#define ARRAYSIZE 10000

int isort (int v[], int n);
int shellsort (int v[], int n);
void copyarray (int a[], int b[], int n);
void printarray(int a[], int n);

int isort(int v[], int n)
{
   int i, j, temp, number=0;
   for(i=1; i<n; i++){
      for(j=i-1; j>=0 && v[j] > v[j+1]; j--){
         temp=v[j], v[j]=v[j+1], v[j+1] = temp;
         number++;
      }
   }
   
   return number;
}

int shellsort(int v[], int n)
{
   int gap, i, j, temp, number=0;

   for (gap = n/2; gap > 0; gap /= 2)
      for(i = gap; i<n; i++)
         for(j=i-gap; j>=0 && v[j] > v[j+gap]; j-= gap)
         {temp = v[j], v[j] = v[j+gap], v[j+gap] = temp;
   ++number;   }
   return number;

}

void copyarray (int a[], int b[], int n)
{
   int i;
   for(i=0;i<n;i++)
   {
      a[i]=b[i];
   }
}

void printarray(int a[], int n)
{
   int j;
   for(j=0; j<n; j++)
   {
      printf("%d ",a[j]);
   }   
}



main()
{
   int numbers[ARRAYSIZE], data[ARRAYSIZE];
   int i,n,count;
     
   for (i = 0; i < ARRAYSIZE; i++)
      numbers[i] = rand();
   printf("Before sort (the first 8 numbers) : ");
   printarray(numbers, 8);
   printf("\n\n");

   for (n = 10; n<= ARRAYSIZE; n*=10){
      copyarray(data, numbers, n);
      count = isort(data, n);
      printf("After insertion sort (the first 5 numbers) : ");
      printarray(data, 5);
      printf("\nThe number of numbers swaps in insertion sort : %d\n\n",count);


      copyarray(data, numbers, n);
      count = shellsort(data, n);
      printf("After Shell sort (the first 5 numbers): ");
      printarray(data,5);
      printf("\nThe number of numbers swaps in Shell sort :  %d\n\n",count);

   }
}