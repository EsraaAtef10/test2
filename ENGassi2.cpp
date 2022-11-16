// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[50], elme, pos, i, tot;
        
       

        cout<<"Enter the Size  for Array: ";  cin >> tot;
        cout << "Enter" << tot << " Array Elements :  \n";
        for (i=0; i<tot; i++)
            cin >> arr[i];
        cout << "\n Enter Element to Insert:";
        cin >> elme;
        

        cout << "At What Position ?:";
        cin >> pos;
     
        for (i = tot; i >= pos; i--)
            arr[i] = arr[i - 1];
        arr[i] = elme;
        tot++;
        cout << "\nThe New Array is:\n";
        for (i = 0; i < tot; i++)
            cout << arr[i] << " ";
