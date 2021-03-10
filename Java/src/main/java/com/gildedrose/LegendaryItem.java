package com.gildedrose;

/**
 *
 * @author markd
 */
public class LegendaryItem extends GenericItem{
    
    private final int DEFAULT_QUALITY = 80;
    
    public LegendaryItem(String name, int sellIn, int quality) {
        super(name, 0, quality);
        QUALITY_CHANGE_BEFORE_SELLBY = 0;
        QUALITY_CHANGE_AFTER_SELLBY = 0;
    }
    
    public LegendaryItem(String name) {
        super(name, 0, 0);
        quality = DEFAULT_QUALITY;
        qualityRating.set(DEFAULT_QUALITY);
        QUALITY_CHANGE_BEFORE_SELLBY = 0;
        QUALITY_CHANGE_AFTER_SELLBY = 0;
    }
    
    @Override
    public void updateQuality(){
        sellIn++;
        super.updateQuality();
    }
}
