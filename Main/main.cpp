/*******************************************
 * This is a variables classwork test code.
 * In this file you will do various things
 * with variables.
 ******************************************/
#include <iostream>
#include <string> //string object (type of variable)
using namespace std;

int main()
{
	/*This is a declaration of an int variable.
	 * A declaration creates a variable without
	 * assigning it content. A variable that has
	 * only been declared cannot be used as an
	 * argument; you will typically receive an 
	 * error. However, depending on the version
	 * of the c++ compiler you are using, 
	 * variables may be initialized to default
	 * values when declared. 
	 *********************************************/
	int value;

	/*This is an assignment to a variable. A 
	 * variable assignment provides content to
	 * a variable. The variable must be at least
	 * declared before you can assign content 
	 * to it. If the variable already has content
	 * assigned to it, the old content is 
	 * overwritten by the new content; you cannot
	 * retrieve old content of a variable. 
	 * Furthermore, the variable can be used as 
	 * an argument after it is assigned content. 
	 * Whenever a variable is used as an argument, 
	 * you are accessing its content,not its address.
	 * Last, you assign content to a variable by 
	 * using the assignment operator (=). 
	 * ***********************************************/

	value = 24;

	/*A variable used as an argument. What will be
	 * displayed is the content of the variable.
	 * If you wish to is the address of a variable,
	 * you can use the address-of operator (&). 
	 * The address will be represented as a 
	 * hexidecimal number. The address of the 
	 * variable will also be different each time
	 * you run your program because it is 
	 * randomly assigned to the variable.
	 * ********************************************/
	cout << value << "\n";

	//Displaying the address of the variable
	cout << &value << "\n";

	/*This is a variable initialization. A 
	 * initialization of a variable is 
	 * creating a variable with content. It 
	 * is basically doing both a variable 
	 * declaration and assignment in a single
	 * step. A variable that has been initialized
	 * can be immediately used as an argument.
	 * ******************************************/

	double phi = 89.232;

	//Displaying the variable
	cout << phi << "\n";

	/*Multiple variables of the same data type can 
	 * be declared and initialized on the same line
	 * by using the comma operator. It is it 
	 * equivalent to declaring and initializing them
	 * in the same order
	 * *********************************************/

	char a = 'H', b = 'i', c = '\0', d;

	/*The equivalent is:
	 * char a = 'H';
	 * char b = 'i';
     * char c = '\0';
     * char d;
     *******************/ 	
     int t = 12, s = t + 2;

     char e;
     cout << "Enter a character";
     cin >> e;

     cout << "You entered" << a << "\n";
	
    return 0;
}