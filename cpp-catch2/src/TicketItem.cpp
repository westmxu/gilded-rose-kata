//
// Created by markd on 3/9/2021.
//

#include "TicketItem.h"

TicketItem::TicketItem(string name, int sellIn, int quality) : GenericItem(name, sellIn, quality) {}

void TicketItem::updateQuality() {
    int qualityChange = 0;
    if(sellIn > 10){
        qualityChange = 1;
    }
    else if (sellIn > 5) {
        qualityChange = 2;
    }
    else if (sellIn > 0) {
        qualityChange = 3;
    }
    else{
        qualityChange = -quality;
    }
    qualityRating.modify(qualityChange);
    quality = qualityRating.get();
    sellIn--;
}


