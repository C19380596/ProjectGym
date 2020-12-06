#include "profile.h"

using namespace std;

int main()
{
    //First menu to login and register.
    int prompt, input;
    string username, password;
    profile profile1;
    start:
    cout << "Welcome to Gym Manager \nPlease enter a command to continue with your gym activity management.\n" << endl;
    start1:
    do{
    cout << "\n1. Login" << endl;
    cout << "2. Register" << endl;
    cout << ">> ";
    cin >> input;
    if(input == 1){
        profile1.login();
        cout << profile1.GetloggedIn() << endl; // testing boolean
    }else if(input == 2){
        profile1.registering();
        break;
    }else{
        cout << "Invalid input. Please type '1' to Login, '2' to Register." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        goto start1;
    }
    }while(profile1.GetloggedIn() == 1);

    cout << "1. BMI calculater - Calculates your bmi." << endl;
    cout << "2. Workout routine tracker - Tracks your workout." << endl;
    cout << "3. Profile Statistics - Overview of profile details." << endl;
    cout << "4. Main menu - Go back to login and registration." << endl;
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
            profile1.save();
            profile1.reset();
            goto start;
}
            break;
    case 5:{
            cout << "1. BMI calculater - Calculates your bmi." << endl;
            cout << "2. Workout routine tracker - Tracks your workout." << endl;
            cout << "3. Profile Statistics - Overview of profile details." << endl;
            cout << "4. Main menu - Go back to login and registration." << endl;
            cout << "0. END" << endl;
}
            break;
    default:
        cout << "Invalid command. Type '5' to open up the Help menu for a list of commands. " << endl;
}
    }while(prompt != 0);
    profile1.save();

    return 0;
}

