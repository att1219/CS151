#include <clocale>
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

/*void NextNextCharacter(char&ch);
void NextNextCharacter(char&ch);
{

}*/

/*bool OddMult3(int value); 
bool OddMult3(int value)
{
    value / 2 = 1;
    value % 3 = 0;

}*/

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


/*void Swap(double&x,double&y);
void Swap(double&x,double&y)
{
    double z = x
    x = y
    y = z
} */

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

/* bool LesserAbsolute(int m,int n);
bool LesserAbsolute(int m,int n)
{
    AbsoluteM = abs(m);
    AbsoluteN = abs(n);
}

void SwapFour(char&r,char&s,char&t,char&u);
void SwapFour(char&r,char&s,char&t,char&u)
{

}

bool LeapYear(int year);
bool LeapYear(int year)
{
    TrueYear = abs(year);
    TrueYear % 4 = 0;
}*/

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
/*void NumberSwap(double&x,double&y);
void NumberSwap(double&x,double&y)
{

}*/

/*void Permutation(int a,int b,int c,int d);
{

}
*/
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
    Echo("Hello");
    
    cout << SumOfThree(10) <<"\n";
    
    SquarePerimeter(7);
    
    CapitalI();
    
    //NextNextCharacter();

    //OddMult3(6)//;
    
    PerfectSquare();
    
    cout << RectangleArea(8.5,11) <<"\n";
    
    //Swap(2.72,3.14);

    cout <<Quadratic(2, 5, -6, 1) <<"\n";
    
    cout <<Name() <<"\n";

    //LesserAbsolute(16,-25);

    //SwapFour();

    //LeapYear(2019);
    
    cout <<Distance2D(1, 5, 5, 2) <<" units" <<"\n";

    Invite("Adam","costume","Thomas","Club ATT","Saturday","11:00 pm","adamthomas1219@gmail.com");
    
    //NumberSwap(8,17);

    //Permutation(1,2,3,4);
    
    Image();

    return 0;
}

