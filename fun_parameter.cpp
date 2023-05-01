#include <iostream>
#include <vector>
#include <string>
using namespace std;

void pass_by_value(int num);
void pass_by_value1(string);
void pass_by_value2(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value(int num)
{
    num = 1000;
}
void pass_by_value1(string s)
{
    s = "CHANGED";
}
void pass_by_value2(vector<string> vec)
{
    vec.clear(); // delete all vector element
}
void print_vector(vector<string> v)
{
    for (auto list : v)
        cout << list << " ";
    cout << endl;
}
int main()
{
    int num{10};

    cout << "Num Before calling pass_by_value " << num << endl;
    pass_by_value(num);
    cout << "Num after calling pass_by_value: " << num << endl;

    string name{"Frank"};
    cout << "\nName before calling pass_by_value1: " << name << endl;
    pass_by_value1(name);
    cout << "Name after calling pass_by_value1: " << name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "Stooges before caling pass_by_value2: ";
    print_vector(stooges);
    pass_by_value2(stooges);
    cout << "Stooges after caling pass_by_value2: ";
    print_vector(stooges);

    return 0;
}