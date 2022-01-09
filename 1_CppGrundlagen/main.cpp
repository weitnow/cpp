#include <iostream>

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

void greet_persmiision_level(PermissionLevel level)
{
    if (level == PermissionLevel::ADMIN)
    {
        std::cout << "Hello Admin" << std::endl;
    }
}

int main()

{
    PermissionLevel permission_level_kec = PermissionLevel::INSTRUCTOR;
    PermissionLevel permiision_level_peter = PermissionLevel::STUDENT;

    std::cout << "Hello World" << std::endl;

    return 0;
}