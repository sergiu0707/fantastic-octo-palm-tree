#ifndef SEGMENT_H
#define SEGMENT_H


class Segment
{
    public:
        float x1,y1,x2,y2;
        float LungimeSegment();
        Segment InversulSegmentului();


        Segment();
        virtual ~Segment();

    protected:

    private:
};

#endif // SEGMENT_H
