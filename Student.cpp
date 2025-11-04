//
// Created by marius on 04.11.2025.
//

#include "Student.h"

#include <iostream>

Student::Student(const std::string &nume, int an, const std::vector<std::string> &restante): nume(nume),
                                                                                             an(an),
                                                                                             restante(restante) {
}

Student::Student(const std::string &nume, int an): nume(nume),
                                                   an(an) {
}

Student::Student(const Student &other): nume(other.nume),
                                        an(other.an),
                                        restante(other.restante) {
    std::cout << "cc student " << nume << std::endl;
}

Student & Student::operator=(const Student &other) {
    if (this == &other)
        return *this;
    nume = other.nume;
    an = other.an;
    restante = other.restante;
    return *this;
}

Student::~Student() {
    std::cout << "destr student " << nume << std::endl;
}

std::ostream & operator<<(std::ostream &os, const Student &student) {
    os  << "nume: " << student.nume
        << " an: " << student.an
        << " restante: ";
    for (const auto &restanta: student.restante) {
        os << restanta << ", ";
    }
    return os;
}
