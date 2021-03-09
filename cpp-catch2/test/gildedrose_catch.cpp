#include <catch2/catch.hpp>
#include "ApprovalTests.hpp"

#include "GildedRose.h"

std::ostream& operator<<(std::ostream& os, const Item& obj)
{
    return os
            << obj.name
            << ", " << obj.sellIn
            << ", " << obj.quality;
}

string toString(const Item& item)
{
    ostringstream stream;
    stream << item;
    return stream.str();
}

TEST_CASE("genericItem1") {
    vector<Item> items;
    items.push_back(Item("foo", 0, 0));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("foo, -1, 0" == toString(app.items[0]));
}

TEST_CASE("genericItem2") {
    vector<Item> items;
    items.push_back(Item("foo", 1, 3));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("foo, 0, 2" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("foo, -1, 0" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("foo, -2, 0" == toString(app.items[0]));
}

TEST_CASE("genericItem3") {
    vector<Item> items;
    items.push_back(Item("foo", 1, 2));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("foo, 0, 1" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("foo, -1, 0" == toString(app.items[0]));
}

TEST_CASE("genericItem4") {
    vector<Item> items;
    items.push_back(Item("foo", 5, 2));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("foo, 4, 1" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("foo, 3, 0" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("foo, 2, 0" == toString(app.items[0]));
}

TEST_CASE("cheeseItem1") {
    vector<Item> items;
    items.push_back(Item("Aged Brie", 1, 5));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Aged Brie, 0, 6" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Aged Brie, -1, 8" == toString(app.items[0]));
}

TEST_CASE("cheeseItem2") {
    vector<Item> items;
    items.push_back(Item("Aged Brie", 3, 48));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Aged Brie, 2, 49" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Aged Brie, 1, 50" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Aged Brie, 0, 50" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Aged Brie, -1, 50" == toString(app.items[0]));
}

TEST_CASE("cheeseItem3") {
    vector<Item> items;
    items.push_back(Item("Aged Brie", 1, 48));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Aged Brie, 0, 49" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Aged Brie, -1, 50" == toString(app.items[0]));
}

TEST_CASE("legendaryItem1") {
    vector<Item> items;
    items.push_back(Item("Sulfuras, Hand of Ragnaros", 0, 80));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Sulfuras, Hand of Ragnaros, 0, 80" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Sulfuras, Hand of Ragnaros, 0, 80" == toString(app.items[0]));
}

TEST_CASE("ticketItem1") {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 15, 15));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 14, 16" == toString(app.items[0]));
    for(int i = 0; i<4; i++){
        app.updateQuality();
    }
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 10, 20" == toString(app.items[0]));
    for(int i = 0; i<5; i++){
        app.updateQuality();
    }
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 5, 30" == toString(app.items[0]));
    for(int i = 0; i<5; i++){
        app.updateQuality();
    }
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 0, 45" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, -1, 0" == toString(app.items[0]));
}

TEST_CASE("ticketItem2") {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 15, 46));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 14, 47" == toString(app.items[0]));
    for(int i = 0; i<4; i++){
        app.updateQuality();
    }
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 10, 50" == toString(app.items[0]));
}

TEST_CASE("ticketItem3") {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 15, 36));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 14, 37" == toString(app.items[0]));
    for(int i = 0; i<9; i++){
        app.updateQuality();
    }
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 5, 50" == toString(app.items[0]));
}

TEST_CASE("ticketItem4") {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 15, 21));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 14, 22" == toString(app.items[0]));
    for(int i = 0; i<14; i++){
        app.updateQuality();
    }
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, 0, 50" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Backstage passes to a TAFKAL80ETC concert, -1, 0" == toString(app.items[0]));
}

TEST_CASE("conjuredItem1") {
    vector<Item> items;
    items.push_back(Item("Conjured item", 1, 8));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Conjured item, 0, 6" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Conjured item, -1, 2" == toString(app.items[0]));
}

TEST_CASE("conjuredItem2") {
    vector<Item> items;
    items.push_back(Item("Conjured item", 3, 3));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Conjured item, 2, 1" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Conjured item, 1, 0" == toString(app.items[0]));
}

TEST_CASE("conjuredItem3") {
    vector<Item> items;
    items.push_back(Item("Conjured item", 1, 8));
    GildedRose app(items);
    app.updateQuality();
    REQUIRE("Conjured item, 0, 6" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Conjured item, -1, 2" == toString(app.items[0]));
    app.updateQuality();
    REQUIRE("Conjured item, -2, 0" == toString(app.items[0]));
}