#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;

    if (mark >= 80)
    {
        cout << "Your grade is A+" << endl;
    }
    else if (mark >= 70)
    {
        cout << "Your grade is A" << endl;
    }
    else if (mark >= 60)
    {
        cout << "Your grade is A-" << endl;
    }
    else if (mark >= 50)
    {
        cout << "Your grade is B" << endl;
    }
    else if (mark >= 40)
    {
        cout << "Your grade is C" << endl;
    }
    else if (mark >= 33)
    {
        cout << "Your grade is D" << endl;
    }
    else
    {
        cout << "Your grade is F" << endl;
    }

    return 0;
}