package com.gildedrose;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

class GildedRoseTest {

    @Test
    void genericItem1() {
        Item[] items = new Item[] { new Item("foo", 0, 0) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("foo, -1, 0", app.items[0].toString());
    }
    
    @Test
    void genericItem2() {
        Item[] items = new Item[] { new Item("foo", 1, 3) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("foo, 0, 2", app.items[0].toString());
        app.updateQuality();
        assertEquals("foo, -1, 0", app.items[0].toString());
        app.updateQuality();
        assertEquals("foo, -2, 0", app.items[0].toString());
    }
    
    @Test
    void genericItem3() {
        Item[] items = new Item[] { new Item("foo", 1, 2) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("foo, 0, 1", app.items[0].toString());
        app.updateQuality();
        assertEquals("foo, -1, 0", app.items[0].toString());
    }
    
    void genericItem4() {
        Item[] items = new Item[] { new Item("foo", 5, 2) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("foo, 4, 1", app.items[0].toString());
        app.updateQuality();
        assertEquals("foo, 3, 0", app.items[0].toString());
        app.updateQuality();
        assertEquals("foo, 2, 0", app.items[0].toString());
    }
    
    @Test
    void cheeseItem1() {
        Item[] items = new Item[] { new Item("Aged Brie", 1, 5) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Aged Brie, 0, 6", app.items[0].toString());
        app.updateQuality();
        assertEquals("Aged Brie, -1, 8", app.items[0].toString());
    }
    
    @Test
    void cheeseItem2() {
        Item[] items = new Item[] { new Item("Aged Brie", 3, 48) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Aged Brie, 2, 49", app.items[0].toString());
        app.updateQuality();
        assertEquals("Aged Brie, 1, 50", app.items[0].toString());
        app.updateQuality();
        assertEquals("Aged Brie, 0, 50", app.items[0].toString());
        app.updateQuality();
        assertEquals("Aged Brie, -1, 50", app.items[0].toString());
    }
    
    @Test
    void cheeseItem3() {
        Item[] items = new Item[] { new Item("Aged Brie", 1, 48) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Aged Brie, 0, 49", app.items[0].toString());
        app.updateQuality();
        assertEquals("Aged Brie, -1, 50", app.items[0].toString());
    }
    
    @Test
    void legendaryItem1() {
        Item[] items = new Item[] { new Item("Sulfuras, Hand of Ragnaros", 0, 80) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Sulfuras, Hand of Ragnaros, 0, 80", app.items[0].toString());
        app.updateQuality();
        assertEquals("Sulfuras, Hand of Ragnaros, 0, 80", app.items[0].toString());
    }
    
    @Test
    void ticketItem1() {
        Item[] items = new Item[] { new Item("Backstage passes to a TAFKAL80ETC concert", 15, 15) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 14, 16", app.items[0].toString());
        for(int i = 0; i<4; i++){
            app.updateQuality();
        }
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 10, 20", app.items[0].toString());
        for(int i = 0; i<5; i++){
            app.updateQuality();
        }
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 5, 30", app.items[0].toString());
        for(int i = 0; i<5; i++){
            app.updateQuality();
        }
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 0, 45", app.items[0].toString());
        app.updateQuality();
        assertEquals("Backstage passes to a TAFKAL80ETC concert, -1, 0", app.items[0].toString());
    }
    
    @Test
    void ticketItem2() {
        Item[] items = new Item[] { new Item("Backstage passes to a TAFKAL80ETC concert", 15, 46) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 14, 47", app.items[0].toString());
        for(int i = 0; i<4; i++){
            app.updateQuality();
        }
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 10, 50", app.items[0].toString());
    }
    
    @Test
    void ticketItem3() {
        Item[] items = new Item[] { new Item("Backstage passes to a TAFKAL80ETC concert", 15, 36) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 14, 37", app.items[0].toString());
        for(int i = 0; i<9; i++){
            app.updateQuality();
        }
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 5, 50", app.items[0].toString());
    }
    
    @Test
    void ticketItem4() {
        Item[] items = new Item[] { new Item("Backstage passes to a TAFKAL80ETC concert", 15, 21) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 14, 22", app.items[0].toString());
        for(int i = 0; i<14; i++){
            app.updateQuality();
        }
        assertEquals("Backstage passes to a TAFKAL80ETC concert, 0, 50", app.items[0].toString());
        app.updateQuality();
        assertEquals("Backstage passes to a TAFKAL80ETC concert, -1, 0", app.items[0].toString());
    }
    
    @Test
    void conjuredItem1() {
        Item[] items = new Item[] { new Item("Conjured item", 1, 8) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Conjured item, 0, 6", app.items[0].toString());
        app.updateQuality();
        assertEquals("Conjured item, -1, 2", app.items[0].toString());
    }
    
    @Test
    void conjuredItem2() {
        Item[] items = new Item[] { new Item("Conjured item", 3, 3) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Conjured item, 2, 1", app.items[0].toString());
        app.updateQuality();
        assertEquals("Conjured item, 1, 0", app.items[0].toString());
    }
    
    @Test
    void conjuredItem3() {
        Item[] items = new Item[] { new Item("Conjured item", 1, 8) };
        GildedRose app = new GildedRose(items);
        app.updateQuality();
        assertEquals("Conjured item, 0, 6", app.items[0].toString());
        app.updateQuality();
        assertEquals("Conjured item, -1, 2", app.items[0].toString());
        app.updateQuality();
        assertEquals("Conjured item, -2, 0", app.items[0].toString());
    }

}
