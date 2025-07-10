#include <iostream>
#include <iomanip> //needed for setprecision

using namespace std;

int main() {
    //declare variables
    string playerName;
    double playerScore;
    int hoursPlayed;
    
    //outputs and inputs to user
    cout << "Player's Name: ";
    cin >> playerName;

    cout << "Score: ";
    cin >> playerScore;

    cout << "Hours Played: ";
    cin >> hoursPlayed;
    
    //calculating and displaying the score per hour
    int scorePerHour = playerScore / hoursPlayed;
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "Score Per Hour: " << scorePerHour << endl;
}