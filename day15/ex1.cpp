#include <iostream>
#include <cinttypes>
using namespace std;

string get_team();


int main() {
    string first_team, team2 = "Army";
    first_team = get_team();
    cout << "Go " << first_team << "!  Beat " << team2 << endl;
    return 0;
}

string get_team() {
    string team1, team2;

    do {
        cout << "2 Teams: ";
        cin >> team1 >> team2;
    } while (team1 == "army" || team1 == "Army" || team1 == "alabama" || team1 == "Alabama");

    return team1;
}
