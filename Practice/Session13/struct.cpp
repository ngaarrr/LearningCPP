#include <iostream>

struct Students
{
    std::string name;
    int age;
    int grade;
};

int main()
{
    Students student1;
    student1.name = "negar";
    student1.age = 17;
    student1.grade = 12;

    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Age: " << student1.age << std::endl;
    std::cout << "Grade: " << student1.grade << std::endl;

    Students student[3];
    student[0].name = "Negar";
    student[1].age = 17;
    student[2].grade = 12;

    return 0;
}
