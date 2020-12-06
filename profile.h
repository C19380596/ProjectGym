#ifndef PROFILE_H
#define PROFILE_H
#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

class profile
{
    public:
        profile();
        virtual ~profile();

        string Getusername() { return username; }
        void Setusername(string val) { username = val; }
        string Getpassword() { return password; }
        void Setpassword(string val) { password = val; }
        float Getweight() { return weight; }
        void Setweight(float val) { weight = val; }
        float Getheight() { return height; }
        void Setheight(float val) { height = val; }
        int GettotalCals() { return totalCals; }
        void SettotalCals(float val) { totalCals = val; }
        int GettotalV() { return totalV; }
        void SettotalV(int val) { totalV = val; }
        int Getbmi() { return bmi; }
        void Setbmi(int val) { bmi = val; }
        bool GetloggedIn() { return loggedIn; }
        void SetloggedIn(bool val) { loggedIn = val; }
        void login();
        void registering();
        void bmiC();
        void stats();
        void save();
        void logonT();
        void reset();
        void registration();
        void workout();
    protected:

    private:
        string username;
        string password;
        float weight;
        float height;
        float totalCals;
        int totalV;
        int bmi;
        bool loggedIn;
};

#endif // PROFILE_H
