// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: 4
// Date ✅: 10/19/25
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 4
// Participation ✅: 81%
// Challenge ✅: 70%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

string phrase1 = "";
string phrase2 = "";

cout << "Welcome to the Phrases Program. Ready....Go!" << endl << endl;

cout << "Enter phrase one: ";
getline(cin, phrase1);
cout << "You entered: " << phrase1 << endl;

cout << "Enter phrase two: ";
getline(cin, phrase2);
cout << "You entered: " << phrase2 << endl << endl;

if (phrase1 == phrase2) {
    cout << "Both phrases match." << endl;
}
else if (phrase2.find(phrase1) != string::npos) {
    cout << phrase1 << " is found in " << phrase2 << endl;
    phrase2 = phrase2.substr(phrase2.find(phrase1));
    cout << phrase2 << endl;
}
else if (phrase1.find(phrase2) != string::npos) {
    cout << phrase2 << " is found in " << phrase1 << endl;
    phrase1 = phrase1.substr(phrase1.find(phrase2));
    cout << phrase1 << endl;
    }
else {
    cout << "No match." << endl;
}

cout << endl << "Thank you for using the Phrases program!" << endl;

return 0;
}


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/