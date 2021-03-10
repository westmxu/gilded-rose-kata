require './item_factory'
class GildedRose

  def initialize(items)
    @items = items
  end

  def update_quality()
    (1..@items.length()).each do |i|
      classifiedItem = ItemFactory.classify_item(@items[i])
      classifiedItem.updateQuality
      @items[i] = classifiedItem.item
    end
  end
end

class Item
  attr_accessor :name, :sell_in, :quality

  def initialize(name, sell_in, quality)
    @name = name
    @sell_in = sell_in
    @quality = quality
  end

  def to_s()
    "#{@name}, #{@sell_in}, #{@quality}"
  end
end
