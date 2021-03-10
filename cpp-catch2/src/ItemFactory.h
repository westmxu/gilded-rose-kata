//
// Created by markd on 3/9/2021.
//

#ifndef GILDEDROSEKATA_ITEMFACTORY_H
#define GILDEDROSEKATA_ITEMFACTORY_H


#include "GenericItem.h"
#include "CheeseItem.h"
#include "TicketItem.h"
#include "ConjuredItem.h"
#include "LegendaryItem.h"

class ItemFactory {
private:
    std::string CHEESE_NAME = "Aged Brie";
    std::string LEGENDARY_NAME = "Sulfuras, Hand of Ragnaros";
    std::string TICKET_NAME = "Backstage passes to a TAFKAL80ETC concert";
    std::string CONJURED_FLAG = "Conjured";

public:
    GenericItem classifyItem(Item item);
    GenericItem newItem(string name, int sellIn, int quality);
    static GenericItem newGenericItem(string name, int sellIn, int quality);
    static CheeseItem newCheeseItem(string name, int sellIn, int quality);
    static LegendaryItem newLegendaryItem(string name, int sellIn, int quality);
    static TicketItem newTicketItem(string name, int sellIn, int quality);
    static ConjuredItem newConjuredItem(string name, int sellIn, int quality);
};


#endif //GILDEDROSEKATA_ITEMFACTORY_H
