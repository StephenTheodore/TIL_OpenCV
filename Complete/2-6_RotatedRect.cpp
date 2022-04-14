#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // BingleBingle

    Point2f ptCenter(200.0f, 200.0f);
    Size size(100, 200);

    RotatedRect rt1(ptCenter, size, 45.0f);
    RotatedRect rt2(ptCenter, size, 135.0f);

    Point2f points1[4];
    Point2f points2[4];
    rt1.points(points1);
    rt2.points(points2);
    Rect rt3 = rt1.boundingRect();
    Rect rt4 = rt2.boundingRect();

    Mat img(400, 400, CV_8UC3, Scalar(255, 255, 255));
    rectangle(img, rt3,Scalar(0,0,0),-1);
    for (int i = 0; i < 4; i++)
    {
        line(img, points1[i], points1[(i + 1) % 4], Scalar(255, 0, 255),2);   
        line(img, points2[i], points2[(i + 1) % 4], Scalar(0, 255, 255),2);
    }
    circle(img,ptCenter,5,Scalar(255,255,255),2);
    imshow("Image",img);
    waitKey();

    return 0;
}