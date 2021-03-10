//
// Created by markd on 3/9/2021.
//

#include "LegendaryItem.h"

LegendaryItem::LegendaryItem(string name, int sellIn, int quality) : GenericItem(name, sellIn, quality) {
    sellIn = 0;
    QUALITY_CHANGE_BEFORE_SELLBY = 0;
    QUALITY_CHANGE_AFTER_SELLBY = 0;
}

void LegendaryItem::updateQuality() {
    sellIn++;
    GenericItem::updateQuality();
}
