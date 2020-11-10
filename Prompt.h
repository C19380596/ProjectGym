#ifndef PROMPT_H
#define PROMPT_H
#include <iostream>
#include <string>

using namespace std;

class Prompt
{
    public:
        Prompt();
        virtual ~Prompt();
        Prompt(float height,float weight)
        {
            x = height;
            y = weight;
        }

        void body()
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

        void workout()
        {
            //placeholder
            cout << "piss off";
        }

    protected:

    private:
        string prompt;
        float x;
        float y;

};

#endif // PROMPT_H
