// Tugas.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";

        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];

    }

}

void insertionSort() {
    int i, j, temp;

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = arr[i]; //step 2

        j = i - 1; // step 3
        
        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; //step 4b
        }

int main()
{
    std::cout << "Hello World!\n";
}
