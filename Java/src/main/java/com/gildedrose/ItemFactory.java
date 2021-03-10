package com.gildedrose;

/**
 *
 * @author markd
 */
public final class ItemFactory {
    
    private static final String CHEESE_NAME = "Aged Brie";
    private static final String LEGENDARY_NAME = "Sulfuras, Hand of Ragnaros";
    private static final String TICKET_NAME = "Backstage passes to a TAFKAL80ETC concert";
    private static final String CONJURED_FLAG = "Conjured";
    
    public static GenericItem classifyItem(Item item){
        return newItem(item.name, item.sellIn, item.quality);
    }
    
    public static GenericItem newItem(String name, int sellIn, int quality){
        if(name.equals(CHEESE_NAME)){
            return newCheeseItem(name, sellIn, quality);
        }
        else if(name.equals(LEGENDARY_NAME)){
            return newLegendaryItem(name, sellIn, quality);
        }
        else if(name.equals(TICKET_NAME)){
            return newTicketItem(name, sellIn, quality);
        }
        else if(name.contains(CONJURED_FLAG)){
            return newConjuredItem(name, sellIn, quality);
        }
        else{
            return newGenericItem(name, sellIn, quality);
        }
    }
    
    public static GenericItem newGenericItem(String name, int sellIn, int quality){
        return new GenericItem(name, sellIn, quality);
    }
    
    public static CheeseItem newCheeseItem(String name, int sellIn, int quality){
        return new CheeseItem(name, sellIn, quality);
    }
    
    public static LegendaryItem newLegendaryItem(String name, int sellIn, int quality){
        return new LegendaryItem(name, sellIn, quality);
    }
    
    public static TicketItem newTicketItem(String name, int sellIn, int quality){
        return new TicketItem(name, sellIn, quality);
    }
    
    public static ConjuredItem newConjuredItem(String name, int sellIn, int quality){
        return new ConjuredItem(name, sellIn, quality);
    }
}
