#include <iostream>
#include <vector>
#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/stitching.hpp"
#include <chrono>

using namespace cv;
using namespace std;
using namespace std::chrono;
/*
Stitcher::Mode mode = Stitcher::PANORAMA;
vector<Mat> imgs;

int main(int argc, char* argv[])
{

    for (int i = 1; i <= 7; i++)
    {
        string imagePath = "D:\\image_data\\image" + to_string(i) + ".jpg";
        Mat img = imread(imagePath);
        if (img.empty())
        {
            cout << "Can't read image: " << imagePath << endl;
            return -1;
        }

        imgs.push_back(img);
    }

    Mat pano;
    Ptr<Stitcher> stitcher = Stitcher::create(mode);

    // 设置拼接参数

    stitcher->setRegistrationResol(0.9);              // 设置图像配准的分辨率为 0.5
    stitcher->setSeamEstimationResol(0.1);            // 设置拼接接缝估计的分辨率为 0.1
    stitcher->setCompositingResol(cv::Stitcher::ORIG_RESOL); // 设置最终拼接图像的分辨率为原始分辨率
    stitcher->setPanoConfidenceThresh(1.0);           // 设置图像拼接的置信度阈值为 1.0

    auto start = high_resolution_clock::now();

    Stitcher::Status status = stitcher->stitch(imgs, pano);

    auto end = high_resolution_clock::now();

    // 计算时间差
    auto duration = duration_cast<milliseconds>(end - start);

    // 输出执行时间
    cout << "Execution time: " << duration.count() << " ms" << endl;

    if (status != Stitcher::OK)
    {
        cout << "Can't stitch images, error code = " << int(status) << endl;
        return -1;
    }

    imwrite("D:\\image_data\\destination.jpg", pano);

    return 0;
}
*/