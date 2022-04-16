#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Matx Class (inv)

    Matx33d A(1, -1, -2,
              2, -3, -5,
              -1, 3, 5);

    Matx33d B = A.inv(DECOMP_CHOLESKY);     //역행렬 만들기 
    Matx33d C = A.inv(DECOMP_LU);           //다른방식
    //Matx33d EX = A.inv(DECOMP_EIG);       //다른방식
    //Matx33d EX = A.inv(DECOMP_NORMAL);    //다른방식
    //Matx33d EX = A.inv(DECOMP_QR);        //다른방식
    //Matx33d EX = A.inv(DECOMP_SVD);       //다른방식


    Matx33d D = A*B;    //만들어진 역행렬과 기존행렬을 곱하여 단위행렬을 만든다.
    Matx33d E = A*C;

    cout << "A : " << (Mat)A << endl;
    cout << "B : " << (Mat)B << endl;
    cout << "C : " << (Mat)C << endl;
    cout << "D : " << (Mat)D << endl;
    cout << "E : " << (Mat)E << endl;

    return 0;
}