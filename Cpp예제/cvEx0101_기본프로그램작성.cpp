#include <opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    Mat srcImg = imread("../Img/starry night.jpg", IMREAD_GRAYSCALE);
    if (srcImg.empty())
        return -1;

    imshow("Img", srcImg);
    waitKey();
    return 0;
}