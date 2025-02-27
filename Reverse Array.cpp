// Reverse Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Yochanan Allen 
//This program populates an array with values from 1 to 10, then calls a function to reverse the
//array.The program then displays both the original and reversed arrays.


#include <iostream>  

using namespace std;


int* ReverseArray(const int arr[], int size) {
    
    int* reversedArr = new int[size];

    
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i];
    }

    
    return reversedArr;
}


void print(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int originalArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;

   
    int* reversedArray = ReverseArray(originalArray, size);

    
    cout << "Original array:" << endl;
    print(originalArray, size);

    
    cout << "Reversed array:" << endl;
    print(reversedArray, size);

    
    delete[] reversedArray;

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
