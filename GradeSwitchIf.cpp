/*
P4rasail, 2/15/25
Case If For Grades
*/


#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;



//Initializer
map<string , string>grades = {
     {"A+", "Amazing Job!"} ,
     {"A", "Great Job!"} ,
     {"B", "Good Job!"} ,
     {"C", "Okay Job"} ,
     {"D", "Could be better"} ,
     {"F", "Not good enough."}
    };



pair<string , string> getGrade( int score )
    {
    int truncatedScore = score / 10;
    if (truncatedScore >= 10) {
        truncatedScore = 10;
        }
    //Switching truncated statement using teacher's switch example in class but my own twist
    switch ( truncatedScore )
        {
        case 10:
            return { "A+", grades [ "A+" ] };
        case 9:
            return { "A", grades [ "A" ] };
        case 8:
            return { "B", grades [ "B" ] };

        case 7:
            return { "C", grades [ "C" ] };
        case 6:
            return { "D", grades [ "D" ] };
        default:
            return { "F", grades [ "F" ] };
        }

    }
    //Initializer
int main( )
    {
    SetConsoleTitleA( "Grades By Paras" );
    cout << "P4rasail, 2/15/25 \nCase If For Grades\n";


    vector<int> scores;
    for ( int i = 1; i <= 3; i++ )
        {
//Get score
        int score;
        cout << "Enter your score to be converted to a grade: \n";
        cin >> score;
        //Get grade and output grade info
        pair<string , string> grade = getGrade( score );
        scores.push_back( score );

        cout << "Your grade is " << grade.first << "\n" << grade.second << "\n";
        cout << "\n";
        }
   // SetConsoleTextAttribute( hConsole , 31 );
    int avgScore = 0;
    int amount = 0;

    //loops through scores, gets the avg, and outputs the avg grade
    for ( int score : scores )
        {
        avgScore += score;
        amount++;
        }
    avgScore /= amount;
    pair<string , string> avgGrade = getGrade( avgScore );
    cout << "Your total grade is " << avgGrade.first << "\n" << avgGrade.second << "\n";

    return 0;
    }

