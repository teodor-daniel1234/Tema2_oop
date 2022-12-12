//
// Created by Teodor-Daniel on 12.12.2022.
//

#include "../header/NoName.h"


const char *NoName::what() const noexcept {
    return "Nu e asa cv";
}

void NoName::Print(std::ostream &os) const {
    os<<"Nu avem";
}
