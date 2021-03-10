#include <string>
#include <vector>
#include "ItemFactory.h"

using namespace std;

class GenericItem;

class GildedRose
{
public:
    vector<GenericItem> & items;
    GildedRose(vector<GenericItem>& items);
    
    void updateQuality();
};

