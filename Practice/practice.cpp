#include <iostream>
#include <string>
using namespace std;

/*int Transfer(int x,int y)
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
    cout << "x =" << x << '\n';
    return x;
}*/
string IntToString(int x,int y)
{
    string ex = to_string(x);
    string why = to_string(y);

    string all = "The first number is:\n" + ex + "The second number is:\n" + why; 

    return all;
}
int main()
{
    /*int x,y,z;
    cin >> x;
    y = Triple(x + 2);
    cout << '(' << x << "," << y <<")\n";
    cin >> z;
    cout << Transfer(Triple(z),x) <<"\n";
    Print(2 * y);
    Print(6 - x);
    return 0;*/
    cout << IntToString(12,19);
}
