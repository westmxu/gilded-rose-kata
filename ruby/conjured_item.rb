class ConjuredItem < GenericItem

  def initialize(item)
    super(item)
    @quality_change_before_sellby = -2
    @quality_change_after_sellby = -4
  end
end