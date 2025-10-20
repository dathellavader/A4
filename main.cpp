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
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count: 14


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
phrase1 + phrase2
DISPLAY result message
substring

C. CALCULATIONS
No numeric calculations needed. Only string operations:
phrase1 == phrase2
phrase1.find(phrase2) // see if phrase 2 is in phrase 1
phrase2.find(phrase1) // see if phrase 1 is in phrase 2
phrase2.substr(position) // substring from pos
phrase1.substr(position) // substring from pos

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

IF phrase1 == phrase2
    DISPLAY "Both phrases match."
ELSE IF phrase2.find(phrase1) != string::npos // phrase1 is in phrase2
    DISPLAY phrase1 " is found in " phrase2
    phrase2 = phrase2.substr(phrase2.find(phrase1))
    DISPLAY phrase2
ELSE IF phrase1.find(phrase2) != string::npos // phrase2 is in phrase1
    DISPLAY phrase2 " is found in " phrase1
    phrase1 = phrase1.substr(phrase1.find(phrase2));
    DISPLAY phrase1
ELSE
    DISPLAY "No match."

MESSAGE "Thank you for using the Phrases Program!"


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