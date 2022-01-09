#include <iostream>

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

enum ExamPersons
{
    STUDENT,
    INSTRUCTOR
};

struct UserData
{
    char *name;
    unsigned int id;
    PermissionLevel permission_level;
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
    ExamPersons test = ExamPersons::STUDENT;

    std::cout << "Hello World2" << std::endl;
    std::cout << test << std::endl;

    UserData user_jan = {"Jan", 108121, permission_level_kec};

    UserData user_peter;
    user_peter.name = "Peter";
    user_peter.id = 232323;
    user_peter.permission_level = permiision_level_peter;

    return 0;
}