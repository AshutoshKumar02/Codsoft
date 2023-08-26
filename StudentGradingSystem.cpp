/*
Create a program that manages student grades. Allow the user to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest and lowest grades.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class student{
    public:
    string name;
    double highest;
    double lowest;
    double average;

    student(){
        average = 0.0;
        highest = 0.0;
        lowest = 100.0;
    }
};
int main(){
    vector<student> Students;
    int numOfStudents;
    cout<<"\nEnter the total number of students: ";
    cin>>numOfStudents;

    for(int i=0; i<numOfStudents; i++){
        student entry;

        cout<<"\nEnter the name of the student "<<i+1<<": ";
        cin.ignore();
        getline(cin, entry.name);

        int numSubjects;
        cout<<"Enter the number of subjects: ";
        cin>>numSubjects;
        
        int marks;
        cout<<"Enter the grades in each subjects: ";
        for(int j=0; j<numSubjects; j++){
            cin>>marks;
            entry.highest = (entry.highest < marks)? marks:entry.highest;
            entry.lowest = (entry.lowest > marks)? marks:entry.lowest;
            entry.average += marks;
        }
        entry.average /= numSubjects;

        Students.push_back(entry);
    }

    cout<<"\nStudents Grades Report\n";
    for(int k=0; k<numOfStudents; k++){
        cout<<"\nName of Student: "<<Students[k].name<<endl;
        cout<<"Highest marks: "<<Students[k].highest<<endl;
        cout<<"Lowest marks: "<<Students[k].lowest<<endl;
        cout<<"Average marks: "<<Students[k].average<<endl;
    }   
}