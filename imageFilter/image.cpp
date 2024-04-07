#include "image.h"

void GrayScaleFilter ::applyFilter(const string& image)
{
    cout<<"Apply gray scale filter to image "<<image<<endl;
}

void SepiaFilter ::applyFilter(const string& image)
{
    cout<<"Apply sepia filter to image "<<image<<endl;
}

Filter ::Filter(ImageFilter* image) : imgf(image){}
void Filter ::apply(const string& image)
{
    imgf->applyFilter(image);
}