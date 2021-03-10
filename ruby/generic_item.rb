class GenericItem

  def initialize(item)
    @item = item
    @quality_rating = QualityRating.new(item.quality)
    @quality_change_before_sellby = -1
    @quality_change_after_sellby = -2
  end

  def update_quality
    if @item.sell_in.positive?
      @quality_rating.modify(@quality_change_before_sellby)
    else
      @quality_rating.modify(@quality_change_after_sellby)
    end
    @item.quality = @quality_rating.get
    --@item.sell_in
  end

  def item
    @item
  end
end