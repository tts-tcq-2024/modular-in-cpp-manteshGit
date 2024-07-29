#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>
#include "ColorCoder.h"

namespace TeleCommuColorCoder 
{
    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor() const;
            MinorColor getMinor() const;
            std::string ToString() const;
    };
}

#endif // COLORPAIR_H
