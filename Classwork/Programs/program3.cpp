#include <iostream>
using namespace std;

/*int main()
{
    double a, b, c;

    cin >> a >> b >> c;
    cout << (a + b + c) <<"\n";

    return 0;
}*/ 

void Swap(int a,int b);

void Swap(int a,int b)
{
    int c = a;
    a = b;
    b = c;
}

void Swap2(int&d,int&e);

void Swap2(int&d,int&e)
{
    int f = d;
    d = e;
    e = f; 
}

int main()
{
    int a=2,b=4,c=1,d=3;
    cout <<a <<" " <<b <<" " <<c <<" " <<d <<"\n";
    Swap(a,b);
    Swap2(c,d);
    cout <<a <<" " <<b <<" " <<c <<" " <<d <<"\n";

    return 0; 
}