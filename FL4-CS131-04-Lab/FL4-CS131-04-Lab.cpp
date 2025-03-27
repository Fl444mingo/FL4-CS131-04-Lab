#include <iostream>
using namespace std;
// Declare function
char gradeCheck(int num);
int main() {
    // Input declared
    int num;
    // User input prompt
    cout << "The Grade Checker\n\nInput your grade percentage: ";
    cin >> num;
    // Function call to process user data and output result
    cout << "Your letter grade is " << gradeCheck(num) << "\n\n";
    system("pause");
    return 0;
}
// Define function; checks grade ranges and returns corresponding values
char gradeCheck(int num) {
    if (num >= 90)
        return 'A';
    else if (num >= 80)
        return 'B';
    else if (num >= 70)
        return 'C';
    else if (num >= 60)
        return 'D';
    else if (num >= 0)
        return 'F';
    else
        return 'Z';
}