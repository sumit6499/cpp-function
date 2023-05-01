#include <iostream>
using namespace std;

void set_array(int arr[], size_t size, int value)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}
void print_array(int arr[], size_t size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int my_scores[]{100, 98, 90, 86, 84};
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
}