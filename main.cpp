#include "ColorCoderTests.h"

int main() {
    // Run tests to validate color pair to number and number to color pair conversions
    testNumberToPair(4, TeleCommuColorCoder::WHITE, TeleCommuColorCoder::BROWN);
    testNumberToPair(5, TeleCommuColorCoder::WHITE, TeleCommuColorCoder::SLATE);

    testPairToNumber(TeleCommuColorCoder::BLACK, TeleCommuColorCoder::ORANGE, 12);
    testPairToNumber(TeleCommuColorCoder::VIOLET, TeleCommuColorCoder::SLATE, 25);

    return 0;
}
