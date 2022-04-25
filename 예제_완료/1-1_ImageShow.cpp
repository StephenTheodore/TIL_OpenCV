#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    //Hello OpenCV
    //Matrix를 사용하여 이미지 출력
    Mat srcImg = imread("/Img/starry night.jpg", IMREAD_GRAYSCALE);
    if (srcImg.empty())
        return -1;

    imshow("Img", srcImg);

    waitKey();
    return 0;
}