// Q: Write a program to create an array consisting 10 elements and print it in reverse.

#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for (int i = 9; i >= 0; i--)
        cout << arr[i] << "\n";

    return 0;
}

// Umang Laad