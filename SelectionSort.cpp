#include<iostream>  
using namespace std;



//Pseudocode
/*Procedura selection_sort(array,N)
    array – grup i anetareve që do të zgjidhen
    N – madhesia e array

fillimi
    for I = 1 to N-1
    begin
        set min  = i
        for j = i+1 to N
        begin
            if array[j] < array[min] then
                min = j;
            end if
        end for
        //me swap elementin minimal me elementin aktual
        if minIndex != I then
            swap array[min[] and array[i]
        end if
    end for
fundi
*/

/*rasti me i keq	O( n 2 ) ; O(n) swaps
Rasti me i mire	O( n 2 ) ; O(n) swaps
rasti mesatar	O( n 2 ) ; O(n) swaps
Space complexity	O(1)  */


int findSmallest(int[], int);
int main()
{
    int myarray[10] = { 11,5,2,20,42,53,23,34,101,22 };
    int pos, temp, pass = 0;
    cout << "\n Lista me elemente qe duhet sortuar\n";
    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << "\t";
    }
    for (int i = 0; i < 10; i++)
    {
        pos = findSmallest(myarray, i);
        temp = myarray[i];
        myarray[i] = myarray[pos];
        myarray[pos] = temp;
        pass++;
    }
    cout << "\n Lista me elemente tashme te sortuara\n";
    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << "\t";
    }
    cout << "\nNumri i kalimeve të kërkuara për të renditur vargun: " << pass;
    return 0;
}
int findSmallest(int myarray[], int i)
{
    int ele_small, position, j;
    ele_small = myarray[i];
    position = i;
    for (j = i + 1; j < 10; j++)
    {
        if (myarray[j] < ele_small)
        {
            ele_small = myarray[j];
            position = j;
        }
    }
    return position;
}