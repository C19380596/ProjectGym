#include <fstream>
#include "Manager.h"


using namespace std;

extern int counter;
extern bool notloggedin;

Manager::Manager()
{
    //ctor
}

void Manager::login(){
        i=1;
        do
        {
            cout << "Please input your" << endl;
            cout << "Username: "; cin >> username;
            cout << "Password: "; cin >> password;

            ifstream read(username + ".txt");
            getline(read, loginUser);
            getline(read, loginPass);

            if(loginUser == username && loginPass == password)
                {
                    cout << "Hello " << loginUser << "!" << endl;
                    i = 0;
                    counter = 0;
                    notloggedin = 0;
                }
            else
                {
                    cout << "incorrect username or password" << endl;
                    i=0;
                }

        }
        while(i>0);
}

void Manager::registering()
{
    cout << "To register please input" << endl;
    cout << "Username: "; cin >> username;
    cout << "Password: "; cin >> password;
    ofstream file;
    file.open(username + ".txt");
    file << username << endl << password;
    file.close();
}
Manager::~Manager()
{
    //dtor
}
