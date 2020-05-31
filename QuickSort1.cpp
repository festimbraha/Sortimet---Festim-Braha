/*Pseudokodi
procedura quickSort(arr[], low, high)
arr = vargu per sortim
low – elementi i pare
high – elementi i fundit
begin
if (low < high)
{
    // pivot – elementi strumbullar rreth të cilit do të ndahet grupi  
    pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);  // thirreni Quicksort në mënyrë rekursive për të renditur
    nën vargun përpara
    quickSort(arr, pivot + 1, high); // thirreni Quicksort në mënyrë rekursive për të 
    renditur nën vargun pas strumbullarit

}
end procedure
//procedura e ndarjes zgjedh elementin e fundit si strumbullar.
Pastaj vendoset strumbullari në pozicionin e saktë në
// vargu i tillë që të gjithë elementët më të ulët se strumbullari të jenë në gjysmën e parë të vargut dhe 
// elementet më të larta
pastaj pivot janë në anën më të lartë të vargut.
procedure partition(arr[], low, high)
fillimi
// pivot (Elementi që duhet të vendoset në pozicionin e duhur)
pivot = arr[high];
i = (low - 1)  // indesksi per elementin me te vogel
for j = low to high
{
    if (arr[j] <= pivot)
    {
        i++;    // indeksi i rritjes së elementit më të vogël
        swap arr[i] and arr[j]
    }
}
swap arr[i + 1] and arr[high])
return (i + 1)
fund
*/

#include <iostream>
using namespace std;
// Ndërroni dy elementë - Funksioni i shërbimeve 
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// ndarjen e grupit duke përdorur elementin e fundit si strumbullar
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        // nëse elementi aktual është më i vogël se strumbullari, rritni elementin e ulët
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

        //renditni në mënyrë të pavarur nën-vargjet 
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