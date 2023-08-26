/*
Develop a program that counts the number of words in a given text file. Prompt the user to enter the file name and
display the total word count.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
    string filename;

    cout<<"Enter the name of the text file: ";
    cin>>filename;

    ifstream inputFile(filename);
    if(!inputFile){
        cout<<"\nUnable to open the file "<<filename<<endl;
        return 0;
    }

    int wordCount = 0;
    string line, word;
    while(getline(inputFile, line)){
        istringstream iss(line);
        while(iss>>word){
            wordCount++;
        }
    }

    cout<<"Number of words in the file is "<<wordCount<<endl;
    inputFile.close();
}


