//
// Created by markd on 3/9/2021.
//

#ifndef GILDEDROSEKATA_TICKETITEM_H
#define GILDEDROSEKATA_TICKETITEM_H


#include "GenericItem.h"

class TicketItem: public GenericItem {
public:
    TicketItem(string name, int sellIn, int quality);

    void updateQuality() override;
};


#endif //GILDEDROSEKATA_TICKETITEM_H
