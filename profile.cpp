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
//Registration
void profile::registration(){
    int input;
    start1:
    do{
    cout << "\n1. Login" << endl;
    cout << "2. Register" << endl;
    cout << ">> ";
    cin >> input;
        if(input == 1){
        profile1.login();
            }else if(input == 2){
                profile1.registering();
                break;
            }else{
        cout << "Invalid input. Please type '1' to Login, '2' to Register." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        goto start1;
    }
    }while(profile1.GetloggedIn() == 0);

    cout << "1. BMI calculater - Calculates your body/mass index." << endl;
    cout << "2. Workout routine tracker - Tracks your workout and the calaories burnt." << endl;
    cout << "3. Profile Statistics - Overview of profile details." << endl;
    cout << "4. Main menu - Go back to login and registration." << endl;
    cout << "5. Help menu - List of commands." << endl;
    cout << "6. END" << endl;
}
//Login function that authenticates the user and also loads user data into the class.
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
                i = 3;
                profile1.SetloggedIn(1);
                profile1.logonT();
            }else{
                cout << "Incorrect username or password." << endl;
                profile1.SetloggedIn(0);
            };
        } if(profile1.GetloggedIn() == 0)
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
    profile1.SettotalV(totalV);
}
// resets profile class.
void profile::reset(){
    profile1.Setusername(" ");
    profile1.Setpassword(" ");
    profile1.Setweight(0);
    profile1.Setheight(0);
    profile1.Setbmi(0);
    profile1.SettotalCals(0);
    profile1.SettotalV(0);
}
// Workout tracker to findout how much calories burnt.
void profile::workout()
{
    float mins = 0;
    string exercise = "";
    float exer = 0;
    float weet = 0;
    int y = 1;
    starh:
    float l = 0;
    while(y == 1) {

        if (profile1.Getweight() >= 56 && profile1.Getweight() <= 111){
            cout << "\nWhat exercise did you do?\n" << " \n A: Weight Lifting: general \n B: Aerobics: water \n C: Stretching, Hatha Yoga \n D: Calisthenics: moderate \n E: Riders: general \n F: Aerobics: low impact \n G: Stair Step Machine: general \n H: Weight Lifting: vigorous \n I: Bicycling, Stationary: moderate \n J: Rowing, Stationary: moderate\n K: Aerobics: high impact\n L: Rowing, Stationary: vigorous\n M: Ski Machine: general\n " << endl;
            cin >> exercise;}
        else if (profile1.Getweight() < 56 && profile1.Getweight() > 0){
            cout << "Your weight appears to be lower than the minimum requirements (56KG). \nPlease consult a specialist before performing any strenuous exercises.\nReturning to main menu.\n";
            break;}
        else if (profile1.Getweight() < 0){
            cout << "Your weight cannot less than 0. \n";
            goto starh;}
        else if (profile1.Getweight() > 111){
            cout << "Your weight appears to be higher than the maximum requirements (111KG). \nPlease consult a specialist before performing any strenuous exercises.\nReturning to main menu.\n" ;
            break;}
        else
{
            cout << "Error.\nInvalid Input.\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            goto starh;
}
stark:

float exer;
if (exercise == "a" || exercise == "A")
    exer = 3;
else if (exercise == "b" || exercise == "B")
    exer = 4;
else if (exercise == "c" || exercise == "C")
    exer = 4;
else if (exercise == "d" || exercise == "D")
    exer = 4.5;
else if (exercise == "e" || exercise == "E")
    exer = 5;
else if (exercise == "f" || exercise == "F")
    exer = 5.5;
else if (exercise == "g" || exercise == "G")
    exer = 6;
else if (exercise == "h" || exercise == "H")
    exer = 6;
else if (exercise == "i" || exercise == "I")
    exer = 7;
else if (exercise == "j" || exercise == "J")
    exer = 7;
else if (exercise == "k" || exercise == "K")
    exer = 7;
else if (exercise == "l" || exercise =="L")
    exer = 8.5;
else if (exercise == "m" || exercise =="M")
    exer = 9.5;
else{
    cout << "Error invalid input\n";
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    goto stark;}

starp:
        cout << "\nHow long (in minutes) did you exercise?\n"<<endl;
    cin >> mins;
    if (mins > 960){
        cout << "\nError \nA max of 960 minutes (16 hours) can be achieved daily.\nThis is not recommended.";
         y = 0;}
    else if (mins > 240)
        cout << "\nYou have exercised for an extended period of time. \nIt is recommended you take a break. \nPlease ensure you are well hydrated.\n";

    else if (mins > 0)
         cout << "\n";
           else if (mins < 0){
        cout << "Error.\nInvalid Input.";
        goto starp;}

            else {
        cout << "Error.\nInvalid Input.";
        goto starp;}

float weet;

   if (profile1.Getweight() >= 56 && profile1.Getweight() < 70)
        weet = 1;

        else if (profile1.Getweight() >= 70 && profile1.Getweight() < 83)
        weet = 1.24;

        else if (profile1.Getweight() >= 83 && profile1.Getweight() < 97)
                 weet = 1.48;
        else if (profile1.Getweight() >= 97 && profile1.Getweight() <= 111)
                weet = 1.72;


    float x;
    x = weet * mins * exer ;

    cout << "\nYou have burnt " << x << " calories.\n";

    l = l + x;
    cout << "\nYou burnt " << l << " calories in total.\n";
    profile1.SettotalCals(l);
    profile1.save();
    string z;
    cout << "\nContinue? Y/N\n" <<endl;
    cin >> z;

    if (z == "y" || z == "Y")
    {
        y = 1;
    }
    else if (z == "n" || z == "N")
    {
        y = 0;
    }
}
}

profile::~profile()
{
    //dtor
}

   
