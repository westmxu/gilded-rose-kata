package com.gildedrose;

/**
 *
 * @author markd
 */
public class GenericItem extends Item{
    
    QualityRating qualityRating;
    int QUALITY_CHANGE_BEFORE_SELLBY;
    int QUALITY_CHANGE_AFTER_SELLBY;
    
    public GenericItem(String name, int sellIn, int quality) {
        super(name, sellIn, quality);
        qualityRating = new QualityRating(quality);
        QUALITY_CHANGE_BEFORE_SELLBY = -1;
        QUALITY_CHANGE_AFTER_SELLBY = -2;
    }
    
    public void updateQuality(){
        if(sellIn > 0) {
            qualityRating.modify(QUALITY_CHANGE_BEFORE_SELLBY);
        }
        else{
            qualityRating.modify(QUALITY_CHANGE_AFTER_SELLBY);
        }
        quality = qualityRating.get();
        sellIn--;
    }
    
}
