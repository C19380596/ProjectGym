#include <iostream>
#include <limits>
using namespace std;

int main()




{
    float mins;


    float weight;
    string exercise;

starh:



    cout << "How much do you weigh?(KG)\n"; // you may want to take this


    cin >> weight;// and this
int y = 1;
float l = 0;
do {

        if (weight >= 56 && weight <= 111)
         cout << "\nWhat exercise did you do?\n" << " \n A: Weight Lifting: general \n B: Aerobics: water \n C: Stretching, Hatha Yoga \n D: Calisthenics: moderate \n E: Riders: general \n F: Aerobics: low impact \n G: Stair Step Machine: general \n H: Weight Lifting: vigorous \n I: Bicycling, Stationary: moderate \n J: Rowing, Stationary: moderate\n K: Aerobics: high impact\n L: Rowing, Stationary: vigorous\n M: Ski Machine: general\n " << endl;
        else if (weight < 56 && weight > 0){
            cout << "Your weight appears to be lower than the minimum requirements (56KG). \nPlease consult a specialist before performing any strenuous exercises.\nClosing program.";
            exit(0);}
        else if (weight < 0){
            cout << "Your weight cannot less than 0. \n";
            goto starh;}
            else if (weight > 111){
            cout << "Your weight appears to be higher than the maximum requirments (111KG). \nPlease consult a specialist before performing any strenuous exercises.\nClosing program." ;
            exit(0);}
        else
{

           cout << "Error.\nInvalid Input.\n";
             cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
           goto starh;
}
            cin >> exercise;




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
    goto stark;}

starp:
        cout << "\nHow long (in minutes) did you exercise?\n"<<endl;
    cin >> mins;
    if (mins > 960){
        cout << "\nError \nA max of 960 minutes (16 hours) can be achieved daily.\nThis is not recommended.";
         exit(0);}
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

   if (weight >= 56 && weight < 70)
        weet = 1;

        else if (weight >= 70 && weight < 83)
        weet = 1.24;

        else if (weight >= 83 && weight < 97)
                 weet = 1.48;
        else if (weight >= 97 && weight <= 111)
                weet = 1.72;


    float x;
    x = weet * mins * exer ;

    cout << "\nYou have burnt " << x << " calories.\n";

    l = l + x;
    cout << "\nYou burnt " << l << " calories in total.\n";

    string z;
    cout << "\nContinue? Y/N\n" <<endl;
    cin >> z;

    if (z == "y" || z == "Y")
        y = 1;
        else if (z == "n" || z == "N")
        exit(0);

}
while(y = 1);
}

