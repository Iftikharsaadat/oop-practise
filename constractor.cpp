#include <bits/stdc++.h>

using namespace std;

class MyClass
{

    int roll;
    string name;
    double cgpa;

public:
    MyClass(int roll, string name, double cgpa)
    {

        this->roll = roll;
        this->name = name;
        this->cgpa = cgpa;

        cout << name << " object constructed" << endl;
    }

    MyClass(const MyClass &obj)
    {
        roll = obj.roll;
        name = obj.name;
        cgpa = obj.cgpa;

        cout << name << " object cloned " << endl;
    }

    void setroll(int roll)
    {
        this->roll = roll;
    }
    void setname(string name)
    {
        this->name = name;
    }
    int getroll()
    {
        return roll;
    }
    double getcgpa()
    {
        return cgpa;
    }
    string getname()
    {
        return name;
    }

    ~MyClass()
    {
        cout << name << " object destructed" << endl;
    }
};

int main()
{
    MyClass std1(2405126, "ifti", 6.66);

    cout << std1.getname() << endl;
    cout << std1.getroll() << endl;
    cout << std1.getcgpa() << endl;
    std1.setroll(126);
    cout << std1.getroll() << endl;

    MyClass std2(std1);

    std2.setroll(124);
    std2.setname("ifti2");
    cout << "std2 roll is" << std2.getroll() << endl;
    cout << "std1 roll is" << std1.getroll() << endl;
}