#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string playerName;
    double playerScore;
    int hoursPlayed;
    

    cout << "Player's Name: ";
    cin >> playerName;

    cout << "Score: ";
    cin >> playerScore;

    cout << "Hours Played: ";
    cin >> hoursPlayed;
    
    int scorePerHour = playerScore / hoursPlayed;
    cout << fixed << setprecision(2);
    cout << "Score Per Hour: " << scorePerHour << endl;
}