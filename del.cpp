// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    
    int x[5] = { 1,20,5,78,30 };
    int index =3;
    for (int i = 0; i <= 4; i++) {

        cout << x{ i } << end1;
    }



    for (int i = index; i <=3; i++) {


        x[i] = x[i + 1];
    }
    x[4] = 0;
    cout << "after shift" << end1;
    for (int i = 0; i <= 4; i++) {

        cout << x[i] << end1;
    }
