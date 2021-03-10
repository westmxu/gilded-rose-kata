package com.gildedrose;

/**
 *
 * @author markd
 */
public class TicketItem extends GenericItem{
    
    public TicketItem(String name, int sellIn, int quality) {
        super(name, sellIn, quality);
    }
    
    @Override
    public void updateQuality(){
        int qualityChange = 0;
        if(sellIn > 10){
            qualityChange = 1;
        }
        else if (sellIn > 5) {
            qualityChange = 2;
        }
        else if (sellIn > 0) {
            qualityChange = 3;
        }
        else{
            qualityChange = -quality;
        }
        qualityRating.modify(qualityChange);
        quality = qualityRating.get();
        sellIn--;
    }
    
}
