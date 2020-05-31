#include<iostream>
using namespace std;

// Bubble sort 

//është një nga algoritmet më të thjeshtë të klasifikimit. Dy unaza janë implementuar në algoritëm.


//
//1st(n - 1)
//2nd(n - 2)
//3rd(n - 3)
//.......	......
//last	1

/*Numri i krahasimeve: (n - 1) + (n - 2) + (n - 3) +.....+ 1 = n(n - 1) / 2 nearly equals to n^2*/
/*Gjithashtu, ne mund të analizojmë kompleksitetin duke vëzhguar thjesht numrin e unazave. Ka 2 unaza kështu që kompleksiteti është
 n*n = n^2*/

/*Rasti me i keq:O(n^2)
Nëse duam të renditim në rend ngjitje dhe vargu është në rend zbritës, atëherë ndodh rasti më i keq.

rasti me i mire:O(n)
Nëse grupi tashmë është renditur, atëherë nuk ka nevojë për renditje
.

Rasti mesatar:O(n^2)
Ndodh kur elementët e vargjeve janë në gjendje të ngatërruar (as ngjitje as zbritëse).*/


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
    cout << "\nNumri i kalimeve të marra për të renditur listën: " << pass << endl;
    return 0;
}
