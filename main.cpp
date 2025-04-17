#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <chrono>
#include "game.h"
using namespace std;

int main() {
    // ifstream file("../Resource/Managerial_and_Decision_Economics_2013_Video_Games_Dataset.csv");  // Ensure the correct file path
    // if (!file.is_open()) {
    //     cerr << "Error: Could not open the file!" << endl;
    //     return 1;
    // }
    //
    // string line;
    // vector<vector<string>> data;
    //
    // // Read file line by line
    // while (getline(file, line)) {
    //     stringstream ss(line);
    //     vector<string> row;
    //     string value;
    //
    //     // Split by comma
    //     while (getline(ss, value, ',')) {
    //         row.push_back(value);
    //     }
    //
    //     data.push_back(row);
    // }
    //
    // file.close();
    game table("../Resource/Managerial_and_Decision_Economics_2013_Video_Games_Dataset.csv");

    // Print first 5 rows to check
    // for (size_t i = 1; i < min(table.data.size(), size_t(6)); i++) {
    //     for (const auto &val : data[i]) {
    //         cout << val << " | ";
    //     }
    //     cout << endl;
    // }

    return 0;
}