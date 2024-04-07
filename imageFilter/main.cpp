#include "image.h"

int main()
{
    GrayScaleFilter gsf;
    Filter ft(&gsf);
    ft.apply("Sandeep kumar");
    return 0;
}