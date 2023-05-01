#include <iostream>
using namespace std;

unsigned long long int recusiveFibonacci(unsigned long long int n)
{
    if (n <= 1)
        return n;

    return recusiveFibonacci(n - 1) + recusiveFibonacci(n - 2);
}
int main()
{
    int num;
    cout << "Enter number to get fibonacci number: ";
    cin >> num;
    cout << recusiveFibonacci(num);
}