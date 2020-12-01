#include <iostream>
#include <string>
//#include "Prompt.h"
#include "Manager.h"

using namespace std;

void body(float x,float y);

//global variables
int counter = 1;
bool notloggedin = 1;

int main()
{
    int end = 1;
    string prompt;

    string username, password;
    string input;
    /*cout << "login, skip login or register:" << endl;
    do{
        cout << ">>";
        cin >> input;
        if(input == "login")
        {
            manager login1;
            login1.login();
        }
        else if(input == "register")
        {
            manager register1;
            register1.registering();
        }
        else if(input == "skip")
        {
            counter = 0;
        }
        else
        {
            cout << "\nCommand not recognised. Type 'login', 'skip' of 'register' to continue.\n";
        }
    }while (counter != 0);
    //in the future we will implement login support but for now the login is only cosmetic.
    //this *needs to be changed, James*

*/

    cout << "Welcome to Gym Manager (Name & Patent Pending)!\n\nPlease enter a command to continue with your gym activity management.\n";

    //main loop
    do{
        cout << ">>";
        cin >> prompt;

        //obligatory help command.
        if(prompt == "help")
        {cout << "\nCommands:\n\nhelp: Gives you the other commands.\n";
        cout << "workout: A calculator for the calories you should burn based on your workout routine. (This is still WIP)\n";
        cout << "bmi: A Body Mass Index tool to determine your fitness.\nend: Turn the thing off.\n";
        cout << "login: Starts the login process.\n";
        cout << "register: Starts the register process to allow you to log in.\n";}

        //login while you are logged out.
        else if(prompt == "login")
        {
            manager login1;
            login1.login();
        }

        //register a new account while logged in or out.
        else if(prompt == "register")
        {
            manager register1;
            register1.registering();
        }

        //The BMI Calculator. This is where you will use your inputted weight and height to determine your health.
        else if(prompt == "bmi")
               {
                    float height = 0;
                    float weight = 0;
                    cout << "\nWelcome to the BMI Calculator.\n\nUse this tool to determine your fitness and personal health based on your height and weight.\n";
                    cout << "Please enter your Height in meters: ";
                    cin >> height;
                    cout << "Now please enter your Weight in Kilograms: ";
                    cin >> weight;
                    int bmi = weight/(height*height);
                    cout << "Your Body mass index value is " << bmi << endl;
                    {if(bmi>18&&bmi<25){cout << "Your body is a healthy weight. Congratulations!\n\n";}
                    else if(bmi>24&&bmi<30){cout << "You are a little overweight, but not too much. Reducing your weight a little will improve your health!\n\n";}
                    else if(bmi>29&&bmi<40){cout << "You are obese and need to lose some weight. Reducing your weight will improve your health.\n\n";}
                    else if(bmi>99){cout << "Holy shit. Bruh. You fuckin Heavy.\n\n";}
                    else if(bmi>39){cout << "You are extremely obese and your health is at risk. Reducing your weight substantially will greatly improve your health\n\n";}
                    else if(bmi<19){cout << "You are underweight. Putting on some weight will improve your health.\n\n";}}


                    //export this info into a new file so that we can save data in the future
               }

        //This is the 'Calorie Burning (Workout) Calculator(tm)'. This will work out the estimated calories burnt in a session of exercise. It will require your weight to function.
        else if(prompt == "workout")
        {
            cout << "Assume you have burned some calories.\nGo away.\n";
        }

        //This will show you your entered information on request. eventually.
        else if(prompt == "stats")
        {
            if(notloggedin == 1)// do not forget you need a double equals, James
            {
                cout << "You are not logged in.\n\nYou need to be logged in to use this feature\n";
            }
            else
            {
                cout << "This feature will come with the new 'Login' update.\nHold tight!\n";
            }
        }

        //here are the extra bits and features*(tm). They are not as important, but more fun.
        else if(prompt=="secrets")
            {cout << "\nYou found the secrets! Here is a list of extra things you can do:\n1: Try putting text into the BMI calculator! (You will need to restart the program afterwards.)\n";}
            //2. Type 'arcade' for a less realistic but more fun version of the workout command! (or a videogame! undecided!)

        //program is kil.
        else if(prompt == "end")
            end = 0;

        //error message for when you do something unsupported.
        else
            {cout << "\nCommand not recognised. Type 'help' for a list of commands.\n(and no caps please)\n";}
    }while(end>0);}
