//
// Created by Teodor-Daniel on 12.12.2022.
//
#include "../header/Copac.h"

Copac::Copac(std::string name, int nr_frunze, int inaltime)
        : Plant(std::move(name), nr_frunze), Inaltime(inaltime) {
}
Copac::Copac(const Copac &rhs): Plant(rhs.Name, rhs.Nr_frunze) , Inaltime(rhs.Inaltime){}

void Copac::SetInaltime(int inaltime) {
    Inaltime = inaltime;
}

int Copac::GetInaltime() const {
    return Inaltime;
}

Copac &Copac::operator=(const Copac &rhs) {
    if(this != &rhs){
        Plant::operator=(rhs);
        Inaltime = rhs.Inaltime;
    }
    return *this;
}

void Copac::Fotosinteza() const {
    std::cout<<"Energia generata: "<<Nr_frunze * 100<<" de mJ"<<std::endl;
}

void Copac::Print(std::ostream &os) const {
    os<<"Copacul "<<Name<<" cu nr de frunze = "<<Nr_frunze<<" are o inaltime de :"<<Inaltime<<std::endl;
}


