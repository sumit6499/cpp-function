// section 11
// Overloading function
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
    cout << "Printing Int: " << num << endl;
}
void print(double num)
{
    cout << "Printing Double: " << num << endl;
}
void print(string s)
{
    cout << "Printing string s: " << s << endl;
}
void print(string s, string v)
{
    cout << "Printing string " << s << " and " << v << endl;
}
void print(vector<string> s)
{
    for (auto c : s)
    {
        cout << c + " ";
        cout << endl;
    }
}
int main()
{
    print(100); // calls int version of print fun
    print('A'); // char always promoted to int when passed to int and prints ASCII num of A

    print(123.5);  // calls double version of print fun
    print(123.3F); // float is promoted to double

    print("C-style string"); // c-style string is converted to array of char

    string s{"c++ string"}; // c++ string is passed
    print(s);               // prints c++ style string

    // printing of c-style string and c++ style string
    print("c-style string", s);

    vector<string> three_stooges{"Harry", "Mary", "Lary"};
    print(three_stooges);
}