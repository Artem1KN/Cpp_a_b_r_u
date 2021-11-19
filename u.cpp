#include <iostream>
using namespace std;

int reverse(int n, int a = 0)
{
    if (n == 0) {
        return a;
    }
    else {
        return reverse(n / 10, 10 * a + n % 10);
    }
}

int main()
{
    int c;
    cin >> c;
    cout << reverse(c);
}
