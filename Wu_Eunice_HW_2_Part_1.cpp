// Eunice Wu
// October 6, 2024
// HW 2 Pt 1

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    // Ask and stores user inserted date to later determine what season
    double m;
    double d;

    cout << "What date is it (month day)? ";
    cin >> m >> d;

    // If and else statements that narrows down the season based on inputed date
    if ( m == 12 && d >= 22 || m == 1 || m == 2 || m == 3 && d <=20) // will print winter if it is jan, feb, dec & over the 22nd, or march & before 20th
    cout << "It is winter!";
    else  if ( m == 3 && d >= 21 || m == 4 || m == 5 || m == 6 && d <=20) // same type of process as before but different numbers
    cout << "It is spring!";
    else if ( m == 6 && d >= 21 || m == 7 || m == 8 || m == 9 && d <=22) 
    cout << "It is summer!";
    else 
    cout << "It is fall!";

    return 0;
}
/*
What date is it (month day)? 3 30
It is spring!
What date is it (month day)? 12 22
It is winter!
What date is it (month day)? 6 20
It is spring!
What date is it (month day)? 9 23
It is fall!
What date is it (month day)? 9 22
It is summer!
*/