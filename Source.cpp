
#include <iostream>
using namespace std;

// Nj� funksion p�r t� shk�mbyer dy element�
  
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
elementi kryesor n� pozicionin e tij t� sakt� n� renditje
vektori, dhe vendos t� gjitha m� t� vogla (m� t� vogla se strumbullari)
n� t� majt� t� strumbullarit dhe t� gjith� element�t m� t� m�dhenj n� t� djatht�
t� strumbullarit
 */
/*
Rasti m� i keq: Rasti m� i keq ndodh kur procesi i ndarjes zgjedh gjithmon� elementin m� t� madh 
ose m� t� vog�l si strumbullar. N�se marrim parasysh strategjin� e m�sip�rme t� ndarjes,
ku elementi i fundit gjithmon� zgjidhet si strumbullar, 
rasti m� i keq do t� ndodhte kur grupi tashm� �sht� renditur n� renie ose rritje.

*/

/*Rasti m� i mir�: Rasti m� i mir� ndodh kur procesi i ndarjes gjithmon�
zgjedh elementin e mes�m si strumbullar. M� posht� �sht� p�rs�ritje p�r rastin m� t� mir�.
 T (n) = 2T (n / 2) + \ theta (n)*/


/*
Koha e marr� nga QuickSort n� p�rgjith�si mund t� shkruhet si m� posht�.
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
        // N�se elementi aktual �sht� m� i vog�l se strumbullari
 
        if (arr[j] < pivot)
        {
            i++; // indeksi i rritjes s� elementit m� t� vog�l
 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* Funksioni kryesor q� implementon QuickSort
arr[] --> Array qe do te sortohen,
low --> indeksi startues,
high --> indeksi i mbarimit */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi �sht� indeksi i ndarjes, arr [p] �sht� tani
        n� vendin e duhur */
        int pi = partition(arr, low, high);

        // Ndajme ve�mas elementet m� par�  
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