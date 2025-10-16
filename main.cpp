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

cout << endl << "Thank you for using the Phrases Program!" << endl;

return 0;
}


// ------------- DESIGN -------------
/* 
Program Name: The Phrases Program

Program Description:

Design:
A. INPUT
string phrase1 = "";
string phrase2 = "";

B. OUTPUT
string phrase 1
string phrase 2
substr

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS

MESSAGE "Welcome to the Phrases Program. Ready....Go!"

PROMPT "Enter phrase one: "
INPUT phrase1
LABEL "You entered: "
OUTPUT phrase1

PROMPT "Enter phrase two: "
INPUT phrase2
LABEL "You entered: "
OUTPUT phrase2



SAMPLE RUNS

Welcome to the Phrases and Subphrases program!

Enter Phrase 1: truck
You entered: truck
Enter Phrase 2: firetruck is here
You entered: firetruck is here

truck is found in firetruck is here
truck is here

Thank you for using my program!
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: the green grass grows
You entered: the green grass grows
Enter Phrase 2: green grass
You entered: green grass

green grass is found in the green grass grows
green grass grows

Thank you for using my program!
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: He was between a rock and a hard place
You entered: He was between a rock and a hard place
Enter Phrase 2: rock
You entered: rock

rock is found in He was between a rock and a hard place
rock and a hard place

Thank you for using my program!

*/