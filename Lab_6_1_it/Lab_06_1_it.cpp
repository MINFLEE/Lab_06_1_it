// Lab_06_1_it

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void CreateArrayWithRandomElements(int* x, int numberOfElements, int Low, int High);
void PrintArray(int* x, const int numberOfElements);
int CountElements(int* x, int numberOfElements);
int SumElements(int* x, int numberOfElements);
void TurnToZero(int* x, int numberOfElements);

int main()
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int x[n];

    int Low = -17;
    int High = 53;
    CreateArrayWithRandomElements(x, n, Low, High);
    cout << "Array with Random elements:" << endl;
    PrintArray(x, n);
    cout << "Count: " << setw(1) << CountElements(x, n) << endl;
    cout << "Sum: " << setw(1) << SumElements(x, n) << endl;
    TurnToZero(x, n);
    PrintArray(x, n);
}

void CreateArrayWithRandomElements(int* x, int numberOfElements, int Low, int High) {
    for (int i = 0; i < numberOfElements; i++) {
        x[i] = Low + rand() % (High - Low + 1);
    }
}

void PrintArray(int* x, const int numberOfElements) {
    for (int i = 0; i < numberOfElements; i++) {
        cout << "{ x[" << setw(2) << i << "] = " << setw(3) << x[i] << " }  ";
        if ((i + 1) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int CountElements(int* x, int numberOfElements) {
    int count = 0;
    for (int i = 0; i < numberOfElements; i++) {
        if (x[i] < 0 && !(x[i] % 3 == 0)) {
            count++;
        }
    }
    return count;
}

int SumElements(int* x, int numberOfElements) {
    int sum = 0;
    for (int i = 0; i < numberOfElements; i++) {
        if (x[i] < 0 && !(x[i] % 3 == 0)) {
            sum += x[i];
        }
    }
    return sum;
}

void TurnToZero(int* x, int numberOfElements) {
    for (int i = 0; i < numberOfElements; i++) {
        if (x[i] < 0 && !(x[i] % 3 == 0)) {
            x[i] = 0;
        }
    }
}