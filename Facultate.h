//
// Created by marius on 04.11.2025.
//

#ifndef OOP_FACULTATE_H
#define OOP_FACULTATE_H
#include <string>
#include <vector>

#include "Sala.h"
#include "Student.h"


class Facultate {
    std::string nume;
    std::vector<Sala> sali;
    std::vector<Student> studenti;

public:
    explicit Facultate(const std::string &nume);

    friend std::ostream &operator<<(std::ostream &os, const Facultate &facultate);
};


#endif //OOP_FACULTATE_H
