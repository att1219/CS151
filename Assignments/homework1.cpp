#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    int age;
    int feetOfHeight;
    int inchesOfHeight;
    int weight;
    
    
    cout << "Enter your first name";
    cin >> firstName;

    cout << "Enter your last name";
    cin >> lastName;

    cout << "Enter your age";
    cin >> age;
    
    cout << "Enter your height (in feet and inches)";
    cin >> feetOfHeight >> inchesOfHeight; 
    
    cout << "Enter your weight (in pounds)";
    cin >> weight;
    
    int upperBirthYear = 2019 - age;
    int lowerBirthYear = upperBirthYear - 1;
    int heightInInches = feetOfHeight * 12 + inchesOfHeight;
    
    cout << fixed <<setprecision(2) <<"\n";

    double heightInCm = 2.54 * heightInInches;
    
    double weightInN = 4.45 * weight;
    
    double bmi = weight * 703.0 / (heightInInches * heightInInches);
    
    double ratio = (heightInInches * heightInInches) / 703.0;

    double lowerNormal = 18.5 * ratio;
    double upperNormal = 24.9 * ratio;
    double lowerOverweight = 25 * ratio;
    double upperOverweight = 29.9 * ratio;
    double lowerObese = 30 * ratio; 
    double upperObese = 39.9 * ratio;

    cout << "Candidate: " <<lastName <<"," <<firstName <<"\n";
    cout << "Birth Year Range: " <<lowerBirthYear <<"-" <<upperBirthYear <<"\n";
    cout << "Height: " <<heightInInches <<"in " <<"(" <<heightInCm <<"cm)" <<"\n";
    cout << "Weight: " <<weight <<"lb " <<"(" <<weightInN <<" N)" <<"\n";
    cout << "BMI: " <<bmi <<"\n";
    cout << "For height " <<heightInInches <<"in, the weight ranges are" <<"\n";
    cout << "Normal Weight Range: " <<lowerNormal <<"lb" <<" - " <<upperNormal <<"lb" <<"\n";
    cout << "OverWeight Range: " <<lowerOverweight <<"lb" <<" - " <<upperOverweight <<"lb" <<"\n";
    cout << "Obese Weight Range: " <<lowerObese <<"lb" <<" - " <<upperObese <<"lb" <<"\n";
    cout << "Extreme Weight Range: less than " <<lowerNormal <<"lb or greater than " <<upperObese <<"lb" <<"\n";

    return 0;
}