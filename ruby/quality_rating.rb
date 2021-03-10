class QualityRating

  MAX_QUALITY = 50
  MIN_QUALITY = 0

  def initialize(quality)
    @quality = quality
  end

  def modify(value_to_add)
    if value_to_add.zero?
      return
    end

    new_quality = @quality + value_to_add
    @quality =
      if new_quality > MAX_QUALITY
        MAX_QUALITY
      elsif new_quality < MIN_QUALITY
        MIN_QUALITY
      else
        new_quality
      end
  end

  def get
    @quality
  end

  def set(new_quality)
    @quality = new_quality
  end
end
