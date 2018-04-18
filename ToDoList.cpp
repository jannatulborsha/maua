#include<iostream>

using namespace std;

class ClassRoutine
{
    string sleepTime, wakeUpTime;
    public:
    void putSleepTime(string str)
    {
        sleepTime = str;
    }

    void putWakeUpTime(string str)
    {
        wakeUpTime  = str;
    }

    string getSleepTime()
    {
        return sleepTime;
    }

    string getWakeUpTime()
    {
        return wakeUpTime;
    }
};

int main()
{
    ClassRoutine classRoutine;
    classRoutine.putWakeUpTime("7.00 AM");
    classRoutine.putSleepTime("12.00 AM");

    cout << classRoutine.getWakeUpTime() << endl;
    cout << classRoutine.getSleepTime() << endl;
    return 0;
}

