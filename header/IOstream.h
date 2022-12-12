//
// Created by Teodor-Daniel on 12.12.2022.
//

#ifndef OOP_IOSTREAM_H
#define OOP_IOSTREAM_H
#include "iostream"
class IOstream{
protected:
    virtual void Print(std::ostream& os)const = 0;
    virtual ~IOstream();

    friend std::ostream& operator<<(std::ostream& os , const IOstream& obiect);
};
#endif //OOP_IOSTREAM_H
