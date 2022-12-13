//
// Created by Teodor-Daniel on 12.12.2022.
//
#include "../header/Weak.h"
const char *Weak::what() const noexcept {
    return "Nu exista acest nr de frunze";
}

void Weak::Print(std::ostream &os) const {
    os<<"Nu exista acest nr de frunze";
}
