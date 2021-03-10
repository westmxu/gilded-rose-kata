class TicketItem < GenericItem

  def update_quality
    quality_change =
      if @item.sell_in > 10
        1
      elsif @item.sell_in > 5
        2
      elsif @item.sell_in > 0
        3
      else
        -@item.quality
      end
    @quality_rating.modify(quality_change)
    @item.quality = @quality_rating.get
    --@item.sell_in
  end
end