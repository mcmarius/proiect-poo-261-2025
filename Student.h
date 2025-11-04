//
// Created by marius on 04.11.2025.
//

#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H
#include <string>
#include <vector>


class Student {
public:
    Student(const std::string &nume, int an, const std::vector<std::string> &restante);

    Student(const std::string &nume, int an);

    Student(const Student &other);

    Student &operator=(const Student &other);

    ~Student();

    friend std::ostream &operator<<(std::ostream &os, const Student &student);

private:
    std::string nume;
    int an;
    std::vector<std::string> restante;
};


#endif //OOP_STUDENT_H
