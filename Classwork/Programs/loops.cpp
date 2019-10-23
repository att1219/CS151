#include <iostream>
#include <string>
using namespace std;

/*void CountToN(int n);
void CountToN(int n)
{
   int i = 1;
   while (i <= n) {
       cout << i << " ";
       i += 1;
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
}*/

int GCD(int m,int n)
{
    int r;
    while(n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

void CountToN(int n)
{
    for (int i = 3; i <= 100; i += 3)
    {
        cout << i << " ";
    }
}
int main()
{
    CountToN(100);
    return 0;
}