//
// Created by marius on 04.11.2025.
//

#ifndef OOP_SALA_H
#define OOP_SALA_H
#include <iosfwd>


class Sala {
    int nr{};
    int cabluri_hdmi_functionale{};

public:
    Sala(int nr, int cabluri_hdmi_functionale);

    [[nodiscard]] int get_nr() const;
    void set_nr(int nr);
    [[nodiscard]] int get_cabluri_hdmi_functionale() const;
    void set_cabluri_hdmi_functionale(int cabluri_hdmi_functionale);

    friend std::ostream &operator<<(std::ostream &os, const Sala &sala);
};


#endif //OOP_SALA_H