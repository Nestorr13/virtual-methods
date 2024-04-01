#include <iostream>
using namespace std;
class Movement
{
public:
    virtual void movement()
    {

    }
};
class Swim:public Movement
{
    void movement() override
    {
        cout << " Swimming " << endl;
    }
};
class Teleport : public Movement
{
    void movement() override
    {
        int n = rand() % 100;
        cout << " Teleporting  " << endl;
        if (n % 2 == 0)
        {
            cout << " Teleport successful " << endl;
        }
         else
        {
            cout << "Teleport failed" << endl;
        }
    }
};
class Fly: public Movement
{
    void movement() override
    {
        cout << "Flying" << endl;
    }
};
class Lay :public Movement
{
    void movement() override
    {
        cout << "Laying down " << endl;
    }
};
class Person
{
public:
    void move(Movement* move)
    {
        move->movement();
    }
};
int main()
{
    setlocale(0, "ru");
    srand(time(NULL));
    Person person;
    Swim swim;
    person.move(&swim);
    Fly fly;
    person.move(&fly);
    Teleport tp;
    person.move(&tp);
    
    return 0;
}