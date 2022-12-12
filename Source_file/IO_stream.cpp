//
// Created by Teodor-Daniel on 12.12.2022.
//

#include "../header/IOstream.h"

IOstream::~IOstream() = default;

std::ostream &operator<<(std::ostream &os, const IOstream &obiect) {
    obiect.Print(os);
    return  os;
}
