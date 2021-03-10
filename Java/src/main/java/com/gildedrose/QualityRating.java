package com.gildedrose;

/**
 *
 * @author markd
 */
public class QualityRating {
    
    private int quality;
    private final int MAX_QUALITY = 50;
    private final int MIN_QUALITY = 0;
    
    public QualityRating(int initialQuality){
        quality = initialQuality;
    }
    
    public void modify(int valueToAdd){
        if(valueToAdd == 0){
            return;
        }
        int newQuality = quality + valueToAdd;
        if(newQuality > MAX_QUALITY){
            quality = MAX_QUALITY;
        }
        else if(newQuality < MIN_QUALITY){
            quality = MIN_QUALITY;
        }
        else {
            quality = newQuality;
        }
    }
    
    public int get(){
        return quality;
    }

    public void set(int newQuality) {
        quality = newQuality;
    }
}
