#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n, bool ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 10;
    int arr[size];

    cout << "Ingrese " << size << " valores enteros separados por espacios: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    char order;
    cout << "Ingrese 'a' para ordenar de forma ascendente o 'd' para ordenar de forma descendente: ";
    cin >> order;

    bool ascending;
    if (order == 'a') {
        ascending = true;
    } else if (order == 'd') {
        ascending = false;
    } else {
        cout << "Entrada no válida. Saliendo del programa." << endl;
        return 1;
    }

    bubbleSort(arr, size, ascending);

    cout << "Arreglo ordenado en orden ";
    if (ascending) {
        cout << "ascendente: ";
    } else {
        cout << "descendente: ";
    }
    printArray(arr, size);

    return 0;
}