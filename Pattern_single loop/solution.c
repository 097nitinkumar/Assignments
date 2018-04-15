// C++ program to print a pattern using single
// loop and continue statement
//from geeks for geeks
//https://www.geeksforgeeks.org/print-pattern-using-one-loop-continue-statement/
#include<bits/stdc++.h>
using namespace std;
 
// printPattern function to print pattern
void printPattern(int n)
{
    // Variable initialization
    int line_no = 1; // Line count
 
    // Loop to print desired pattern
    int curr_star = 0;
    for (int line_no = 1; line_no <= n; )
    {
        // If current star count is less than
        // current line number
        if (curr_star < line_no)
        {
           cout << "* ";
           curr_star++;
           continue;
        }
 
        // Else time to print a new line
        if (curr_star == line_no)
        {
           cout << "\n";
           line_no++;
           curr_star = 0;
        }
    }
}
 
// Driver code
int main()
{
    printPattern(7);
    return 0;
}
