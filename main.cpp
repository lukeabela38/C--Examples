#include <iostream>
#include <fstream>
using namespace std;

int main() {

    //create a text file
    ofstream MyFile("aTextFile.txt");
    MyFile << "Files can be tricky.";
    MyFile.close();

    string myText;

    //read from text file
    ifstream MyReadFile("aTextFile.txt");

    while (getline (MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close();

    return 0;
}