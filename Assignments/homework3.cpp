#include <iostream>
#include <math.h>
#include <string>
#include <cmath>
using namespace std;

double AbsoluteValue(double x);
double AbsoluteValue(double x)
{
    return abs(x);
}

void SwapIfGreater(int&a,int&b);
void SwapIfGreater(int&a,int&b)
{
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    } else {
    }
}

double Maximum(double a,double b,double c);
double Maximum(double a,double b,double c)
{
    if (b < a && c < a) {
        return a;
    } else if (a < b && c < b) {
        return b;
    } else {
        return c;
    }
}

string EvenOdd(int x);
string EvenOdd(int x)
{
    if (x % 2 == 0) {
        return "Even\n";
    } else {
        return "Odd\n";
    }
}

char ToUpperCase(char ch);
char ToUpperCase(char ch)
{
    int i = ch;
    ch = i;

    if (i < 255 && (i < 123 && i > 96))
    {
        return (i - 32);
    } else {
        return ch;
    }
}

void Change(int&x);
void Change(int&x)
{
    if (x > 0) {
        int y = x - 1;
        x = y;
    } else {
        int z = x + 1;
        x = z;
    }
}

string RightAngleQuadrilateral(double length,double width);
string RightAngleQuadrilateral(double length,double width)
{
    
    if (length == width) {
        return "Square";
    } else {
        return "Rectangle"; 
    }
}

double Distance(double e,double f);
double Distance(double e,double f)
{
    if (e < 0) {
        e = -1 * e;
    } 
    
    if (f < 0) {
        f = -1 * f;
    }
    
    if (e < f) {
        return (f - e);
    } else {
        return (e - f);
    }
}

bool MultipleOf(int c,int d);
bool MultipleOf(int c,int d)
{
    if (c < 0 || d < 0)
    {
        c = abs(c);
        d = abs(d);
    }

    if ((c % d == 0) || (d % c == 0)) {
        return true;
    } else {
        return false;
    }
}

string BoolToString(bool x);
string BoolToString(bool x)
{
    if (x == 1){
        return "True\n";
    } else {
        return "False\n";
    }
}

string ColorCode(int A);
string ColorCode(int A)
{
    if ((A % 3 == 0) && (A % 4 == 0)) {
        return "Purple\n";
    } else if (A % 4 == 0) {
        return "Blue\n";
    } else if (A % 3 == 0) {
        return "Red\n";
    } else {
        return "Yellow\n";
    }
}

string LetterGrade(double grade);
string LetterGrade(double grade)
{
    if (grade >= 97) {
        return "A+";
    } else if (grade <= 96.9 && grade >= 93) {
        return "A";
    } else if (grade <= 92.9 && grade >= 90){
        return "A-";
    } else if (grade <= 89.9 && grade >= 87) {
        return "B+";
    } else if (grade <= 86.9 && grade >= 83) {
        return "B";
    } else if (grade <= 82.9 && grade >= 80) {
        return "B-";
    } else if (grade <= 79.9 && grade >= 76) {
        return "C+";
    } else if (grade <= 75.9 && grade >= 65) {
        return "C";
    } else {
        return "F";
    }
}

void Sort(double&a,double&b,double&c);
void Sort(double&a,double&b,double&c)
{
    if (a <= b) {
    }
}

int QuadraticSolutions(double a,double b,double c);
int QuadraticSolutions(double a,double b,double c)
{
    double d = sqrt((b*b)-(4*a*c));
    
    if (d > 0) {
        return (2);
    } else if (d = 0) {
        return (1);
    } else {
        return (0);
    }
}

string DayOfTheWeek(int x);
string DayOfTheWeek(int x)
{
    if ((x = 1)) {
        return "Sunday\n";
    } else if ((x = 2)) {
        return "Monday\n";
    } else if ((x = 3)) {
        return "Tuesday\n";
    } else if ((x = 4)) {
        return "Wednesday\n";
    } else if ((x = 5)) {
        return "Thursday\n";
    } else if ((x = 6)) {
        return "Friday\n";
    } else if ((x = 7)) {
        return "Saturday\n";
    } else {
        return "";
    }
}

double TemperatureConverter(double Temp, char From, char To);
double TemperatureConverter(double Temp, char From, char To)
{
    if (((From = 'F') || (From = 'f')) && ((To = 'C') || (To = 'c')))
    {
        return ((Temp - 32) * (5/9));
    } else if (((From = 'F') || (From = 'f')) && ((To = 'K') || (To = 'k')))
    {
        return ((Temp - 32) * (5/9) + 273.15);
    } else {
        return Temp;
    }

    if (((From = 'C') || (From = 'c')) && ((To = 'F') || (To = 'f')))
    {
        return (Temp * (9/5) + 32);
    } else if (((From = 'C') || (From = 'c')) && ((To = 'K') || (To = 'k')))
    {
        return (Temp + 273.15);
    } else {
        return Temp;
    }

    if (((From = 'K') || (From = 'k')) && ((To = 'F') || (To = 'f')))
    {
        return ((Temp - 273.15) * (9/5) + 32);
    } else if (((From = 'K') || (From = 'k')) && ((To = 'C') ||  (To = 'c')))
    {
        return (Temp - 273.15);
    } else {
        return Temp;
    }
}

/*int Median(int a,int b,int c,int d,int e);
int Median(int a,int b,int c,int d,int e)
{
  

}*/

string DateFormat(int mn,int dy,int yr);
string DateFormat(int mn,int dy,int yr)
{
    string month = to_string(mn);
    string date = to_string(dy);
    string year = to_string(yr);

    if (mn < 13 && dy < 32 && yr < 10000) {
        return (month + " " + date + "," + year + "\n");
    } else {
        return " \n";
    }
}

int Odds(int n);
int Odds(int n)
{
    double x = (n + 1) / 2;
    int sequence = x * x;
    
    if (n % 2 == 1) {
        return sequence;
    }
}

int main()
{
    cout <<boolalpha;
    cout <<"ASSIGNMENT 3\n";

    cout << AbsoluteValue(-5) <<"\n";

    int x = 51;
    int y = 40;
    cout <<x <<" " <<y <<"\n";
    SwapIfGreater(x,y);
    cout <<x <<" " <<y <<"\n";

    cout << Maximum(10,19,16) <<"\n";

    cout << EvenOdd(100);

    cout << ToUpperCase('m') <<"\n";

    int z = 9;
    cout << z <<"\n";
    Change(z);
    cout << z <<"\n";

    cout << RightAngleQuadrilateral(8.5, 11) <<"\n";

    cout << Distance(-9.0,4.4) <<"\n";

    cout << MultipleOf(-6,3) <<"\n";
    
    float pi = 3.14;
    float e = 2.71;
    bool test = pi < e;
    cout << BoolToString(test);

    cout << ColorCode(12);

    cout << LetterGrade(93) <<"\n";

    //Sort()

    cout << QuadraticSolutions(1, 4, -5) <<"\n";

    cout << DayOfTheWeek(5);

    cout << TemperatureConverter(100,'c','f') <<"\n";
    
    //cout << Median(12,18,1,70,23) <<"\n";

    cout << DateFormat(12, 19, 1999);

    cout << Odds(7) << "\n";

    return 0; 

}