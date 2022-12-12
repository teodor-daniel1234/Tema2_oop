//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_WEAK_H
#define OOP_WEAK_H
#include "Gradina.h"

class Weak : public std::exception, public IOstream{
public:
    Weak() = default;
    const char* what() const noexcept override;

    void Print(std::ostream &os) const override;
};
#endif //OOP_WEAK_H
