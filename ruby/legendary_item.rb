class LegendaryItem < GenericItem

  def initialize(item)
    super(item)
    item.sell_in = 0
    @quality_change_before_sellby = 0
    @quality_change_after_sellby = 0
  end

  def update_quality; end
end
