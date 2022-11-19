#include <iostream>

using namespace std;

double getSum(int n, double arr[])
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    return s;
}

double getSumNegative(int n, double arr[])
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) s += arr[i];
    }
    return s;
}

double getSumPositive(int n, double arr[])
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0) s += arr[i];
    }
    return s;
}

double getSumOddInd(int n, double arr[])
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0) s += arr[i];
    }
    return s;
}

double getSumEvenInd(int n, double arr[])
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) s += arr[i];
    }
    return s;
}

void printSortedArr(int n, double arr[]) {
    int min = 0;
    double buf = 0;

    for (int i = 0; i < n; i++)
    {
        min = i; 
        for (int j = i + 1; j < n; j++)
            min = (arr[j] < arr[min]) ? j : min;
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
}

int main()
{
    const int n = 10; // init array
    double mas[n];
    for (int i = 0; i < n; i++) //enter array data
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    cout << "Sum of elements: " << getSum(n, mas) << "\n";
    cout << "Sum of negative elements: " << getSumNegative(n, mas) << "\n";
    cout << "Sum of positive elements: " << getSumPositive(n, mas) << "\n";
    cout << "Sum of elements with odd indexes: " << getSumOddInd(n, mas) << "\n";
    cout << "Sum of elements with even indexes: " << getSumEvenInd(n, mas) << "\n";
    cout << "Print sorted elements: ";
    printSortedArr(n, mas);

    return 0;
}