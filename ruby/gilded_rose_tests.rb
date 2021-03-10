require File.join(File.dirname(__FILE__), 'gilded_rose')
require 'test/unit'

class TestUntitled < Test::Unit::TestCase

  def test_generic_item_1
    items = [Item.new("foo", 0, 0)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "foo, -1, 0"
  end

  def test_generic_item_2
    items = [Item.new("foo", 1, 3)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "foo, 0, 2"
    app.update_quality
    assert_equal items[0].to_s, "foo, -1, 0"
    app.update_quality
    assert_equal items[0].to_s, "foo, -2, 0"
  end

  def test_generic_item_3
    items = [Item.new("foo", 1, 2)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "foo, 0, 1"
    app.update_quality
    assert_equal items[0].to_s, "foo, -1, 0"
  end

  def test_generic_item_4
    items = [Item.new("foo", 5, 2)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "foo, 4, 1"
    app.update_quality
    assert_equal items[0].to_s, "foo, 3, 0"
    app.update_quality
    assert_equal items[0].to_s, "foo, 2, 0"
  end

  def test_cheese_item_1
    items = [Item.new("Aged Brie", 1, 5)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, 0, 6"
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, -1, 8"
  end

  def test_cheese_item_2
    items = [Item.new("Aged Brie", 3, 48)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, 2, 49"
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, 1, 50"
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, 0, 50"
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, -1, 50"
  end

  def test_cheese_item_3
    items = [Item.new("Aged Brie", 1, 48)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, 0, 49"
    app.update_quality
    assert_equal items[0].to_s, "Aged Brie, -1, 50"
  end

  def test_legendary_item_1
    items = [Item.new("Sulfuras, Hand of Ragnaros", -1, 80)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Sulfuras, Hand of Ragnaros, 0, 80"
  end

  def test_ticket_item_1
    items = [Item.new("Backstage passes to a TAFKAL80ETC concert", 15, 15)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 14, 16"
    (1..4).each do |i|
      app.update_quality
    end
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 10, 20"
    (1..5).each do |i|
      app.update_quality
    end
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 5, 30"
    (1..5).each do |i|
      app.update_quality
    end
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 0, 45"
    app.update_quality
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, -1, 0"
  end

  def test_ticket_item_2
    items = [Item.new("Backstage passes to a TAFKAL80ETC concert", 15, 46)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 14, 47"
    (1..4).each do |i|
      app.update_quality
    end
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 10, 50"
  end

  def test_ticket_item_3
    items = [Item.new("Backstage passes to a TAFKAL80ETC concert", 15, 36)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 14, 37"
    (1..9).each do |i|
      app.update_quality
    end
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 5, 50"
  end

  def test_ticket_item_4
    items = [Item.new("Backstage passes to a TAFKAL80ETC concert", 15, 21)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 14, 22"
    (1..14).each do |i|
      app.update_quality
    end
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, 0, 50"
    app.update_quality
    assert_equal items[0].to_s, "Backstage passes to a TAFKAL80ETC concert, -1, 0"
  end

  def test_conjured_item_1
    items = [Item.new("Conjured item", 1, 8)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Conjured item, 0, 6"
    app.update_quality
    assert_equal items[0].to_s, "Conjured item, -1, 2"
  end

  def test_conjured_item_2
    items = [Item.new("Conjured item", 3, 3)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Conjured item, 2, 1"
    app.update_quality
    assert_equal items[0].to_s, "Conjured item, 1, 0"
  end

  def test_conjured_item_3
    items = [Item.new("Conjured item", 1, 8)]
    app = GildedRose.new(items)
    app.update_quality
    assert_equal items[0].to_s, "Conjured item, 0, 6"
    app.update_quality
    assert_equal items[0].to_s, "Conjured item, -1, 2"
    app.update_quality
    assert_equal items[0].to_s, "Conjured item, -2, 0"
  end
end