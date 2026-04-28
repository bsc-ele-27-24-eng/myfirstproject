#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Reverse(string fileData) {
    string reversed = "";
    for (int i = fileData.length() - 1; i >= 0; i--) {
        reversed += fileData[i];
    }
    return reversed;
}

int main() {
    string fileData;

    ifstream file("textfile.txt");
    if (!file) {
        cout << "Error opening file" << endl;
        return 1;
    }
    getline(file, fileData);
    file.close();

    int vowelCount = 0;
    for (int i = 0; i < fileData.length(); i++) {
        char c = tolower(fileData[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    int wordCount = 0;
    for (int i = 0; i < fileData.length(); i++) {
        if (i == 0 && fileData[i] != ' ') {
            wordCount++;
        }
        else if (fileData[i] != ' ' && fileData[i - 1] == ' ') {
            wordCount++;
        }
    }
    cout << "Number of words: " << wordCount << endl;
    cout << "Reversed statement: " << Reverse(fileData) << endl;


    for (int i = 0; i < fileData.length(); i++) {
        if (i > 0 && fileData[i - 1] == ' ' && fileData[i] != ' ') {
            if (i + 1 < fileData.length()) {
                fileData[i + 1] = toupper(fileData[i + 1]);
            }
        }
    }


    if (fileData.length() > 1) {
        fileData[1] = toupper(fileData[1]);
    }

    cout << "Second letter capitalized: " << fileData << endl;

    return 0;
}