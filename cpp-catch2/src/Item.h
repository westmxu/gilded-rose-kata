//
// Created by markd on 3/10/2021.
//

#ifndef GILDEDROSEKATA_ITEM_H
#define GILDEDROSEKATA_ITEM_H

#endif //GILDEDROSEKATA_ITEM_H


using namespace std;

class Item
{
public:
    string name;
    int sellIn;
    int quality;
    Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality)
    {}
};
