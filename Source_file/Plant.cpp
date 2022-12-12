//
// Created by Teodor-Daniel on 12.12.2022.
//

#include "../header/Plant.h"
const std::string &Plant::getName() const {
    return Name;
}
void Plant::setName(std::string name) { ///neaparat copie
    Plant::Name = std::move(name);
}
int Plant::getNr_frunze() const {
    return Nr_frunze;
}
void Plant::setNr_frunze(int nrfruneze) {
    Nr_frunze = nrfruneze;
}

void Plant::Fotosinteza() const{
    std::cout<<"Energia generata: "<<Nr_frunze * 10<<" de mJ";
}

Plant::Plant(std::string name, int nrFrunze) : Name(std::move(name)), Nr_frunze(nrFrunze) {}///gol aici

Plant::Plant(const Plant &rhs) : Plant(rhs.Name, rhs.Nr_frunze) {}

Plant &Plant::operator=(const Plant &rhs){
    if(this != &rhs) {
        Nr_frunze = rhs.Nr_frunze;
        Name = rhs.Name;
    }
    return *this;
}

Plant::~Plant() = default;