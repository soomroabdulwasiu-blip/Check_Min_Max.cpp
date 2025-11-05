#include <iostream>
using namespace std;
int main()
{
    int min, max, num;
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Please enter a positive integer for the number of elements." << endl;
        return 1;
    }
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (i == 0)
        {
            min = max = num;
        }
        else
        {
            if (num < min)
            {
                min = num;
            }
            if (num > max)
            {
                max = num;
            }
        }
    }
    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;

    return 0;
}