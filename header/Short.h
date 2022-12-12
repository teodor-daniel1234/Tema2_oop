//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_SHORT_H
#define OOP_SHORT_H
#include "Gradina.h"

class Short : public std::exception, public IOstream{
public:
    Short() = default;
    const char* what() const noexcept override;

    void Print(std::ostream &os) const override;
};
#endif //OOP_SHORT_H
