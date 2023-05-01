#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref1(string &s);
void pass_by_ref1(vector<string> &vec);
void print_vector(const vector<string> &vec);

void pass_by_ref1(int &num)
{
    num = 1000;
}
void pass_by_ref2(string &s)
{
    s = "changed";
}
void pass_by_ref3(vector<string> &vec)
{
    vec.clear();
}
void print_vector(const vector<string> &vec)
{
    for (auto print : vec)
        cout << print;
}

int main()
{
    int num{10};
    int another_num{20};

    cout << "num before pass_by_ref1 " << num << endl;
    pass_by_ref1(num);
    cout << "num after pass_by_ref1 " << num << endl;
    cout << "\nanother_num before pass_by_ref1 " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after pass_by_ref1 " << another_num << endl;

    string name{"Sumit"};
    cout << "\nstring name before pass_by_ref2 " << name << endl;
    pass_by_ref2(name);
    cout << "string name after pass_by_ref2 " << name << endl;

    vector<string> friend_names{"Patya,anya,somya,shrikya,shreya"};
    cout << "\nVector friend_names before pass_by_ref3 ";
    print_vector(friend_names);
    cout << "\nVector friend_names after pass_by_ref3 ";
    pass_by_ref3(friend_names);
    print_vector(friend_names);
}
