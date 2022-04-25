#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Scalar

    Scalar X = Vec4f(1,2,3,4);
    Scalar Y = Scalar(10,20,30);    //10,20,30,0
    Scalar Z = Scalar(100,200,300); //100,200,300,0

    cout << "X : " << X << endl;
    cout << "Y : " << Y << endl;
    cout << "Z : " << Z << endl;

    Scalar X1 = Scalar::all(255);
    cout << "X1 : " << X1 << endl;

    Scalar X2 = X;
    cout << "X2 : " << (Scalar)X2 << endl;

    Scalar_<uchar> S1 = Scalar_<uchar>(255,0,0);
    Scalar_<int> S2 = Scalar_<int>(0,255,0);
    Scalar_<float> S3 = Scalar_<float>(0,0,255);
    Scalar_<double> S4 = Scalar_<double>(0,0,255);
    Scalar_<uchar> S5 = Scalar_<uchar>::all(255);

    //Scalar는 4개의 요소를 갖는다.
    cout << "S1 : " << S1 << endl;
    cout << "S2 : " << S2 << endl;
    cout << "S3 : " << S3 << endl;
    cout << "S4 : " << S4 << endl;
    cout << "S5 : " << S5 << endl;

    return 0;
}