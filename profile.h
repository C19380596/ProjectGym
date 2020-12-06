
#ifndef PROFILE_H
#define PROFILE_H
#include <iostream>
#include <string>
#include <fstream>

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
        int Getweight() { return weight; }
        void Setweight(float val) { weight = val; }
        int Getheight() { return height; }
        void Setheight(float val) { height = val; }
        int GettotalCals() { return totalCals; }
        void SettotalCals(float val) { totalCals = val; }
        int GettotalV() { return totalV; }
        void SettotalV(int val) { totalV = val; }
        int Getbmi() { return bmi; }
        void Setbmi(float val) { bmi = val; }
        void login();
        void registering();
        void bmiC();
        void stats();
        void save();
        void logonT();
    protected:

    private:
        string username;
        string password;
        float weight;
        float height;
        float totalCals;
        int totalV;
        float bmi;
};

#endif // PROFILE_H
