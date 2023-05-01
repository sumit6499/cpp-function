#include <iostream>
using namespace std;

unsigned long long int recursiveFibonacci(unsigned long long int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * recursiveFibonacci(n - 1);
}
int main()
{
    unsigned num{};
    cout << "Enter number to which you want factorial: " << endl;
    cin >> num;
    cout << recursiveFibonacci(num) << endl;
}