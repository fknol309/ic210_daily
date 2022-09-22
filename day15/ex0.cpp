#include <iostream>
#include <cinttypes>
using namespace std;


string get_team(){
    string team;
    do {
        cout << "Team: ";
        cin >> team;
    } while (team == "army" || team == "Army" || team == "alabama" || team == "Alabama");
    return team;
}

int main()
{
    string team;
    team = get_team();
    cout << "Go " << team << "!" << endl;
    return 0;
}
