#include <iostream>
#include <array>
#include <ostream>
#include <vector>

class Student {
public:
    Student(const std::string &nume, int an, const std::vector<std::string> &restante)
        : nume(nume),
          an(an),
          restante(restante) {
    }

    Student(const std::string &nume, int an)
        : nume(nume),
          an(an) {
    }

    Student(const Student &other)
        : nume(other.nume),
          an(other.an),
          restante(other.restante) {
        std::cout << "cc student " << nume << std::endl;
    }

    Student &operator=(const Student &other) {
        if (this == &other)
            return *this;
        nume = other.nume;
        an = other.an;
        restante = other.restante;
        return *this;
    }

    ~Student() {
        std::cout << "destr student " << nume << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &os, const Student &student) {
        os
                << "nume: " << student.nume
                << " an: " << student.an
                << " restante: ";
        for (const auto &restanta: student.restante) {
            os << restanta << ", ";
        }
        return os;
    }

private:
    std::string nume;
    int an;
    std::vector<std::string> restante;
};

class Sala {
    int nr{};
    int cabluri_hdmi_functionale{};

public:
    [[nodiscard]] int get_nr() const {
        return nr;
    }

    void set_nr(int nr) {
        this->nr = nr;
    }

    [[nodiscard]] int get_cabluri_hdmi_functionale() const {
        return cabluri_hdmi_functionale;
    }

    void set_cabluri_hdmi_functionale(int cabluri_hdmi_functionale) {
        this->cabluri_hdmi_functionale = cabluri_hdmi_functionale;
    }

    friend std::ostream &operator<<(std::ostream &os, const Sala &sala) {
        return os
               << "Sala nr: " << sala.nr
               << " cabluri_hdmi_functionale: " << sala.cabluri_hdmi_functionale;
    }
};

class Facultate {
    std::string nume;
    std::vector<Sala> sali;
    std::vector<Student> studenti;

public:
    explicit Facultate(const std::string &nume)
        : nume(nume) {
    }

    [[nodiscard]] const std::string &get_nume() const {
        return nume;
    }

    void set_nume(const std::string &nume) {
        this->nume = nume;
        get_nume();
    }

    friend std::ostream &operator<<(std::ostream &os, const Facultate &facultate) {
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
};


int main() {
    std::cout << "Hello, world, este ora 9:42!\n";
    std::array<int, 100> v{};
    int nr;
    std::cout << "Introduceți nr: ";
    /////////////////////////////////////////////////////////////////////////
    /// Observație: dacă aveți nevoie să citiți date de intrare de la tastatură,
    /// dați exemple de date de intrare folosind fișierul tastatura.txt
    /// Trebuie să aveți în fișierul tastatura.txt suficiente date de intrare
    /// (în formatul impus de voi) astfel încât execuția programului să se încheie.
    /// De asemenea, trebuie să adăugați în acest fișier date de intrare
    /// pentru cât mai multe ramuri de execuție.
    /// Dorim să facem acest lucru pentru a automatiza testarea codului, fără să
    /// mai pierdem timp de fiecare dată să introducem de la zero aceleași date de intrare.
    ///
    /// Pe GitHub Actions (bife), fișierul tastatura.txt este folosit
    /// pentru a simula date introduse de la tastatură.
    /// Bifele verifică dacă programul are erori de compilare, erori de memorie și memory leaks.
    ///
    /// Dacă nu puneți în tastatura.txt suficiente date de intrare, îmi rezerv dreptul să vă
    /// testez codul cu ce date de intrare am chef și să nu pun notă dacă găsesc vreun bug.
    /// Impun această cerință ca să învățați să faceți un demo și să arătați părțile din
    /// program care merg (și să le evitați pe cele care nu merg).
    ///
    /////////////////////////////////////////////////////////////////////////
    std::cin >> nr;
    /////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < nr; ++i) {
        std::cout << "v[" << i << "] = ";
        std::cin >> v[i];
    }
    std::cout << "\n\n";
    std::cout << "Am citit de la tastatură " << nr << " elemente:\n";
    for (int i = 0; i < nr; ++i) {
        std::cout << "- " << v[i] << "\n";
    }
    ///////////////////////////////////////////////////////////////////////////
    /// Pentru date citite din fișier, NU folosiți tastatura.txt. Creați-vă voi
    /// alt fișier propriu cu ce alt nume doriți.
    /// Exemplu:
    /// std::ifstream fis("date.txt");
    /// for(int i = 0; i < nr2; ++i)
    ///     fis >> v2[i];
    ///
    ///////////////////////////////////////////////////////////////////////////
    return 0;
}
