//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_COPAC_H
#define OOP_COPAC_H
#include "Plant.h"
class Copac :public Plant{
protected:

    int Inaltime;
public:
    Copac(std::string name, int nr_frunze, int inaltime);

    void SetInaltime(int inaltime);

    int GetInaltime()const;

    Copac(const Copac &rhs);

    Copac& operator=(const Copac &rhs);

    void Fotosinteza() const override;

    void Print(std::ostream& os) const override;
};
#endif //OOP_COPAC_H
