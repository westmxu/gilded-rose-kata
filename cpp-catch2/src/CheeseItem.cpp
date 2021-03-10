//
// Created by markd on 3/9/2021.
//

#include "CheeseItem.h"

CheeseItem::CheeseItem(string name, int sellIn, int quality) : GenericItem(name, sellIn, quality) {
    QUALITY_CHANGE_BEFORE_SELLBY = 1;
    QUALITY_CHANGE_AFTER_SELLBY = 2;
}
