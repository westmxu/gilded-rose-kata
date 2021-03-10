//
// Created by markd on 3/9/2021.
//

#include "ConjuredItem.h"

ConjuredItem::ConjuredItem(string name, int sellIn, int quality) : GenericItem(name, sellIn, quality) {
    QUALITY_CHANGE_BEFORE_SELLBY = -2;
    QUALITY_CHANGE_AFTER_SELLBY = -4;
}
