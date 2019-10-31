#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Echo(string msg);
void Echo(string msg)
{
    cout << msg <<"\n";
    cout << msg <<"\n";
}

int SumOfThree(int n);
int SumOfThree(int n)
{
    return n + (n+1) +(n+2);
}

void SquarePerimeter(double side);
void SquarePerimeter(double side)
{
    cout << side * 4 << "\n";
}

void CapitalI();
void CapitalI()
{
    string Long = "********";
    string Short ="****";
    cout << Long <<"\n";
    cout << Long <<"\n";
    cout << "  " << Short <<"  " <<"\n";
    cout << "  " << Short <<"  " <<"\n";
    cout << "  " << Short <<"  " <<"\n";
    cout << "  " << Short <<"  " <<"\n";
    cout << Long <<"\n";
    cout << Long <<"\n";
}

void NextNextCharacter(char&ch);
void NextNextCharacter(char&ch)
{
    int value = ch;
    value = (value + 2) % 256;
    ch = value;
}

bool OddMult3(int value); 
bool OddMult3(int value)
{
    bool result = value % 2 == 1 && value % 3 == 0;
    return result;
}

void PerfectSquare();
void PerfectSquare()
{
    string nine = "*********";
    cout <<nine <<"\n"; 
    cout <<nine <<"\n";
    cout <<nine <<"\n"; 
    cout <<nine <<"\n"; 
    cout <<nine <<"\n"; 
    cout <<nine <<"\n";
    cout <<nine <<"\n";
    cout <<nine <<"\n"; 
    cout <<nine <<"\n"; 
}


double RectangleArea(double width,double length);
double RectangleArea(double width,double length)
{
    return length * width;
}


void Swap(double&x,double&y);
void Swap(double&x,double&y)
{
    double z = x;
    x = y;
    y = z;
}

double Quadratic(double a,double b,double c,double x);
double Quadratic(double a,double b,double c,double x)
{
    return (a * pow(x,2)) + (b * (x)) + c;
    
}

string Name();
string Name()
{
    string First;
    string Last;

    cout <<"Enter Your First Name";
    cin >> First;
    cout << "Enter Your Last Name";
    cin >> Last;

    string nameTag = Last + "," + First;
    return nameTag;
}

bool LesserAbsolute(int m,int n);
bool LesserAbsolute(int m,int n)
{

    bool result = (m*m) < (n*n);
    return result;
}

void SwapFour(char&r,char&s,char&t,char&u);
void SwapFour(char&r,char&s,char&t,char&u)
{
    int one = r;
    int two = s;
    int three = t;
    int four = u;

    int five = four;
    four = three;
    three = two; 
    two = one;
    one = five; 
}

bool LeapYear(int year);
bool LeapYear(int year)
{
    bool criteria = (year >= 0) && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}


double Distance2D(double x1,double y1,double x2,double y2);
double Distance2D(double x1,double y1,double x2,double y2)
{
    int rise = x2 - x1;
    int run = y2 - y1;
    return sqrt((rise * rise) - (run * run));
}

void Invite(string name1,string theme,string name2,string place,string weekday,string Time,string email);
void Invite(string name1,string theme,string name2,string place,string weekday,string Time,string email)
{
    cout <<"Dear " << name1 <<"," <<"\n";
    cout <<"You are going to be invited to a " << theme <<" party hosted by " << name2 <<"\n";
    cout <<"It is going to be at " << place <<" on " << weekday <<"\n";
    cout <<"Please make sure to show up at " << Time <<"\n";
    cout <<"RSVP at " << email <<"\n";
}

void NumberSwap(double&x,double&y);
void NumberSwap(double&x,double&y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}

void Permutation(int a,int b,int c,int d);
void Permutation(int a,int b,int c,int d)
{
    cout <<"("<<a<<","<<b<<","<<c<<","<<d<<")" <<" " <<"("<<a<<","<<b<<","<<d<<","<<c<<")" <<" " <<"("<<a<<","<<c<<","<<b<<","<<d<<")" <<" " <<"("<<a<<","<<c<<","<<d<<","<<b<<")" <<"\n"
    <<"("<<a<<","<<d<<","<<c<<","<<b<<")" <<" " <<"("<<a<<","<<d<<","<<b<<","<<c<<")" <<" " <<"("<<b<<","<<a<<","<<c<<","<<d<<")" <<" " <<"("<<b<<","<<a<<","<<d<<","<<c<<")" <<"\n"
    <<"("<<b<<","<<d<<","<<c<<","<<a<<")" <<" " <<"("<<b<<","<<d<<","<<a<<","<<c<<")" <<" " <<"("<<b<<","<<c<<","<<a<<","<<d<<")" <<" " <<"("<<b<<","<<c<<","<<d<<","<<a<<")" <<"\n"
    <<"("<<c<<","<<b<<","<<a<<","<<d<<")" <<" " <<"("<<c<<","<<b<<","<<d<<","<<a<<")" <<" " <<"("<<c<<","<<a<<","<<d<<","<<b<<")" <<" " <<"("<<c<<","<<a<<","<<b<<","<<d<<")" <<"\n"
    <<"("<<c<<","<<d<<","<<b<<","<<a<<")" <<" " <<"("<<c<<","<<d<<","<<a<<","<<b<<")" <<" " <<"("<<d<<","<<b<<","<<c<<","<<a<<")" <<" " <<"("<<d<<","<<b<<","<<a<<","<<c<<")" <<"\n"
    <<"("<<d<<","<<a<<","<<b<<","<<c<<")" <<" " <<"("<<d<<","<<c<<","<<b<<","<<a<<")" <<" " <<"("<<d<<","<<a<<","<<b<<","<<c<<")" <<" " <<"("<<d<<","<<c<<","<<a<<","<<b<<")" <<"\n";
}

