#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int ABS (int&x)
{
    if (x < 0)
    {
        x *= -1;
    }
}

int LCM (int m, int n)
{
    m = ABS(m);
    n = ABS(n);
    int mx = (m > n)?(m):(n);
    int mn = m + n - mx;
    int p = m * n;

    for(int i = mx;i < p;i += mx)
    {
        if(i % mn == 0) 
        {
            return i;
        }
    }
    return p;
}

int CF(int a[],int n)
{
    int cf = a[0];

    for(int t = 1;t < n;t += 1)
    {
        cf = LCM(cf,a[t]);
    }
    return cf;
}

void RValues(int d[],int n,int a,int b)
{
    int mx = (a > b)?(a):(b);
    int mn = a + b - mx;
    int md = mx - mn + 1;

    for(int i = 0;i < n;i += 1)
    {
        d[i] = mn + rand() % md;
    
    }
}

void Print (int v[], int n)
{
    cout << "\n[";

    for(int q = 0; q < n;q += 1)
    {
        cout << v[q];
        char ch = (q + 1 < n)?('['):(']');
        cout << ch;
    }
}

int main()
{
    srand(time(NULL));
    int a[50];
    RValues(a,50,15,10);
    cout << "The LCM of";
    Print(a,50);
    cout << "nis" <<CF(a,50) <<"\n";
    return 0;
}
