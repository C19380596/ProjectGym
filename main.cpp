#include <iostream>
#include <string>

using namespace std;

void body(float x,float y);

int main()
{
    int end = 1;
    string prompt;
    cout << "Welcome to Gym Manager (Name & Patent Pending)!\n\nPlease enter a command to continue with your gym activity management.\n";
    do{
        cout << ">>";
        cin >> prompt;
        if(prompt == "help")
        {cout << "\nCommands:\n\nhelp: Gives you the other commands.\nworkout: A calculator for the calories you should burn based on your workout routine. (This is still WIP)\nbmi: A Body Mass Index tool to determine your fitness.\nend: Turn the thing off.\n";}
        else if(prompt == "end")
            {end = 0;}
        else if(prompt == "bmi")
               {float Height;
                float Weight;
                cout << "\nWelcome to the BMI Calculator.\n\nUse this tool to determine your fitness and personal health based on your height and weight.\n";
                cout << "Please enter your Height in meters: ";
                cin >> Height;
                cout << "Now please enter your Weight in Kilograms: ";
                cin >> Weight;
                body(Height,Weight);}
        else if(prompt == "workout")
        {
            cout << "You assume you have burned some calories.\nGo away.\n";
        }



        else if(prompt=="secrets")
            {cout << "\nYou found the secrets! Here is a list of extra things you can do:\n1: Try putting text into the BMI calculator! (You will need to restart the program afterwards.)\n";}
            //2. Type 'arcade' for a less realistic but more fun version of the workout command!
        else
            {cout << "\nCommand not recognised. Type 'help' for a list of commands.\n(and no caps please)\n";}
    }while(end>0);
}


void body(float x,float y)//Change this into a class when you figure out how, James.
{
    int bmi = y/(x*x);
    cout << "Your Body mass index value is " << bmi << endl;
    if(bmi>18&&bmi<25){cout << "Your body is a healthy weight. Congratulations!\n\n";}
    else if(bmi>24&&bmi<30){cout << "You are a little overweight, but not too much. Reducing your weight a little will improve your health!\n\n";}
    else if(bmi>29&&bmi<40){cout << "You are obese and need to lose some weight. Reducing your weight will improve your health.\n\n";}
    else if(bmi>99){cout << "Holy shit. Bruh. You fuckin Heavy.\n\n";}
    else if(bmi>39){cout << "You are extremely obese and your health is at risk. Reducing your weight substantially will greatly improve your health\n\n";}
    else if(bmi<19){cout << "You are underweight. Putting on some weight will improve your health.\n\n";}
    //export this info into a new file so that we can save data in the future
}
