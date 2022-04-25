#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main()
{
    // Matx Class (zeros, ones, eye, all)
    
    Matx33f A = Matx33f::zeros();
    Matx33f B = Matx33f::ones();
    Matx33f C = Matx33f::eye();     //대각선임
    Matx23f C_ = Matx23f::eye();
    Matx33f D = Matx33f::all(5.0f);

    cout << "A : " << (Mat)A << endl;
    cout << "B : " << (Mat)B << endl;
    cout << "C : " << (Mat)C << endl;
    cout << "C_ : " << (Mat)C_ << endl;
    cout << "D : " << (Mat)D << endl;

    return 0;
}