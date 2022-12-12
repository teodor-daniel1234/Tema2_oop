//
// Created by Teodor-Daniel on 12.12.2022.
//
#include "../header/Floare.h"

Floare::Floare(std::string nume, int nr_frunze, int petale): Plant(std::move(nume), nr_frunze) ,Petale(petale){}

Floare::Floare(const Floare &rhs) : Plant(std::move(rhs.Name), rhs.Petale),Petale(rhs.Petale){}

void Floare::SetPetale(int petale) {
    Petale = petale;
}

int Floare::GetPetale() const {
    return Petale;
}

Floare &Floare::operator=(const Floare &rhs) {
    if(this != &rhs){
        Plant::operator=(rhs);
        Petale = rhs.Petale;
    }
    return *this;
}

void Floare::Fotosinteza() const {
    std::cout<<"Energia generata: "<<Nr_frunze * 1<<" de mJ";
}

void Floare::Print(std::ostream &os) const {
    os<<"Floare de tipu:"<<Name<<" cu nr de frunze = "<<Nr_frunze<<" si nr de petale = "<<Petale<<std::endl;
}

