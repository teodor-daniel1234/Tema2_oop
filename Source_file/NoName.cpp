//
// Created by Teodor-Daniel on 12.12.2022.
//

#include "../header/NoName.h"


const char *NoName::what() const noexcept {
    return "Nu exista aceast nume de planta";
}

void NoName::Print(std::ostream &os) const {
    os<<"Nu exista aceast nume de planta";
}
