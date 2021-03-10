package com.gildedrose;

/**
 *
 * @author markd
 */
public class CheeseItem extends GenericItem{
    
    public CheeseItem(String name, int sellIn, int quality) {
        super(name, sellIn, quality);
        QUALITY_CHANGE_BEFORE_SELLBY = 1;
        QUALITY_CHANGE_AFTER_SELLBY = 2;
    }
}
