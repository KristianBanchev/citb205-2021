#ifndef LAB1_TEXTPRINTER_H
#define LAB1_TEXTPRINTER_H

#include <iostream>

#include "invoice.h"


class TextPrinter {
    public:
    void print(std::ostream &out, Invoice incoive);
};


#endif //LAB1_TEXTPRINTER_H
