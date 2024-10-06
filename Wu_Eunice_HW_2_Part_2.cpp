// Eunice Wu
// October 6, 2024
// HW 2 Pt 1

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{

double j1, j2, j3, j4, j5, j6;

cout << "Insert the 6 judges scores in order (0-10): ";
cin >> j1 >> j2 >> j3 >> j4 >> j5 >> j6;
cout << "Final score: " << (j2 + j3 + j4 + j5)/4 ;

return 0;
}