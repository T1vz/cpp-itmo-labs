#include <iostream>
#include <string>

using namespace std;

string getBinary(int num)
{
    if (num == 1) {
        return "1";
    }
    return getBinary(num / 2) + to_string(num % 2);
}

int main()
{
    int num;
    cout << "Enter your integer: ";
    cin >> num;

    cout << num << " in binary: " << getBinary(num);

    return 0;
}