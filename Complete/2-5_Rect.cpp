#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Rect template

    Rect rt1(100, 100, 320, 240), rt2(200, 200, 320, 240);
    Point pt1(100, 100);
    Size size(100, 100);

    Rect rt3 = rt1 + pt1;
    Rect rt4 = rt1 + size;

    cout << "rt1 : " << rt1.x << "," << rt1.y << "," << rt1.width << "," << rt1.height << endl;
    cout << "rt1 : " << rt1 << endl;
    cout << "rt2 : " << rt2 << endl;
    cout << "rt3 : " << rt3 << endl;
    cout << "rt4 : " << rt4 << endl;
    Point ptTopLeft = rt1.tl();
    Point ptBottemRight = rt1.br();
    cout << "rt1 tl : " << ptTopLeft << endl;
    cout << "rt1 br : " << ptBottemRight << endl;

    Point pt2(200, 200);
    if (rt1.contains(pt2))
        cout << "rt1 contains pt2" << endl;

    Rect rt5 = rt1 & rt2; // 둘의 교집합
    Rect rt6 = rt1 | rt2; // Rect 둘을 담을 수 있는 최소 사각형
    cout << "rt5" << rt5 << endl;
    cout << "rt6" << rt6 << endl;

    if (rt1 != rt2)
        cout << "rt1 != rt2" << endl;

    Mat img(600, 800, CV_8UC3, Scalar(127, 127, 127)); 
    namedWindow("img", WINDOW_AUTOSIZE);

    rectangle(img, rt1, Scalar(255, 0, 0), 2);
    rectangle(img, rt2, Scalar(0, 255, 0), 2);
    rectangle(img, rt5, Scalar(0, 0, 255), 2);
    imshow("img", img);
    waitKey();
    rectangle(img, rt6 ,Scalar(255,255,255),1);
    circle(img,pt2,5,Scalar(255,0,255),2);
    imshow("img",img);
    waitKey();

    return 0;
}