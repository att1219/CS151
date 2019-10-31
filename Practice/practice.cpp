#include <iostream>
#include <string>
using namespace std;

int Transfer(int x,int y)
{
    x = 2 * y * y + 5;
    return x;
}

int Triple(int x)
{
    return 3 * x;
}

char Print(int x)
{
    cout << "x =" << x << "\n";
    return x;
}

/*string IntToString(int x,int y)
{
    string ex = to_string(x);
    string why = to_string(y);

    string all = "The first number is:\n" + ex + "The second number is:\n" + why; 

    return ;
}

void CountDownToInt(int n)
{
    if (n % 2 == 1) {
        while (n >= 1) {
            cout << n <<"\n";
            n = n - 2;
        } 
    } else if (n % 2 == 0) {
         while (n > 1) {
            cout << n <<"\n";
            n = n - 2;
            }
    } else if (n <= 0) {
        cout << "\n";
    } else {
    }
}

int MedianThree(int a,int b,int c);
int MedianThree(int a,int b,int c)
{
    if ((a < b && b < c) || (c < b && b < a)) {
        return b;
    } else if ((b < a && a < c) || (c < a && a < b)) {
        return a;
    } else {
        return c;
    }
}*/

int main()
{
    int x,y,z;
    cin >> x;
    y = Triple(x + 2);
    cout << '(' << x << "," << y <<")\n";
    cin >> z;
    cout << Transfer(Triple(z),x) <<"\n";
    Print(2 * y);
    Print(6 - x);
    return 0;
}
