#include <iostream>
#include <cassert>
#include "ColorCoderTests.h"
#include "ColorCoder.h"
#include "ColorPair.h" // Include full definition of ColorPair

void testNumberToPair(int pairNumber,
    TeleCommuColorCoder::MajorColor expectedMajor,
    TeleCommuColorCoder::MinorColor expectedMinor)
{
    TeleCommuColorCoder::ColorPair colorPair =
        TeleCommuColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);  // Assert that major color matches expected
    assert(colorPair.getMinor() == expectedMinor);  // Assert that minor color matches expected
}

void testPairToNumber(
    TeleCommuColorCoder::MajorColor major,
    TeleCommuColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TeleCommuColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);  // Assert that pair number matches expected
}
