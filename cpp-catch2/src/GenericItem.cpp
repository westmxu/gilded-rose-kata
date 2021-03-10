//
// Created by markd on 3/9/2021.
//

#include "GenericItem.h"

GenericItem::GenericItem(string name, int sellIn, int quality) : Item(name, sellIn, quality) {
    qualityRating.set(quality);
    QUALITY_CHANGE_BEFORE_SELLBY = -1;
    QUALITY_CHANGE_AFTER_SELLBY = -2;
}

void GenericItem::updateQuality() {
    if(sellIn > 0) {
        qualityRating.modify(QUALITY_CHANGE_BEFORE_SELLBY);
    }
    else{
        qualityRating.modify(QUALITY_CHANGE_AFTER_SELLBY);
    }
    quality = qualityRating.get();
    sellIn--;
}


