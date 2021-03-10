//
// Created by markd on 3/9/2021.
//

#ifndef GILDEDROSEKATA_GENERICITEM_H
#define GILDEDROSEKATA_GENERICITEM_H

#include <string>
#include "Item.h"
#include "QualityRating.h"

class GenericItem : public Item {
public:
    QualityRating qualityRating = QualityRating(0);
    int QUALITY_CHANGE_BEFORE_SELLBY;
    int QUALITY_CHANGE_AFTER_SELLBY;

    GenericItem(string name, int sellIn, int quality);

    virtual void updateQuality();
};


#endif //GILDEDROSEKATA_GENERICITEM_H
