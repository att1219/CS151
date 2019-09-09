#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\nInteger Operations\n";
    cout << "2 + 5 = " << 2 + 5 << "\n";
    cout << "5 + 3 = " << 5 + 3 << "\n";
    cout << "2 - 5 = " << 2 - 5 << "\n";
    cout << "5 - 3 = " << 5 - 3 << "\n";
    cout << "2 * 5 = " << 2 * 5 << "\n";
    cout << "5 * 3 = " << 5 * 3 << "\n";
    cout << "2 / 5 = " << 2 / 5 << "\n";
    cout << "5 / 3 = " << 5 / 3 << "\n";
    cout << "2 % 5 = " << 2 % 5 << "\n";
    cout << "5 % 3 = " << 5 % 3 << "\n";

    cout << "\nFloating Point Operations\n";
    cout << "2 + 5.0 = " << 2 + 5.0 << "\n";
    cout << "5 + 3.0 = " << 5 + 3.0 << "\n";
    cout << "2 - 5.0 = " << 2 - 5.0 << "\n";
    cout << "5 - 3.0 = " << 5 - 3.0 << "\n";
    cout << "2 * 5.0 = " << 2 * 5.0 << "\n";
    cout << "5 * 3.0 = " << 5 * 3.0 << "\n";
    cout << "2 / 5.0 = " << 2 / 5.0 << "\n";
    cout << "5 / 3.0 = " << 5 / 3.0 << "\n";

    cout << "((2 + 3) % 4 * 7 - 18 / 3) => " << ((2 + 3) % 4 * 7 - 18 / 3) << "\n";
    cout << "2 + 3 * 16 / 5 - 7 % 2 * 6 => " << (2 + 3 * 16 / 5 - 7 % 2 * 6) << "\n";

    cout << boolalpha;
    cout << "\nRelational Operators\n";
    cout << "2 == 5 => " << (2 == 5) << "\n";
    cout << "3 == 3 => " << (3 == 3) << "\n";
    cout << "2 != 5 => " << (2 != 5) << "\n";
    cout << "3 != 3 => " << (3 != 3) << "\n";
    cout << "2 > 5 => " << (2 > 5) << "\n";
    cout << "3 > 3 => " << (3 > 3) << "\n";
    cout << "2 < 5 => " << (2 < 5) << "\n";
    cout << "3 < 3 => " << (3 < 3) << "\n";
    cout << "2 >= 5 => " << (2 >= 5) << "\n";
    cout << "3 >= 3 => " << (3 >= 3) << "\n";
    cout << "2 <= 5 => " << (2 <= 5) << "\n";
    cout << "3 <= 3 => " << (3 <= 3) << "\n";

    cout << "\nLogical Operators\n";
    cout << "true && true => " << (true && true) << "\n";
    cout << "true && false => " << (true && false) << "\n";
    cout << "false && true => " << (false && true) << "\n";
    cout << "false && false => " << (false && false) << "\n";
    cout << "true || true => " << (true || true) << "\n";
    cout << "true || false => " << (true || false) << "\n";
    cout << "false || true => " << (false || true) << "\n";
    cout << "false || false => " << (false || false) << "\n";
    cout << "!true => " << (!true) << "\n";
    cout << "!false => " << (!false) << "\n";
    
    cout << "!false && true => " <<(!false && true) << "\n";
    cout << "true || true && false => " << (true || true && false) << "\n";
    /* int x = -6;

    cout << (x > -5 && x <= 5) << "\n";
    cout << !(!false || false && true) << "\n";
    cout << (true || true && false) << "\n";
    */
	return 0;
}



