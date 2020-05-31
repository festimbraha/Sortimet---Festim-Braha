#include<iostream>
using namespace std;

// Bubble sort 

//�sht� nj� nga algoritmet m� t� thjesht� t� klasifikimit. Dy unaza jan� implementuar n� algorit�m.


//
//1st(n - 1)
//2nd(n - 2)
//3rd(n - 3)
//.......	......
//last	1

/*Numri i krahasimeve: (n - 1) + (n - 2) + (n - 3) +.....+ 1 = n(n - 1) / 2 nearly equals to n^2*/
/*Gjithashtu, ne mund t� analizojm� kompleksitetin duke v�zhguar thjesht numrin e unazave. Ka 2 unaza k�shtu q� kompleksiteti �sht�
 n*n = n^2*/

/*Rasti me i keq:O(n^2)
N�se duam t� renditim n� rend ngjitje dhe vargu �sht� n� rend zbrit�s, at�her� ndodh rasti m� i keq.

rasti me i mire:O(n)
N�se grupi tashm� �sht� renditur, at�her� nuk ka nevoj� p�r renditje
.

Rasti mesatar:O(n^2)
Ndodh kur element�t e vargjeve jan� n� gjendje t� ngat�rruar (as ngjitje as zbrit�se).*/


int main()
{
    int i, j, temp, pass = 0;
    int a[10] = { 10,2,0,14,43,25,18,1,5,45 };
    cout << "Lista Fillesatare ...\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;



    //Dy unaza: nje per te ecur neper varg dhe tjetera per krahasim
    


    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        pass++;
    }
    cout << "lista me elemente tashme te sortuara ...\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    cout << "\nNumri i kalimeve t� marra p�r t� renditur list�n: " << pass << endl;
    return 0;
}
