#ifndef EXERCISE_H
#define EXERCISE_H
#include <string>

using namespace std;


class Exercise
{
    public:
        Exercise();
        void workout();
        virtual ~Exercise();

    protected:

    private:
        float mins;
        string exercise;
        int y = 1;
        float l = 0;
        float exer;
        float weet;
};

#endif // EXERCISE_H
