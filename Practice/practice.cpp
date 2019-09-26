#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Echo(string msg);
void Echo(string msg)
{
    cout << "Enter a string";
    cin >> msg;
}

int main()
{
    cout <<Echo(msg);
    return 0;
}
