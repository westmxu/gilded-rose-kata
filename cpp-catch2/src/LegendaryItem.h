//
// Created by markd on 3/9/2021.
//

#ifndef GILDEDROSEKATA_LEGENDARYITEM_H
#define GILDEDROSEKATA_LEGENDARYITEM_H


#include "GenericItem.h"

class LegendaryItem: public GenericItem {
public:
    LegendaryItem(string name, int sellIn, int quality);
    void updateQuality() override;
};


#endif //GILDEDROSEKATA_LEGENDARYITEM_H
