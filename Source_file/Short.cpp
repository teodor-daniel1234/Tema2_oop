//
// Created by Teodor-Daniel on 12.12.2022.
//
#include "../header/Short.h"
const char *Short::what() const noexcept {
    return "Key-ul folosit este prea scurt";
}

void Short::Print(std::ostream &os) const {
    os<<"Prea scurt";
}
