//
// Created by Teodor-Daniel on 12.12.2022.
//
#include "../header/Gradina.h"

std::vector<std::shared_ptr<Plant>> Gradina::Plants;///downcast

void Gradina::addPlant(std::shared_ptr<Plant> plant) {
    Plants.push_back(plant);
}


std::shared_ptr<Plant> Gradina::Encrypt(int key) {
    std::string result = "";
    std::ofstream g("Parole.out"); /// salvez parolele
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
        // Read each line from the input file and write it to the output file
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

///Functie care sa ordoneze dupa numarul de frunze;

///Functie care cauta dupa numarul de frunze si exceptie;
std::shared_ptr<Plant>Gradina::Find_name(const std::string &name) {
    for(auto &plant :Plants){
        if(plant->getName() == name){
            return plant;
        }
    }
    throw NoName();
}

std::shared_ptr<Plant> Gradina::Find_by_power(int nr) {
    for(auto &plant :Plants){
        if(plant->getNr_frunze() == nr){
            return plant;
        }
    }
    throw Weak();
}