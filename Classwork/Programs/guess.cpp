#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void GuessMyNumber();
void GuessMyNumber()
{
    int result = (rand() % 10) + 1;
    int i = 1;
    int guess;
    cout << "Enter a number between 1 and 10\n";
    cin >> guess;

    while(guess != result && i <= 5) {
        cout << "Guess again!\n";
        cin >> guess;
        i += 1;
        cout << "Try again next time\n";
        break;
    } 
    
    cout << "You guessed my number!\n";
}
int main()
{
    srand(time(NULL));
    GuessMyNumber();
    return 0;
}