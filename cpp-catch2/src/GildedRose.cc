#include "GildedRose.h"

GildedRose::GildedRose(vector<GenericItem>& items) : items(items)
{
    ItemFactory itemFactory;
    for (int i =0; i< items.size(); i++){
        items[i] = itemFactory.classifyItem(items[i]);
    }
}
    
void GildedRose::updateQuality() 
{
    for (int i = 0; i < items.size(); i++)
    {
        items[i].updateQuality();
    }
}
