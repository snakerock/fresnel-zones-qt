
#include "fontscalablepushbutton.h"
#include "hidpiscaler.h"

#include <stdlib.h>


void FontScalablePushButton::resizeEvent (QResizeEvent *evt)
{
    QPushButton::resizeEvent (evt);
    if (_fontAdjusted)  return;

    QVector2D dpiScaling = HiDpiScaler::scalingFactors();
    auto mutableFont = this->font();
    mutableFont.setPixelSize (std::min (dpiScaling.x(), dpiScaling.y()) * 0.9 * this->fontMetrics().height());

    this->setFont (mutableFont);
    this->adjustSize();

    _fontAdjusted = true;
}


FontScalablePushButton::FontScalablePushButton (QWidget *parent) :
    QPushButton (parent)
{
}
