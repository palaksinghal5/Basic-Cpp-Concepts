#include <iostream>
#include <string>

using namespace std;

int main(){
    
//String assignment

string a = "Hello";
cout << a << endl;


//Concatenation of Strings

string b = "Palak";
cout << a+" "+b << endl;
string c = a+b;
cout << c <<  endl;


//String Append

string d = b.append(a);
cout << d << endl;


//Adding Numbers and Strings

string num1 = "10";
string num2 = "20";

string sum = num1+num2;
cout << sum << endl;


//String Length

cout << a.length() << endl;
cout << a.size() << endl;


//Access Strings

cout << a[0] << endl;
a[0] = 'J';
cout << a << endl;


//User Input Strings

//**cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word**//

string name;
cin >> name;
cout << name << endl;

//use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second//

string fullname;
getline (cin, fullname);
cout << fullname << endl;


//Omitting Namespace(don't have to use namespace if using std::)

std::string v = "P";
std::cout << v << endl;

return 0;
}