void Image();
void Image()
{
    string LongRowOfO = "********    ********    ********    ********    ********";
    string ShortRowOfO = "**    **    **    **    **    **    **    **    **    **";

    cout << LongRowOfO <<"\n";
    cout << LongRowOfO <<"\n";
    cout << ShortRowOfO <<"\n";
    cout << ShortRowOfO <<"\n";  
    cout << ShortRowOfO <<"\n";  
    cout << ShortRowOfO <<"\n";    
    cout << LongRowOfO <<"\n";
    cout << LongRowOfO <<"\n";
    cout <<"\n";
    cout << LongRowOfO <<"\n";
    cout << LongRowOfO <<"\n";
    cout << ShortRowOfO <<"\n";
    cout << ShortRowOfO <<"\n";  
    cout << ShortRowOfO <<"\n";  
    cout << ShortRowOfO <<"\n";    
    cout << LongRowOfO <<"\n";
    cout << LongRowOfO <<"\n";
    cout <<"\n";
    cout << LongRowOfO <<"\n";
    cout << LongRowOfO <<"\n";
    cout << ShortRowOfO <<"\n";
    cout << ShortRowOfO <<"\n";  
    cout << ShortRowOfO <<"\n";  
    cout << ShortRowOfO <<"\n";    
    cout << LongRowOfO <<"\n";
    cout << LongRowOfO <<"\n";
}


int main()
{
    cout <<boolalpha;
    cout <<"ASSIGNMENT 2\n";
    cout <<"\n";    
    
    cout << "This is the 1st function:\n";
    Echo("Hello");
    cout <<"\n";
    
    cout << "This is the 2nd function:\n";
    cout << SumOfThree(10) <<"\n";
    cout << "\n";

    
    cout << "This is the 3rd function:\n";
    SquarePerimeter(7);
    cout << "\n";
    
    cout << "This is the 4th function:\n";
    cout <<"\n";
    CapitalI();
    cout << "\n";

    cout << "This is the 5th function:\n";
    char lol = '5';
    NextNextCharacter(lol);
    cout <<"\n";

    cout << "This is the 6th function:\n";
    cout << OddMult3(9) <<"\n";
    cout <<"\n";
    
    cout << "This is the 7th function\n";
    cout <<"\n";
    PerfectSquare();
    cout <<"\n";
    
    cout << "This is the 8th function:\n";
    cout << RectangleArea(8.5,11) <<"\n";
    cout <<"\n";

    cout << "This is the 9th function\n";
    double x = 3.14;
    double y = 2.17;
    cout << x <<" "<< y <<"\n";
    Swap(x,y);
    cout << x <<" " << y <<"\n";
    cout <<"\n";

    cout << "This is the 10th function\n";
    cout << Quadratic(2, 5, -6, 1) <<"\n";
    cout <<"\n";

    cout << "This is the 11th function:\n";
    cout <<Name() <<"\n";
    cout <<"\n";

    cout << "This is the 12th function:\n";
    cout << LesserAbsolute(16,-25) <<"\n";
    cout <<"\n";
    
    cout << "This is the 13th function:\n";
    char a = '8';
    char b = 'A';
    char c = 'B';
    char d = 'G';
    cout << a << " " << b <<" " << c <<" " << d <<"\n";
    SwapFour(a,b,c,d);
    cout << a << " " << b <<" " << c <<" " << d <<"\n";
    cout <<"\n";

    cout << "This is the 14th function:\n";
    cout << LeapYear(2020) <<"\n";
    cout <<"\n";
    
    cout << "This is the 15th function:\n";
    cout << Distance2D(1, 5, 5, 2) <<" units" <<"\n";
    cout <<"\n";

    cout << "This is the 16th function:\n";
    Invite("Adam","costume","Thomas","Club ATT","Saturday","11:00 pm","adamthomas1219@gmail.com");
    cout <<"\n";

    cout << "This is the 17th function:\n";
    double e = 8;
    double f = 17;
    cout << e <<" " << f <<"\n";
    NumberSwap(e,f);
    cout << e <<" " << f <<"\n";
    cout <<"\n";

    cout << "This is the 18th function:\n";
    Permutation(1,2,3,4);
    cout <<"\n";

    cout << "This is the 19th function:\n";
    Image();
    cout <<"\n";

    return 0;
}

