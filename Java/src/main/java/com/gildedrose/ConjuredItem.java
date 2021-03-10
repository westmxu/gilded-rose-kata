package com.gildedrose;

/**
 *
 * @author markd
 */
public class ConjuredItem extends GenericItem{
    
    public ConjuredItem(String name, int sellIn, int quality) {
        super(name, sellIn, quality);
        QUALITY_CHANGE_BEFORE_SELLBY = -2;
        QUALITY_CHANGE_AFTER_SELLBY = -4;
    }
    
}
