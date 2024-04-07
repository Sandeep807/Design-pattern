#include<iostream>
using namespace std;

class ImageFilter
{
    public:
        virtual void applyFilter(const string&) = 0;
        virtual ~ImageFilter(){}
};

class GrayScaleFilter : public ImageFilter
{
    public:
        void applyFilter(const string&);
};

class SepiaFilter : public ImageFilter
{
    public:
        void applyFilter(const string&);
};

class Filter
{
    private:
        ImageFilter* imgf;
    public:
        Filter(ImageFilter*);
        void apply(const string&);
};