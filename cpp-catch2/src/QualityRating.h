//
// Created by markd on 3/9/2021.
//

#ifndef GILDEDROSEKATA_QUALITYRATING_H
#define GILDEDROSEKATA_QUALITYRATING_H


class QualityRating {
private:
    int quality;
    int MAX_QUALITY = 50;
    int MIN_QUALITY = 0;

public:
    explicit QualityRating(int initialQuality);
    void modify(int valueToAdd);
    int get();
    void set(int newQuality);
};


#endif //GILDEDROSEKATA_QUALITYRATING_H
