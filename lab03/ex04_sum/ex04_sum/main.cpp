#include <iostream>

using namespace std;

// sum for arithmetic progression: s = 5 + 10 + ... + 5 * n
int sum(int n)
{
    if (n == 1) {
        return 5;
    }
    return n * 5 + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter n (for arithmetic progression: s = 5 + 10 + ... + 5 * n): ";
    cin >> n;
    cout << sum(n);

    return 0;
}