// section 11
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double calc_cost(double base_cost, float tax_rate = 0.06, double shipping_cost = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");
double calc_cost(double base_cost, float tax_rate, double shipping_cost)
{
    return base_cost += (base_cost * tax_rate) + shipping_cost;
}
void greeting(string name, string prefix, string suffix)
{
    cout << "\nThank you for coming " << prefix + " " + name + " " + suffix;
}
int main()
{
    double cost{};

    cost = calc_cost(100.0, 0.08, 4.25); // uses tax rate 0.08 and shipping 4.25
    cout << fixed << setprecision(3);
    cout << "Cost for 1st store: " << cost << endl;

    cost = calc_cost(100.0, 0.08); // uses tax rate 0.08 and shipping cost default 3.50
    cout << "Cost for 2nd store: " << cost << endl;

    cost = calc_cost(100.0); // uses tax rate and shipping default
    cout << "Cost for 3rd store: " << cost << endl;

    greeting("Sumit Padalkar", "Mr.", "Future Engineer");
    greeting("Shreyas Padalkar");
}