//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_GRADINA_H
#define OOP_GRADINA_H
#include "Plant.h"
#include "vector"
#include "memory"
#include "Short.h"
#include "Weak.h"
#include "NoName.h"
#include "fstream"
class Gradina{
protected:
    static std::vector<std::shared_ptr<Plant>> Plants;
public:
    Gradina() = delete;
    static void addPlant(std::shared_ptr<Plant> plant);

    static std::shared_ptr<Plant> Encrypt(int key);///encrypt

    static std::shared_ptr<Plant> Find_name(const std::string &name);///Gasesc dupa un nume

    static std::shared_ptr<Plant> Find_by_power(int nr);///

};
#endif //OOP_GRADINA_H
