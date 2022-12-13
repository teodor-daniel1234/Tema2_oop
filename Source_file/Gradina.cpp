//
// Created by Teodor-Daniel on 12.12.2022.
//
#include "../header/Gradina.h"
std::vector<std::shared_ptr<Plant>> Gradina::Plants;///downcast

void Gradina::addPlant(std::shared_ptr<Plant> plant) {
    Plants.push_back(plant);
}
std::shared_ptr<Plant> Gradina::Afisare() {
    for(auto &plant:Plants)
    {
        std::cout<<"NUME : "<<plant->getName()<<" NR DE FRUNZE: "<<plant->getNr_frunze()<<std::endl;
    }

    return nullptr;
}
/*
std::shared_ptr<Plant> Gradina::Encrypt(int key) {
    std::string result = "";
    std::ofstream g("Parole.out"); ///
    for (auto &plant:Plants){
        std::string a = plant->getName();
        for(char c:a ){
            char encrypted = c + key;
            result += encrypted;
            if(key >= 5){
                result += encrypted;
            }
        }
        g<<result<<std::endl;
    }
    std::ifstream f("Parole.out");
    if (f.is_open()) {
        std::string line;

        while (getline(f, line)) {
            if(line.length() < 4){
                throw Short();
            }
        }
    }
    f.close();
    g.close();
    return nullptr;
}
*/


std::shared_ptr<Plant>Gradina::Find_name(const std::string &name) {
    for(auto &plant :Plants){
        if(plant->getName() == name){
            std::cout<<"Exista: "<<plant->getName()<<std::endl;
            return nullptr;
        }
    }
    throw NoName();
}

std::shared_ptr<Plant> Gradina::Find_by_frunze(int nr) {
    for(auto &plant :Plants){
        if(plant->getNr_frunze() == nr){
            std::cout<<"Exista: "<<plant->getNr_frunze()<<std::endl;
            return nullptr;
        }
    }
    throw Weak();
}