//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_PLANT_H
#define OOP_PLANT_H
#include "./IOstream.h"
class Plant:public IOstream{
protected:
    std::string Name;
    int Nr_frunze{};
public:
    Plant(std::string name, int nr_frunze);

    Plant(const Plant& rhs);

    Plant& operator=(const Plant &rhs);

    const std::string &getName() const;

    void setName( std::string name); ///Move

    int getNr_frunze() const;

    void setNr_frunze(int nr_frunze);

    virtual void Fotosinteza()const = 0;

    virtual ~Plant();

};
#endif //OOP_PLANT_H
