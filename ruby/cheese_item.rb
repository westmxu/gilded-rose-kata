class CheeseItem < GenericItem

  def initialize(item)
    super(item)
    @quality_change_before_sellby = 1
    @quality_change_after_sellby = 2
  end
end