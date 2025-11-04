//
// Created by marius on 04.11.2025.
//

#include "Sala.h"
#include <iostream>

Sala::Sala(int nr, int cabluri_hdmi_functionale) : nr(nr),
                                                   cabluri_hdmi_functionale(cabluri_hdmi_functionale) {
}

std::ostream &operator<<(std::ostream &os, const Sala &sala) {
    return os
           << "Sala nr: " << sala.nr
           << " cabluri_hdmi_functionale: " << sala.cabluri_hdmi_functionale;
}
