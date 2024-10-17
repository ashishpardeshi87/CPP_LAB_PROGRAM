#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string userInput;

    // Asking user for userInput
    cout << "Enter some text: "; 
    getline(cin, userInput);

    // Writing userInput to a file 
    ofstream outfile("myfile.txt");

    if (outfile.is_open()) { 
        outfile << userInput;
        outfile.close();
        cout << "Data saved to file." << endl;
    } else {
        cout << "Error opening file for writing" << endl;
    }

    // Reading content from the file 
    string fileContent;
    ifstream infile("myfile.txt"); 

    if (infile.is_open()) {
        while (getline(infile, fileContent)) { 
            cout << fileContent << endl;
        }
        infile.close();
    } else {
        cout << "Error opening file for reading" << endl;
    }

    return 0;
}
