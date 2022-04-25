#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Vec Class

    Vec3f X(1,0,0);
    Vec3f Y(0,1,0);
    Vec3f Z = X.cross(Y);      //두 벡터의 외적(Cross Product)을 구한다.
    cout << "X : " << (Mat)X << endl;
    cout << "Y : " << (Mat)Y << endl;
    cout << "Z : " << (Mat)Z << endl;

    Point3f pt3 = X;
    cout << "pt3 : " << pt3 << endl;

    X = Vec3f(1,2,3);
    Y = Vec3f(10,100,1000);
    Z = X.mul(Y);   //요소별 곱셈을 함
    cout << "X : " << X << endl;
    cout << "Y : " << Y << endl;
    cout << "Z : " << Z << endl;

    cout << "sum(Z) : " << sum(Z) << endl;
    cout << "dotProduct : " << sum(Z)(0) << endl;      //내적을 구한다.

    X = Vec3f::all(0.0);
    cout << "X : " << X << endl;

    return 0;
}