class ItemFactory

  CHEESE_NAME = 'Aged Brie'.freeze
  LEGENDARY_NAME = 'Sulfuras, Hand of Ragnaros'.freeze
  TICKET_NAME = 'Backstage passes to a TAFKAL80ETC concert'.freeze
  CONJURED_FLAG = 'Conjured'.freeze

  def self.classify_item(item)
    new_item(item.name, item.sell_in, item.quality)
  end

  def self.new_item(name, sell_in, quality)
    if name.eql?(CHEESE_NAME)
      CheeseItem.new(Item.new(name, sell_in, quality))
    elsif name.eql?(LEGENDARY_NAME)
      LegendaryItem.new(Item.new(name, 0, quality))
    elsif name.eql?(TICKET_NAME)
      TicketItem.new(Item.new(name, sell_in, quality))
    elsif name.include?(CONJURED_FLAG)
      ConjuredItem.new(Item.new(name, sell_in, quality))
    else
      GenericItem.new(Item.new(name, sell_in, quality))
    end
  end
end