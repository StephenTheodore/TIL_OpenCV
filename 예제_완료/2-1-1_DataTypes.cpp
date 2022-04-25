#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    //DataType 템플릿등

    Mat A1(1,2,DataType<uchar>::type);
    // Mat A1(1,2,CV_8U) 와 같다

    A1.at<uchar>(0,0)=1;
    A1.at<uchar>(0,1)=2;
    cout << "A1" << A1 << endl;
    cout << "depth=" << A1.depth() << "channels=" << A1.channels() << endl;

    Mat A2(1,2,traits::Type<Vec<uchar,3>>::value);
    // Mat A2(1,2,CV_8UC3) 과 같다
    A2.at<Vec<uchar,3>>(0,0) = Vec3d(10,20,30);
    A2.at<Vec<uchar,3>>(0,1) = Vec3d(40,50,60);
    cout << "A2" << A2 << endl;
    cout << "depth=" << A2.depth() << "channels=" << A2.channels() << endl;

    Mat B(1,2,DataType<float>::type);
    // Mat B2(1,2,CV32F) 와 같다
    B.at<float>(0,0) = 10.0f;
    B.at<float>(0,1) = 20.0f;
    cout << "B" << B << endl;
    cout << "depth=" << B.depth() << "channels=" << B.channels() << endl;

    Mat C(1,2,traits::Type<Point>::value);
    // Mat C(1,2,CV_32SC2) 와 같다
    C.at<Point>(0,0) = Point(100,100);
    C.at<Point>(0,1) = Point(200,200);
    cout << "C" << C << endl;
    cout << "depth=" << C.depth() << "channels=" << C.channels() << endl;

    Mat D(1,2,DataType<complex<double>>::type);
    D.at<complex<double>>(0,0) = complex<double>(10.0,20.0);
    D.at<complex<double>>(0,1) = complex<double>(10.0,20.0);
    cout << "D" << D << endl;
    cout << "depth=" << D.depth() << "channels=" << D.channels() << endl;

    return 0;
}