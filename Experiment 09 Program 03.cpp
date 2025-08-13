//Reversing an array using pointers
#include<iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < 5; i++) {
        cout << " ";
        cin >> *(arr+ i);
    }
    cout <<"Original array: ";
    for (int j = 0; j < 5; j++)
        cout << *(arr+j) << " ";
    cout << endl;
    int *start = arr;
    int *end = arr + 4;
    while (start < end) 
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    cout << "Array in reverse order: ";
    for (int l = 0; l < 5; l++)
        cout << *(arr+ l) << " ";
}
