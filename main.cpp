#include <iostream>
#include <string>
#include "Prompt.h"

using namespace std;

void body(float x,float y);

int main()
{
    int end = 1;
    int loggedin = 0;
    //begin login process here*
    //if-else to check if logged in, and run different code depending
    string prompt;
    cout << "Welcome to Gym Manager (Name & Patent Pending)!\n\nPlease enter a command to continue with your gym activity management.\n";
    do{
        cout << ">>";
        cin >> prompt;
        if(prompt == "help")
        {cout << "\nCommands:\n\nhelp: Gives you the other commands.\n";
        cout << "workout: A calculator for the calories you should burn based on your workout routine. (This is still WIP)\n";
        cout << "bmi: A Body Mass Index tool to determine your fitness.\nend: Turn the thing off.\n";}
        else if(prompt == "end")
            {end = 0;}

        //The BMI Calculator. This is where you will use your inputted weight and height to determine your health.
        else if(prompt == "bmi")
               {
                   if(loggedin == 0)
                    {
                        float height = 0;
                        float weight = 0;
                        cout << "\nWelcome to the BMI Calculator.\n\nUse this tool to determine your fitness and personal health based on your height and weight.\n";
                        cout << "Please enter your Height in meters: ";
                        cin >> height;
                        cout << "Now please enter your Weight in Kilograms: ";
                        cin >> weight;
                        Prompt dumby(height,weight);
                        dumby.body();
                    }
                    else
                    {
                        return 0;//to do: use the login data to immediately print information*
                    }
               }

        //This is the 'Calorie Burning (Workout) Calculator(tm)'. This will work out the estimated calories burnt in a session of exercise. It will require your weight to function.
        else if(prompt == "workout")
        {
            cout << "Assume you have burned some calories.\nGo away.\n";
        }



        else if(prompt=="secrets")
            {cout << "\nYou found the secrets! Here is a list of extra things you can do:\n1: Try putting text into the BMI calculator! (You will need to restart the program afterwards.)\n";}
            //2. Type 'arcade' for a less realistic but more fun version of the workout command! (or a videogame! undecided!)
        else
            {cout << "\nCommand not recognised. Type 'help' for a list of commands.\n(and no caps please)\n";}
    }while(end>0);
}
