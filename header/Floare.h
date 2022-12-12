//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_FLOARE_H
#define OOP_FLOARE_H

#include "Plant.h"

class Floare: public Plant{
protected:
    int Petale;
public:
    Floare(std::string nume, int nr_frunze, int petale);

    Floare(const Floare &rhs);

    void SetPetale(int petale);

    int GetPetale()const;

    Floare& operator=(const Floare &rhs);

    void Fotosinteza() const override;

    void Print(std::ostream &os)const override;
};
#endif //OOP_FLOARE_H
