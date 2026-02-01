#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sales = 0.0;
    double rate = 0.0;
    char code = ' ';

    cout << "Sales: ";
    cin >> sales;
    cout << "Code (1, 2, 3, or 4): ";
    cin >> code;

    // Modified selection structure
    if ((code == '1' || code == '3') && sales >= 20000)
        rate = 0.2;
    else
        rate = 0.15;
    //end if

    //calculate and display the projected sales amount
    sales = sales + sales * rate;
    cout << fixed << setprecision(2);
    cout << "Projected sales: " << sales << endl;

    return 0;
}
