package com.gildedrose;

class GildedRose {
    Item[] items;

    public GildedRose(Item[] items) {
        this.items = items;
        for (int i =0; i< this.items.length; i++){
            this.items[i] = ItemFactory.classifyItem(this.items[i]);
        }
    }

    public void updateQuality() {
        for (int i = 0; i < items.length; i++) {
            GenericItem genItem = (GenericItem) items[i];
            genItem.updateQuality();
            items[i] = genItem;
        }
    }
}