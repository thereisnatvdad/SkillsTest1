#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    double a, b, c, d, e;
	double f, g, h;
    const double TaxRate = 0.14;
    const double ClothesPercentageofIncome = 0.10;
    const double SchoolPercentageofIncome = 0.01;
    const double SavingsBondsPercentageofIncome = 0.25;
    const double ParentsCoContributionAmount = 0.50;

    cout << "How many hours did you work: ";
    cin >> h;
    cout << "What was the hourly rate: $";
    cin >> a;

    b = h * a;
    d = b *= TaxRate;
    f = c * ClothesPercentageofIncome;
    d = c * SchoolPercentageofIncome;
    c -= (f + d); 
    e = c * SavingsBondsPercentageofIncome;
    g = e * ParentsCoContributionAmount;

    cout << fixed << showpoint << setprecision(2);

    cout << "Gross Income: $" << b << endl;
    cout << "Net Income: $" << c << endl;
    cout << "Clothes & Accessories: $" << f << endl;
    cout << "School Supplies: $" << d << endl;
    cout << "Savings Bonds: $" << e << endl;
    cout << "Parents Bonds Co-Contribution: $" << g << endl;

	_getch()
    return 0;

}