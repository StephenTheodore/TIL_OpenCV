#include "opencv2/opencv.hpp"

#include <crtdbg.h>

using namespace std;
using namespace cv;

int main()
{
    // Ptr Class

    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    int* ptr = new int[100];
    Ptr<int> data(ptr);

    for(int i = 0; i < 100; i++)
        data[i] = i;

    _CrtDumpMemoryLeaks();
    return 0;
}