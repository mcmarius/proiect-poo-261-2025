//
// Created by marius on 04.11.2025.
//

#include "Sala.h"
#include <iostream>

Sala::Sala(int nr, int cabluri_hdmi_functionale): nr(nr),
                                                  cabluri_hdmi_functionale(cabluri_hdmi_functionale) {
}

int Sala::get_nr() const {
    return nr;
}

void Sala::set_nr(int nr) {
    this->nr = nr;
}

int Sala::get_cabluri_hdmi_functionale() const {
    return cabluri_hdmi_functionale;
}

void Sala::set_cabluri_hdmi_functionale(int cabluri_hdmi_functionale) {
    this->cabluri_hdmi_functionale = cabluri_hdmi_functionale;
}

std::ostream & operator<<(std::ostream &os, const Sala &sala) {
    return os
           << "Sala nr: " << sala.nr
           << " cabluri_hdmi_functionale: " << sala.cabluri_hdmi_functionale;
}
