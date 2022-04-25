#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Matx Class (reshape, ,randu, randn)
    
    Matx16f A = Matx16f::randu(0.0,1.0);    //균등분포를 따름 +과거 데이터를 통해 미래 데이터를 유추할 수 없는 경우
    Matx16f B = Matx16f::randn(0.0,1.0);    //정규분포를 따름 +과거 데이터를 통해 미래 데이터를 유추할 수 있는 경우

    cout << "A : " << (Mat)A << endl;
    cout << "B : " << (Mat)B << endl;

    Matx23f C = A.reshape<2,3>();
    cout << "C : " << (Mat)C << endl;

    return 0;
}