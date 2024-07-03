#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
private:
    int age;
    string name;

public:
    virtual void getdata()
    {
        cin >> name >> age;
    }
    virtual void putdata()
    {
        cout << name << ' ' << age << ' ';
    }
};

class Professor : public Person
{
private:
    int publications;

public:
    static int P_cur_id;

    void getdata() override
    {
        Person::getdata();
        cin >> publications;
    }
    void putdata() override
    {
        Person::putdata();
        cout << publications << ' ' << P_cur_id << endl;
        P_cur_id++;
    }
};

int Professor::P_cur_id = 1;

class Student : public Person
{
private:
    int marks[6];
    int ans = 0;
    static int S_cur_id;

public:
    void getdata() override
    {
        Person::getdata();
        for (int i = 0; i < 6; i++)
            cin >> marks[i];
    }
    void putdata() override
    {
        for (int i = 0; i < 6; i++)
            ans += marks[i];
        Person::putdata();
        cout << ans << ' ' << S_cur_id << endl;
        S_cur_id++;
    }
};

int Student::S_cur_id = 1;

int main()
{

    int n, val;
    cin >> n; // The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
