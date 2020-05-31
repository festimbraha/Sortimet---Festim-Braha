
#include <iostream>
using namespace std;

// Një funksion për të shkëmbyer dy elementë
  
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// ALGORITMI I SORTIMIT
/*
quicksort(A, low, high)
fillimi
deklarimi i  array A[N] qe do te sortohet
    low = elementi i pare; high = elementi i fundit; pivot
if(low < high)
    begin
    pivot = partition (A,low,high);
    quicksort(A,low,pivot-1)
    quicksort(A,pivot+1,high)
    fundi
fundi*/

/* Ky funksion merr elementin e fundit si qender(strumbullar), vendet
elementi kryesor në pozicionin e tij të saktë në renditje
vektori, dhe vendos të gjitha më të vogla (më të vogla se strumbullari)
në të majtë të strumbullarit dhe të gjithë elementët më të mëdhenj në të djathtë
të strumbullarit
 */
/*
Rasti më i keq: Rasti më i keq ndodh kur procesi i ndarjes zgjedh gjithmonë elementin më të madh 
ose më të vogël si strumbullar. Nëse marrim parasysh strategjinë e mësipërme të ndarjes,
ku elementi i fundit gjithmonë zgjidhet si strumbullar, 
rasti më i keq do të ndodhte kur grupi tashmë është renditur në renie ose rritje.

*/

/*Rasti më i mirë: Rasti më i mirë ndodh kur procesi i ndarjes gjithmonë
zgjedh elementin e mesëm si strumbullar. Më poshtë është përsëritje për rastin më të mirë.
 T (n) = 2T (n / 2) + \ theta (n)*/


/*
Koha e marrë nga QuickSort në përgjithësi mund të shkruhet si më poshtë.
 T (n) = T (k) + T (n-k-1) + \ theta (n)*/

/* T(n) = T(0) + T(n-1) + \theta(n)  
 T(n) = T(n-1) + \theta(n)
Solucini ne fund eshte \theta(n^2).*/


int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Indeksi i emementit me te vogel  

    for (int j = low; j <= high - 1; j++)
    {
        // Nëse elementi aktual është më i vogël se strumbullari
 
        if (arr[j] < pivot)
        {
            i++; // indeksi i rritjes së elementit më të vogël
 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* Funksioni kryesor që implementon QuickSort
arr[] --> Array qe do te sortohen,
low --> indeksi startues,
high --> indeksi i mbarimit */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi është indeksi i ndarjes, arr [p] është tani
        në vendin e duhur */
        int pi = partition(arr, low, high);

        // Ndajme veçmas elementet më parë  
        // Ndarja dhe pas ndarjes  
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Vargu i sortuar: \n";
    printArray(arr, n);
    return 0;
}