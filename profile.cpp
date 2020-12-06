#include "profile.h"

using namespace std;

string loginUser, loginPass;

profile profile1;

profile::profile()
{
    //ctor
    username = " ";
    password = " ";
    weight = 0;
    height = 0;
    bmi = 0;
    totalCals = 0;
    totalV = 0;
    loggedIn = 0;
}
//Login function that authenticates the suer and also loads user data into the class.
void profile::login(){
    for(int i = 0; i<3; i++){
        cout << "\nTo login please input" << endl;
        cout << "Username: "; cin >> loginUser;
        cout << "Password: "; cin >> loginPass;
            ifstream file;
            file.open(loginUser + ".txt");
                    file >> username >> password >> weight >> height >> bmi >> totalCals >> totalV;
                    profile1.Setusername(username);
                    profile1.Setpassword(password);
                    profile1.Setweight(weight);
                    profile1.Setheight(height);
                    profile1.Setbmi(bmi);
                    profile1.SettotalCals(totalCals);
                    profile1.SettotalV(totalV);
                    file.close();
            if(loginUser == profile1.Getusername() && loginPass == profile1.Getpassword()){
                cout << "\nWelcome back " << username <<"!" << endl;
                profile1.SetloggedIn(1);
                i = 3;
                profile1.logonT();
            }else{
                cout << "Incorrect username or password." << endl;
                profile1.SetloggedIn(0);
            };
        } if(loginUser != username)
        cout << "\nToo many attempts. Please try again." << endl;
}
//Registers the user and allows access to program and setting username and password into class.
void profile::registering(){
    cout << "\nTo register please input" << endl;
    cout << "Username: "; cin >> username;
    cout << "Password: "; cin >> password;
    profile1.Setusername(username);
    profile1.Setpassword(password);
    cout << "\nWelcome to Gym Manager " << username << "! To get started just type in a command." << endl;
}
//Calculates BMI and stores data in class.
void profile::bmiC(){
        cout << "\nWelcome to the BMI Calculator.\n\nUse this tool to determine your fitness and personal health based on your height and weight.\n";
        cout << "Please enter your Height in meters: ";
        cin >> height;
        profile1.Setheight(height);
        cout << "Now please enter your Weight in Kilograms: ";
        cin >> weight;
        profile1.Setweight(weight);
        int bmi = weight/(height*height);
        profile1.Setbmi(bmi);
        cout << "Your Body mass index value is " << bmi << endl;
        {if(bmi>18&&bmi<25){cout << "Your body is a healthy weight. Congratulations!\n\n";}
        else if(bmi>24&&bmi<30){cout << "You are a little overweight, but not too much. Reducing your weight a little will improve your health!\n\n";}
        else if(bmi>29&&bmi<40){cout << "You are obese and need to lose some weight. Reducing your weight will improve your health.\n\n";}
        else if(bmi>99){cout << "Holy shit. Bruh. You fuckin Heavy.\n\n";}
        else if(bmi>39){cout << "You are extremely obese and your health is at risk. Reducing your weight substantially will greatly improve your health\n\n";}
        else if(bmi<19){cout << "You are underweight. Putting on some weight will improve your health.\n\n";}
        }
}
//Function to cout profiles data.
void profile::stats(){
    cout << "\nUsername: " << profile1.Getusername() << endl;
    cout << "Password: " << profile1.Getpassword() << endl;
    cout << "Weight: " << profile1.Getweight() << endl;
    cout << "Height: " << profile1.Getheight() << endl;
    cout << "BMI: " << profile1.Getbmi() << endl;
    cout << "Total calories burned: " << profile1.GettotalCals() << endl;
    cout << "Total visits: " << profile1.GettotalV() << endl;
}
//Saves all data generated in program into users file.
void profile::save(){
    ofstream file;
    file.open(profile1.Getusername() + ".txt");
    file << profile1.Getusername() << endl << profile1.Getpassword() << endl << profile1.Getweight() << endl << profile1.Getheight() << endl << profile1.Getbmi() << endl << profile1.GettotalCals() << endl << profile1.GettotalV() << endl;
    file.close();
}
//Tracks user logins.
void profile::logonT(){
    profile1.GettotalV();
    totalV++;
    profile1.SettotalV(totalV); //////////////////////needs to be fixed
}
void profile::reset(){
    profile1.Setusername(" ");
    profile1.Setpassword(" ");
    profile1.Setweight(0);
    profile1.Setheight(0);
    profile1.Setbmi(0);
    profile1.SettotalCals(0);
    profile1.SettotalV(0);
}
profile::~profile()
{
    //dtor
}
