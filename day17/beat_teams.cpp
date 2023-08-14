#include <iostream>
using namespace std;


void get_teams(string&, string&);

int main()
{
    string team1, team2;
    get_teams(team1, team2);
    cout << team1 << " beat " << team2 << endl;

    return 0;
}

void get_teams(string& team1, string& team2) {
    do {
        cin >> team1 >> team2;
    } while (team1 == "army" || team2 == "clemson");   
}


