// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: Nathaniel Paulik

#include <iostream>
using namespace std;

/****************************************************************
 *  Function Name: getScore
 *  Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0�100)
 ****************************************************************/

// [TO DO: ADD getScore function HERE]
    // Ask the user for a score and validate input.
    // Keep asking until the score is between 0 and 100.
    // Return the valid score.
double getScore() {
//Initialzing a temp variable for score
    int score;

//User prompt for inputting score
    cout << endl << "Score: ";
    cin >> score;

//Creating while loop for score input validation
    while((score < 0) || (score > 100)) {
        cout << endl << "Error! Invalid score input. Please enter a number between 0 - 100!";
        cout << endl << endl << "Score: ";

        cin >> score;
    }

//Returning value of score to main program
    return score;
}




/****************************************************************
 * Function Name: displayLetterGrade
 * Purpose: Determine and display the letter grade 
 *          corresponding to the numeric score.
 * Parameters: score (double) � the numeric test score
 * Return Value: None (displays the letter grade to the screen)
 ****************************************************************/

// [TO DO : ADD *displayLetterGrade* function HERE]
    // Determine the letter grade and display it.
    // Example grading scale:
    // 90�100: A
    // 80�89:  B
    // 70�79:  C
    // 60�69:  D
    // Below 60: F
void displayLetterGrade(int score) {
//Creating if else categorization menu for grading scale 
    if(score >= 90) {
        cout << "A";
    } else if ((score <= 89) && (score >= 80)) {
        cout << "B";
    } else if ((score <= 79) && (score >= 70)) {
        cout << "C";
    } else if ((score <= 69) && (score >= 60)) {
        cout << "D";
    } else if (score < 60) {
        cout << "F";
    }
}


// You should not need to edit main for your program to run 
// correctly. Only edit it to add cout statements or comment
// out code to test your functions.
int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three times to get and validate each test score
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

    cout << endl << "Exam 2: ";     //Added endl for new lines between test scores for cleaner output
    displayLetterGrade(score2);

    cout << endl << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}


