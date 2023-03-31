#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string input;
    int num;
    int sum = 0;
    int max = 0;
    ifstream inputFile("input.txt");

    while (getline(inputFile, input)) {
        if (input.empty()) {
            if (sum > max) {
                max = sum;
            }
            sum = 0;
        } else {
            num = stoi(input);
            sum += num;
        }
    }
    if (sum > max) {
        max = sum;
    }
    cout << max << endl;

    return 0;
}