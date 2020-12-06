#include "profile.h"

using namespace std;

//global variables
bool notloggedin = 1;

int main()
{
    //First menu to login and register. 
    int prompt, input;
    string username, password;
    profile profile1;
    cout << "Welcome to Gym Manager \n Please enter a command to continue with your gym activity management.\n" << endl;
    do{
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cin >> input;
    if(input == 1){
        profile1.login();
        notloggedin = 0;
        profile1.logonT();
        break;
    }else if(input == 2){
        profile1.registering();
        break;
    }else{
        cout << "Invalid input. Please type '1' to Login, '2' to Register." << endl;
    }
    }while(notloggedin = 0);

    cout << "1. BMI calculater - Calculates your bmi." << endl;
    cout << "2. Workout routine tracker - Tracks your workout." << endl;
    cout << "3. Profile Statistics - Overview of profile details." << endl;
    cout << "0. END" << endl;

    do{
    cout << ">> ";
    cin >> prompt;

    switch (prompt){
    case 0: {
            cout << "Thank you for using Gym Manager." << endl;
}
        break;
    case 1:{
        profile1.bmiC();
}
        break;
    case 2: {
            cout << "patrick code" << endl;
}
        break;
    case 3:{
        profile1.stats();
}
        break;
    case 4:{
            cout << "1. BMI calculater - Calculates your bmi." << endl;
            cout << "2. Workout routine tracker - Tracks your workout." << endl;
            cout << "3. Profile Statistics - Overview of profile details." << endl;
            cout << "0. END" << endl;
}
            break;
    default:
        cout << "Invalid command. Type '4' to open up the Help menu for a list of commands. " << endl;
}
    }while(prompt != 0);

    profile1.save();

    return 0;
}
