//
// Created by cesar on 4/17/2025.
//

#include "game.h"

game::game(string filePath) {
    ifstream file(filePath);  // Ensure the correct file path
    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return;
    }

    string line;


    // Read file line by line
    while (getline(file, line)) {
        stringstream ss(line);
        vector<string> row;
        string value;

        // Split by comma
        while (getline(ss, value, ',')) {
            row.push_back(value);
        }

        this->data.push_back(row);
    }

    file.close();
    for (size_t i = 1; i < min(data.size(), size_t(6)); i++) {
        for (const auto &val : data[i]) {
            cout << val << " | ";
        }
        cout << endl;
    }
}

vector<string> game::getGenre(string genre) {
}

vector<string> game::getMaturity(string maturity) {
}

vector<string> game::getConsole(string console) {
}

vector<string> game::getMultiplayer(string multiplayer) {
}

vector<string> game::getScore(string score) {
}
