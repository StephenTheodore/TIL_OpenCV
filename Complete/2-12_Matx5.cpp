#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Matx Class (solve)

    Matx33d A(2, -1, 1,
              3, 3, 9,
              3, 3, 5);
    Matx31d B(-1, 0, 4);

    Matx31d R1 = A.solve(B);    //각 행의 연립방정식 계산
    Mat R2;
    solve((Mat)A, (Mat)B, R2);

    cout << "R1 : " << (Mat)R1 << endl;
    cout << "R2 : " << (Mat)R2 << endl;

    return 0;
}