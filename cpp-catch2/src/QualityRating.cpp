//
// Created by markd on 3/9/2021.
//

#include "QualityRating.h"

QualityRating::QualityRating(int initialQuality) {
    quality = initialQuality;
}

void QualityRating::modify(int valueToAdd) {
    if (valueToAdd == 0){
        return;
    }
    int newQuality = quality + valueToAdd;
    if(newQuality > MAX_QUALITY){
        quality = MAX_QUALITY;
    }
    else if(newQuality < MIN_QUALITY){
        quality = MIN_QUALITY;
    }
    else {
        quality = newQuality;
    }
}

int QualityRating::get() {
    return quality;
}

void QualityRating::set(int newQuality) {
    quality = newQuality;
}
