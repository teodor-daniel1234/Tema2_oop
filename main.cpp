#include <iostream>
#include "./header/Gradina.h"
#include "./header/Copac.h"
#include "./header/Floare.h"
int main() {
    /*
    auto copac1 = std::make_shared<Copac>("SuperMar", 100, 5);
    Gradina::addPlant(copac1);
    Gradina::addPlant(copac1);
    Gradina::Afisare();
     */

bool Meniu = true;
while(Meniu){
    int input;
    std::cout<<"MAIN MENU:"<<std::endl;
    std::cout<<"Pentru operatii cu copaci apasati 1"<<std::endl;
    std::cout<<"Pentru operatii cu flori apasati 2"<<std::endl;
    std::cout<<"Pentru citirea a n plante apasati 3"<<std::endl;
    std::cout<<"Pentru a iesi 4"<<std::endl;
    std::cin>>input;

    switch (input) {
        case 1:{
            int opt1 = -1;
            while(opt1 < 4) {
                std::cout << "Pentru a crea  copac apasati 0" << std::endl;
                std::cout << "Pentru a crea 2 copaci apasati 1" << std::endl;
                std::cout << "Pentru a iesi din meniul de copaci apasti 4" << std::endl;
                std::cin >> opt1;
                if(opt1 == 0){
                    Copac copac0("Cais",200,7);
                    int x{},y{};
                    std::string a;
                    std::cout<<"Numele copacului nr de frunze si inaltimea"<<std::endl;
                    std::cin>>a; std::cin>>x; std::cin>>y;
                    copac0.setName(a);
                    copac0.setNr_frunze(x);
                    copac0.SetInaltime(y);
                    copac0.getName(); copac0.getNr_frunze(); copac0.GetInaltime();
                    copac0.Fotosinteza();
                }

                if(opt1 == 1){
                    Copac copac1("Mar",100,5);
                    Copac copac2("Prun", 150, 8);
                    std::cout <<"Pentru a afisa copacii apasati 2" << std::endl;
                    std::cout <<"Pentru a '=' copacii apasati 3" << std::endl;
                    std::cin>>opt1;
                    if(opt1 == 2){
                        std::cout<<copac1<<"   "<<copac2;
                    }
                    if(opt1 == 3){
                        copac1 = copac2;
                        std::cout<<copac1<<"   "<<copac2;
                    }
                }
                if(opt1 == 4){
                    break;
                }
            }
            break;
        }

        case 2:{
            int opt2 = -1;
            while(opt2 < 4) {
                std::cout << "Pentru a crea  o floare apasati 0" << std::endl;
                std::cout << "Pentru a crea 2 flori apasati 1" << std::endl;
                std::cout << "Pentru a iesi din meniul de flori apasti 4" << std::endl;
                std::cin >> opt2;
                if(opt2 == 0){
                    Floare floare0("Lalea",2,3);
                    int x{},y{};
                    std::string a;
                    std::cout<<"Numele florii nr de frunze si nr de petale"<<std::endl;
                    std::cin>>a; std::cin>>x; std::cin>>y;
                    floare0.setName(a);
                    floare0.setNr_frunze(x);
                    floare0.SetPetale(y);
                    floare0.getName(); floare0.getNr_frunze(); floare0.GetPetale();
                    floare0.Fotosinteza();
                }

                if(opt2 == 1){
                    Floare floare1("Lalea",2,3);
                    Floare floare2("Trandafir", 5, 5);
                    std::cout <<"Pentru a afisa florile apasati 2" << std::endl;
                    std::cout <<"Pentru a '=' florile apasati 3" << std::endl;
                    std::cin>>opt2;
                    if(opt2 == 2){
                        std::cout<<floare1<<"   "<<floare2;
                    }
                    if(opt2 == 3){
                        floare1 = floare2;
                        std::cout<<floare1<<"   "<<floare2;
                    }
                }
                if(opt2 == 4){
                    break;
                }
            }
            break;
        }
        case 3: {
            int opt3 = -1;
            while (opt3 < 4) {
                std::cout << "Pentru a crea  un vector de plante apasati 0" << std::endl;
                std::cout << "Pentru a iesi din meniul Gradina apasti 4" << std::endl;
                std::cin >> opt3;
                if (opt3 == 0) {
                    int nr{};
                    std::cout << "Cate plante doriti?" << std::endl;
                    std::cin >> nr;
                    int cnt{};
                    for (int i = 0; i < nr; i++) {
                        std::cout << "Daca doriti un copac apasati 1 daca doriti o planta apasati 2 " << std::endl;
                        std::cin >> cnt;
                        if (cnt == 1) {
                            auto copacbuff = std::make_shared<Copac>("Default", 0, 0);
                            int x{};
                            std::string a;
                            std::cout << "Numele copacului nr de frunze" << std::endl;
                            std::cin >> a;
                            std::cin >> x;
                            copacbuff->setName(a);
                            copacbuff->setNr_frunze(x);
                            Gradina::addPlant(copacbuff);
                        }
                        if (cnt == 2) {
                            auto floarebuff = std::make_shared<Floare>("Default", 0, 0);
                            int x{};
                            std::string a;
                            std::cout << "Numele florii nr de frunze" << std::endl;
                            std::cin >> a;
                            std::cin >> x;
                            floarebuff->setName(a);
                            floarebuff->setNr_frunze(x);
                            Gradina::addPlant(floarebuff);
                        }
                    }
                    Gradina::Afisare();
                    try {
                        Gradina::Find_name("Mar");

                    } catch (const NoName &err) {
                        std::cout << err.what()<<std::endl;
                    }
                    try {
                        Gradina::Find_by_frunze(2);

                    } catch (const Weak &err) {
                        std::cout << err.what()<<std::endl;
                    }
                }
                if(opt3 == 4){
                    break;
                }
            }
            break;
        }


        case 4:{
            Meniu = false;
            break;
        }
    }
}

/*


    auto copac1 = std::make_shared<Copac>("Mar", 100, 5);
     copac1->GetInaltime();
    auto floare1 = std::make_shared<Floare>("Lalea", 4, 4);
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

    std::ifstream f("Parole.out");
    if (f.is_open()) {
        std::string line;

        // Read each line from the input file and write it to the output file
        while (getline(f, line)) {
            std::cout << line << std::endl;
        }
    }

    try {
        Gradina::Find_name("Mar");

    } catch (const NoName &err) {
        std::cout << err.what()<<std::endl;
    }
    try {
        Gradina::Find_by_frunze(2);

    } catch (const Weak &err) {
        std::cout << err.what()<<std::endl;
    }
    */
    return 0;
}