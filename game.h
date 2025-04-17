#ifndef DSAPROJECT3_GAME_H
#define DSAPROJECT3_GAME_H
#include <unordered_map>
#include <vector>
using namespace std;

class game {
    private:
        unordered_map<string, vector<string>> genreTable; //key: genre, value: list of games
        unordered_map<string, vector<string>> maturityTable; //key: maturity rating, value: list of games
        unordered_map<string, vector<string>> consoleTable; //key: console, value: list of games
        unordered_map<string, vector<string>> multiplayerTable; //key: single/multi, value: list of games
        unordered_map<string, vector<string>> scoreTable; //key: score range, value: list of games
    public:
        game(string filePath);
        vector<string> getGenre(string genre); //input is key for genreTable
        vector<string> getMaturity(string maturity); //input is key for maturityTable
        vector<string> getConsole(string console);
        vector<string> getMultiplayer(string multiplayer);
        vector<string> getScore(string score);

};


#endif //DSAPROJECT3_GAME_H
