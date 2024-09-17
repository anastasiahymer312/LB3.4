#include <iostream>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // розгалуження в повній формі
    if (x >= 0 && y >= 0 && (x * x + y * y <= R * R))
        cout << "yes" << endl;

    else
        (x <= 0 && y <= 0 && y >= -x - R); 
        cout << "no" << endl;
    cin.get();
    return 0;
}
