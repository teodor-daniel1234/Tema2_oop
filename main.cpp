#include <iostream>
#include "./header/Gradina.h"
#include "./header/Copac.h"
#include "./header/Floare.h"
int main() {

    auto copac1 = std::make_shared<Copac>("SuperMar", 100, 5);
     copac1->Fotosinteza();
     copac1->GetInaltime();
    auto floare1 = std::make_shared<Floare>("Lalea", 2, 4);
    copac1->SetInaltime(100);
    floare1->SetPetale(5);
    floare1->GetPetale();
    Gradina::addPlant(copac1);
    Gradina::addPlant(floare1);
    try{
        Gradina::Encrypt(5);
    } catch (const Short &err){
        std::cout<<err.what()<<std::endl;
    }
/*
    std::ifstream f("Parole.out");
    if (f.is_open()) {
        std::string line;

        // Read each line from the input file and write it to the output file
        while (getline(f, line)) {
            std::cout << line << std::endl;
        }
    }
   */
    try {
        Gradina::Find_name("Mar");

    } catch (const NoName &err) {
        std::cout << err.what()<<std::endl;
    }
    try {
        Gradina::Find_by_power(2);

    } catch (const Weak &err) {
        std::cout << err.what()<<std::endl;
    }

    return 0;
}