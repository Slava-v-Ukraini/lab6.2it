#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        S += a[i];
    return S;
}

double AverageOdd(int* a, const int size)
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)  // перевірка на непарність
        {
            sum += a[i];
            count++;
        }
    }

    if (count > 0)
        return (sum * 1.0) / count;

    else
        return 0;
}


void ModifyArray(int* a, const int size)
{
    for (int i = 0; i < size; i++) {
        if (a[i] < 0)  // замінюємо від’ємні елементи на 0
            a[i] = 0;
    }
}
int main() {
    srand((unsigned)time(NULL));

    const int n = 25;
    int a[n];
    int Low = -40;
    int High = 90;

    Create(a, n, Low, High);
    cout << "Array:" ;
    Print(a, n);
 
    int sum = Sum(a, n);
    cout << "Sum = " << sum << endl;

    double avg = AverageOdd(a, n);
    cout << "Average = " << avg << endl;
    
    ModifyArray(a, n);
    cout << "Modified array: ";
    Print(a, n);
    return 0;
}
