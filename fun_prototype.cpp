// Declaring function and nesting function
#include <iostream>
#include <iomanip>
using namespace std;
void area_circle();     // function prototypes
void volume_cylinder(); // function prototypes
double calc_area_circle(double radii);
double calc_volume_cylinder(double, double); // argument names are optional,type is mandatory.
const double pi = 3.145;
double calc_area_circle(double radii)
{
    cout << fixed << setprecision(3);
    return pi * (radii * radii);
}
double calc_volume_cylinder(double radii, double height)
{
    // return pi * radii * radii * height;
    // We know the DRY method so to refactor(repeat statment adjustment)
    // pi*radius*radius is calculated in circle function and we can use this to refactor code
    return calc_area_circle(radii) * height;
}
int main()
{
    area_circle();
    volume_cylinder();
}
void area_circle()
{
    double radius{};
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "\nArea of circle is: " << calc_area_circle(radius);
}
void volume_cylinder()
{
    double radius{}, height{};
    cout << "\nEnter radius of cylinder: ";
    cin >> radius;
    cout << "Enter height of cylinder: ";
    cin >> height;
    cout << "\nArea of cylinder is: " << calc_volume_cylinder(radius, height);
}