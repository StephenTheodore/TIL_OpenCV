#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Matx Class (행렬 연산)
    Matx23f A(1,2,3,
              4,5,6);
    
    cout << "A : " << (Mat)A << endl;

    Matx13f A0 = A.row(0);
    Matx21f A1 = A.col(0);
    Matx22f A2 = A.get_minor<2,2>(0,1);
    
    cout << "A0 : " << (Mat)A0 << endl;
    cout << "A1 : " << (Mat)A1 << endl;
    cout << "A2 : " << (Mat)A2 << endl;
    
    Matx23f B = Matx23f::all(10.0f);
    cout << "B : " << (Mat)B << endl;

    Matx23f C,D,E,F;
    C = A+B;
    D = A-B;
    E = A*5;
    F = A.mul(B);

    cout << "C : " << (Mat)C << endl;
    cout << "D : " << (Mat)D << endl;
    cout << "E : " << (Mat)E << endl;
    cout << "F : " << (Mat)F << endl;

    float dotAB = A.dot(B);     //A B의 내적
    cout<< "dotAB : " << dotAB << endl;

    Matx22f G = A*B.t();       //B.t()는 B의 전치행렬 +전치행렬은 행과 열이 서로 바뀐 행렬이다.
    cout << "G : " << (Mat)G << endl;

    return 0;
}