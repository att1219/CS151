#include <iostream>
#include <string>
using namespace std;

void CountToN(int n);
void CountToN(int n)
{
    if (n <= 0)
    {
        return;
    } else if (n == 1) {
        cout << "1";
    } else {
        CountToN(n-1);
        cout << n << " ";
    }
}

int Fib(int n);
int Fib(int n)
{
    if (n <= 0)
    {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return Fib(n-1) + Fib(n-2);
    }
}

int main()
{
    CountToN(100);
    Fib(5);
    return 0;
}