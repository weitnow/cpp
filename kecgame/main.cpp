#include <iostream>

void change_speed(int &speed, int newspeed)
{
    std::cout << "old speed: " << speed << " new speed: " << newspeed << std::endl;
    speed = newspeed;
};

void change_speed(int *speed, int newspeed)
{
    std::cout << "old speed: " << *speed << " new speed: " << newspeed << std::endl;
};

struct spacecraft
{
    char name[120];
    int speed;
};

int main()
{
    spacecraft enterprise = {"enterprise", 10};

    change_speed(&enterprise.speed, 20);

    std::cout << enterprise.name << " " << enterprise.speed << std::endl;

    return 0;
}
