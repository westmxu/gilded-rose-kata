//
// Created by markd on 3/9/2021.
//

#ifndef GILDEDROSEKATA_CHEESEITEM_H
#define GILDEDROSEKATA_CHEESEITEM_H


#include "GenericItem.h"

class CheeseItem: public GenericItem {
public:
    CheeseItem(string name, int sellIn, int quality);
};


#endif //GILDEDROSEKATA_CHEESEITEM_H
