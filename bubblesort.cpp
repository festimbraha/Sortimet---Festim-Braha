/* Optimized implementation of Bubble sort 
#include <iostream>
#include <stdio.h> 
using namespace std;




Pseudocode
procedura bubble_sort (array , N)
               array – varg i numrave qe do te renditen
               N – madhesia e array
fillimi
               swapped = false
               repeat
                             for I = 1 to N-1
                                              if array[i-1] > array[i] then
                                                           swap array[i-1] and array[i]
                                                           swapped = true
                                              end if
                              end for
                derisa nuk nderrohen
fundi i procedures



void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

 
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // nese asnje nga dy elementet nuk u nderruan, bej break.
        if (swapped == false)
            break;
    }
}

Funksioni për të shtypur një varg
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}


int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

*/