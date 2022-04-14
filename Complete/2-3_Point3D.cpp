#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Point 3D 자료형

    Point3f pt1(1.0f, 0.0f, 0.0f), pt2(0.0f, 1.0f, 0.0f);
    Point3i pt3 = (pt1 + pt2) * 10.0f;
    Point3f pt4 = (pt1 - pt2) * 100.f;

    cout << "pt1 : " << pt1 << endl;
    cout << "pt2 : " << pt2 << endl;
    cout << "pt3 : " << pt3 << endl;
    cout << "pt4 : " << pt4 << endl;

    // pt1과 pt2가 동일 좌표인지
    if (pt1 == pt2)
        cout << "pt1 == pt2" << endl;
    else
        cout << "pt1 != pt2" << endl;

    float fVal = pt1.dot(pt2);
    cout << "fVal" << fVal << endl;

    double normVal = norm(pt1);
    cout << "normVal" << normVal << endl;

    //3차원 Vector의 외적(Cross product)를 계산
    Point3f pt5 = pt1.cross(pt2);
    Point3f pt6 = pt2.cross(pt1);
    cout << "pt5 : " << pt5 << endl;
    cout << "pt6 : " << pt6 << endl;

    return 0;
}