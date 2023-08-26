/*Create a program that generates a random number and asks the user to guess it. Provide feedback on whether the
guess is too high or too low until the user guesses the correct number.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int randomNum = rand()%100; //choosing a random number in the range [0, 100)

    int number, difference, attempts = 5;
    cout<<endl<<"Guess the number Between 0 to 100: ";
    cin>>number;
    bool result = false;
    while(attempts){
        difference = randomNum-number;
        if(attempts == 1){
            cout<<endl<<"You are left with one more attempt..."<<endl;
            
            cout<<"Try a new number: ";
            cin>>number;
            attempts--;

            continue;
        }

        if(randomNum == number){
            if(attempts == 5){
                cout<<endl<<"Hurray! You guessed the number in first attempt";
            }
            else {
                cout<<endl<<"Well played! You were spot on";
            }
            result = true;
            break;
        }
        else if(difference > 50){
            cout<<endl<<"Guess is too low"<<endl;
        }
        else if(difference < -50){
            cout<<endl<<"Guess is too high"<<endl;
        }
        else if(difference > 0 && difference < 10){
            cout<<endl<<"You are very close!"<<endl;
        }
        else if(difference > -10 && difference < 0){
            cout<<endl<<"You are very close!"<<endl;
        }
        else{
            cout<<endl<<"You are close! Keep Trying..."<<endl;
        }

        cout<<"Try a new number: ";
        cin>>number;

        attempts--;
    }
    if(!result) {
        cout<<endl<<"Better Luck Next Time"<<endl;

    }   
}