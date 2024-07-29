#ifndef COLORCODER_TESTS_H
#define COLORCODER_TESTS_H

#include "ColorCoder.h"

void testNumberToPair(int pairNumber,
    TeleCommuColorCoder::MajorColor expectedMajor,
    TeleCommuColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TeleCommuColorCoder::MajorColor major,
    TeleCommuColorCoder::MinorColor minor,
    int expectedPairNumber);

#endif // COLORCODER_TESTS_H
