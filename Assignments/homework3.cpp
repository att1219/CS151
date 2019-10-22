#include <iostream>
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
    if (b < c < a || c < b < a) {
        return a;
    } else if (a < c < b || c < a < b) {
        return b;
    } else {
        return c;
    }
}

string EvenOdd(int x);
string EvenOdd(int x)
{
    string e = "Even\n";
    string o = "Odd\n";
    
    if (x % 2 == 0) {
        return e;
    } else {
        return o;
    }
}

char ToUpperCase(char ch);
char ToUpperCase(char ch)
{
    if (ch )
    {

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
    string s = "Square";
    string r = "Rectangle";
    
    if (length == width) {
        return s;
    } else {
        return r; 
    }
}

double Distance(double e,double f);
double Distance(double e,double f)
{
    return 0;
}

bool MultipleOf(int c,int d);
bool MultipleOf(int c,int d)
{
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
        cout << "True";
    } else {
        cout << "False";
    }
}

string ColorCode(int A);
string ColorCode(int A)
{
    string r = "Red\n";
    string b = "Blue\n";
    string p = "Purple\n";
    string y = "Yellow\n";

    if ((A % 3 == 0) && (A % 4 == 0)) {
        return p;
    } else if (A % 4 == 0) {
        return b;
    } else if (A % 3 == 0) {
        return r;
    } else {
        return y;
    }
}

string LetterGrade(double grade);
string LetterGrade(double grade)
{
    string aplus = "A+";
    string a = "A";
    string aminus = "A-";
    string bplus = "B+";
    string b = "B";
    string bminus = "B-";
    string cplus = "C+";
    string c = "C";
    string f = "F";

    if (grade >= 97) {
        return aplus;
    } else if (grade <= 96.9 && grade >= 93) {
        return a;
    } else if (grade <= 92.9 && grade >= 90){
        return aminus;
    } else if (grade <= 89.9 && grade >= 87) {
        return bplus;
    } else if (grade <= 86.9 && grade >= 83) {
        return b;
    } else if (grade <= 82.9 && grade >= 80) {
        return bminus;
    } else if (grade <= 79.9 && grade >= 76) {
        return cplus;
    } else {
        return f;
    }
}

void Sort(double&a,double&b,double&c);
void Sort(double&a,double&b,double&c)
{

}

int QuadraticSolutions(double a,double b,double c);
int QuadraticSolutions(double a,double b,double c)
{
    double d = sqrt((b*b)-(4*a*c));
    
    if (d > 0) {
        return 2;
    } else if (d = 0) {
        return 1;
    } else {
        return 0;
    }
}

string DayOfTheWeek(int x);
string DayOfTheWeek(int x)
{
    string one = "Sunday\n";
    string two = "Monday\n";
    string three = "Tuesday\n";
    string four = "Wednesday\n";
    string five = "Thursday\n";
    string six = "Friday\n";
    string seven = "Saturday\n";
    string empty = "";

    if (x == 1) {
        return one;
    } else if (x == 2) {
        return two;
    } else if (x == 3) {
        return three;
    } else if (x == 4) {
        return four;
    } else if (x == 5) {
        return five;
    } else if (x == 6) {
        return six;
    } else if (x == 7) {
        return seven;
    } else {
        return empty;
    }
}

double TemperatureConverter(double Temp, char From, char To);
double TemperatureConverter(double Temp, char From, char To)
{

}

int Median(int a,int b,int c,int d,int e);
int Median(int a,int b,int c,int d,int e)
{
    if (a < b < c < d < e) {
        return c;
    } else if (a < c < b < d < e) {
        return e;
    } else if (a < b < d < c < e) {
        return d;
    } else if (b < c < a < d < e) {
        return a;
    } else {
        return e;
    }
}

string DateFormat(int mn,int dy,int yr);
string DateFormat(int mn,int dy,int yr)
{
    string month = to_string(mn);
    string date = to_string(dy);
    string year = to_string(yr);

    string day = month + " " + date + "," + year + "\n";
    string empty = " \n";
    
    if (mn < 13 && dy < 32 && yr < 10000) {
        return day;
    } else {
        return empty;
    }
}

int Odds(int n);
int Odds(int n)
{
    if (n % 2 == 0)
    {
        return n;
    } else {

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

    cout << Maximum(1.0,1.5,1.8) <<"\n";

    cout << EvenOdd(100);

    //Change();

    cout << RightAngleQuadrilateral(8.5, 8.5) <<"\n";

    cout << MultipleOf(6,3) <<"\n";
    
    /*bool lol = 10 > 9;
    BoolToString(lol);*/

    cout << ColorCode(12) <<"\n";

    cout << LetterGrade(23) <<"\n";

    //Sort()

    cout << QuadraticSolutions(2, 5, 8) <<"\n";

    cout << DayOfTheWeek(8) <<"\n";

    //TemperatureConverter();
    
    cout << Median(12,18,1,70,23) <<"\n";

    cout << DateFormat(12, 19, 1999);

    return 0; 

}