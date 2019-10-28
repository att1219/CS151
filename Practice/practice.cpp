#include <ios>
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
}
string IntToString(int x,int y)
{
    string ex = to_string(x);
    string why = to_string(y);

    string all = "The first number is:\n" + ex + "The second number is:\n" + why; 

    return ;
}*/

bool IsOddPrime(int x)
{
    if (x == 2 || x == 3 || x == 5 || x == 7)
    {
        return "True";
    } else {
        return "False";
    }
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
    Print(6 - x);*/
    
    cout <<IsOddPrime(4);
    
    return 0;
}
