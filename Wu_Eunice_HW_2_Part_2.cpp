// Eunice Wu
// October 6, 2024
// HW 2 Pt 2

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{

double j1, j2, j3, j4, j5, j6; // stores user-inputted judges score and later uses some to calc and give back final score

cout << "Insert the 6 judges scores in order (0-10): "; 
cin >> j1 >> j2 >> j3 >> j4 >> j5 >> j6; // user can input 6 scores 

double sum = j1 + j2 + j3 + j4 + j5 + j6; // first calc sum of all 6, then will subtract the smallest and biggest below

if (j1 > j2 && j1 > j3 && j1 > j4 && j1 > j5 && j1 > j6 || j1 < j2 && j1 < j3 && j1 < j4 && j1 < j5 && j1 < j6 ) sum = sum - j1; // if and else that evaluates if each number is bigger/smaller than the rest
else sum = sum + 0;                                                                                                                         // if so it will subtract from sum, if not it will add 0 
if (j2 > j1 && j2 > j3 && j2 > j4 && j2 > j5 && j2 > j6 || j2 < j1 && j2 < j3 && j2 < j4 && j2 < j5 && j2 < j6 ) sum = sum - j2; 
else sum = sum + 0;
if (j3 > j2 && j3 > j1 && j3 > j4 && j3 > j5 && j3 > j6 || j3 < j2 && j3 < j1 && j3 < j4 && j3 < j5 && j3 < j6 ) sum = sum - j3; 
else sum = sum + 0;
if (j4 > j1 && j4 > j3 && j4 > j2 && j4 > j5 && j4 > j6 || j4 < j1 && j4 < j3 && j4 < j2 && j4 < j5 && j4 < j6 ) sum = sum - j4; 
else sum = sum + 0;
if (j5 > j2 && j5 > j3 && j5 > j4 && j5 > j1 && j5 > j6 || j5 < j2 && j5 < j3 && j5 < j4 && j5 < j1 && j5 < j6 ) sum = sum - j5; 
else sum = sum + 0;
if (j6 > j1 && j6 > j3 && j6 > j4 && j6 > j5 && j6 > j2 || j6 < j1 && j6 < j3 && j6 < j4 && j6 < j5 && j6 < j2 ) sum = sum - j6; 
else sum = sum + 0;

cout << "Your final score is: "<< sum/4 ; //gives user final score which is sum/4

return 0;
}
/*
Insert the 6 judges scores in order (0-10): 1 2 2 2 2100000 2
Your final score is: 2
*/