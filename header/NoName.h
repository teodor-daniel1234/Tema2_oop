//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_NONAME_H
#define OOP_NONAME_H
#include "Gradina.h"
class NoName :public std::exception , public IOstream
{
public:
    NoName() = default;

    const char* what() const noexcept override;

    void Print(std::ostream &os) const override;
};
#endif //OOP_NONAME_H
