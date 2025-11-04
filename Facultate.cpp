//
// Created by marius on 04.11.2025.
//

#include "Facultate.h"
#include <iostream>

Facultate::Facultate(const std::string &nume) : nume(nume) {
}

const std::string &Facultate::get_nume() const {
    return nume;
}

void Facultate::set_nume(const std::string &nume) {
    this->nume = nume;
}

std::ostream &operator<<(std::ostream &os, const Facultate &facultate) {
    os
            << "nume: " << facultate.nume << " sali: ";
    for (const auto &sala: facultate.sali) {
        os << sala << ", ";
    }
    os << " studenti: ";
    for (const auto &student: facultate.studenti) {
        os << student << ", ";
    }
    return os;
}
