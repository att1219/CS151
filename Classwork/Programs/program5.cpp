#include <iostream>
#include <string>
using namespace std;

void NAsterisks(int n);
void NAsterisks(int n)
{
    for (int i = 1; i <= n; i += 1) {
        cout << "*";
    }
    cout <<"\n";
}

void UpperTriangularMatrix(int n);
void UpperTriangularMatrix(int n)
{
    for(int i = n; i >= 1; i -=1) {
        NAsterisks(i);
    }
}

//Without NAsterisks

void UpperTriangularMatrix(int n);
void UpperTriangularMatrix(int n)
{
    for(int i = n; i >= 1; i -=1) {
    for (int j = 1; j <= i; j += 1) {
        cout << "*";
    }
    cout <<"\n";
    }
}




int main()
{
    NAsterisks(5);
    NAsterisks(4);
    NAsterisks(3);
    NAsterisks(2);
    NAsterisks(1);

    return 0;
}