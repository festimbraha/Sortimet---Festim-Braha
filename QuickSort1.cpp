/*Pseudokodi
procedura quickSort(arr[], low, high)
arr = vargu per sortim
low � elementi i pare
high � elementi i fundit
begin
if (low < high)
{
    // pivot � elementi strumbullar rreth t� cilit do t� ndahet grupi  
    pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);  // thirreni Quicksort n� m�nyr� rekursive p�r t� renditur
    n�n vargun p�rpara
    quickSort(arr, pivot + 1, high); // thirreni Quicksort n� m�nyr� rekursive p�r t� 
    renditur n�n vargun pas strumbullarit

}
end procedure
//procedura e ndarjes zgjedh elementin e fundit si strumbullar.
Pastaj vendoset strumbullari n� pozicionin e sakt� n�
// vargu i till� q� t� gjith� element�t m� t� ul�t se strumbullari t� jen� n� gjysm�n e par� t� vargut dhe 
// elementet m� t� larta
pastaj pivot jan� n� an�n m� t� lart� t� vargut.
procedure partition(arr[], low, high)
fillimi
// pivot (Elementi q� duhet t� vendoset n� pozicionin e duhur)
pivot = arr[high];
i = (low - 1)  // indesksi per elementin me te vogel
for j = low to high
{
    if (arr[j] <= pivot)
    {
        i++;    // indeksi i rritjes s� elementit m� t� vog�l
        swap arr[i] and arr[j]
    }
}
swap arr[i + 1] and arr[high])
return (i + 1)
fund
*/

#include <iostream>
using namespace std;
// Nd�rroni dy element� - Funksioni i sh�rbimeve 
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// ndarjen e grupit duke p�rdorur elementin e fundit si strumbullar
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        // n�se elementi aktual �sht� m� i vog�l se strumbullari, rritni elementin e ul�t
        // mi bo swap i dhe j

        if (arr[j] <= pivot)
        {
            i++;    // ment 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        //ndarja e vec
        int pivot = partition(arr, low, high);

        //renditni n� m�nyr� t� pavarur n�n-vargjet 
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void displayArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << "\t";

}

int main()
{
    int arr[] = { 12,23,3,43,51,35,19,45 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "vargu i dhene: " << endl;
    displayArray(arr, n);
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "Vargu i soruat permes Quick sort: " << endl;
    displayArray(arr, n);
    return 0;
}