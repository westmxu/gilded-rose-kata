//
// Created by markd on 3/9/2021.
//

#include "ItemFactory.h"

GenericItem ItemFactory::classifyItem(Item item) {
    return newItem(item.name, item.sellIn, item.quality);
}

GenericItem ItemFactory::newItem(string name, int sellIn, int quality) {
    if(name.compare(CHEESE_NAME)){
        return newCheeseItem(name, sellIn, quality);
    }
    else if(name.compare(LEGENDARY_NAME)){
        return newLegendaryItem(name, sellIn, quality);
    }
    else if(name.compare(TICKET_NAME)){
        return newTicketItem(name, sellIn, quality);
    }
    else if(name.find(CONJURED_FLAG) != std::string::npos){
        return newConjuredItem(name, sellIn, quality);
    }
    else{
        return newGenericItem(name, sellIn, quality);
    }
}

GenericItem ItemFactory::newGenericItem(string name, int sellIn, int quality) {
    return GenericItem(name, sellIn, quality);
}

CheeseItem ItemFactory::newCheeseItem(string name, int sellIn, int quality) {
    return CheeseItem(name, sellIn, quality);
}

LegendaryItem ItemFactory::newLegendaryItem(string name, int sellIn, int quality) {
    return LegendaryItem(name, sellIn, quality);
}

TicketItem ItemFactory::newTicketItem(string name, int sellIn, int quality) {
    return TicketItem(name, sellIn, quality);
}

ConjuredItem ItemFactory::newConjuredItem(string name, int sellIn, int quality) {
    return ConjuredItem(name, sellIn, quality);
}
