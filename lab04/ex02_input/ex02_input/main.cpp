#include <iostream>

using namespace std;

bool Input(int& a, int& b) {
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a < 0 || b < 0) {
        return false;
    }
    return true;
}

int main()
{
    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;

    cout << "a + b = " << s;

    return 0;
}