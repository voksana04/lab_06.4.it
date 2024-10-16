#include <iostream>
#include <algorithm>
using namespace std;

void inputArray(double* arr, int n) {
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

double sumNegativeElements(double* arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int findMaxIndex(double* arr, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int findMinIndex(double* arr, int n) {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

double productBetweenMinMax(double* arr, int n) {
    int minIndex = findMinIndex(arr, n);
    int maxIndex = findMaxIndex(arr, n);

    if (minIndex > maxIndex) {
        swap(minIndex, maxIndex);
    }

    double product = 1;
    for (int i = minIndex + 1; i < maxIndex; i++) {
        product *= arr[i];
    }

    return product;
}

void sortEvenElements(double* arr, int n) {
    for (int i = 0; i < n; i++) 
    {
        if (int(arr[i]) % 2 == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (int(arr[j]) % 2 == 0 && arr[j] < arr[i])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

void printArray(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    double* arr = new double[n];

    inputArray(arr, n);

    cout << "Initial array:\n";
    printArray(arr, n);

    double sumNegatives = sumNegativeElements(arr, n);
    cout << "S = " << sumNegatives << endl;

    double product = productBetweenMinMax(arr, n);
    cout << "P = " << product << endl;

    sortEvenElements(arr, n);

    cout << "Array after sorting even elements:\n";
    printArray(arr, n);

    delete[] arr;
    return 0;
}