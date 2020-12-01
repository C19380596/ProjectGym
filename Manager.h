
#ifndef MANAGER_H
#define MANAGER_H
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Manager
{
    public:
        Manager();
        virtual ~Manager();
        void login();
        void registering();

    protected:

    private:
        int i;
        string username;
        string password;
        string loginUser;
        string loginPass;
};

#endif // MANAGER_H
