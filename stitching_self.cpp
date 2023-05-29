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

    // ����ƴ�Ӳ���

    stitcher->setRegistrationResol(0.9);              // ����ͼ����׼�ķֱ���Ϊ 0.5
    stitcher->setSeamEstimationResol(0.1);            // ����ƴ�ӽӷ���Ƶķֱ���Ϊ 0.1
    stitcher->setCompositingResol(cv::Stitcher::ORIG_RESOL); // ��������ƴ��ͼ��ķֱ���Ϊԭʼ�ֱ���
    stitcher->setPanoConfidenceThresh(1.0);           // ����ͼ��ƴ�ӵ����Ŷ���ֵΪ 1.0

    auto start = high_resolution_clock::now();

    Stitcher::Status status = stitcher->stitch(imgs, pano);

    auto end = high_resolution_clock::now();

    // ����ʱ���
    auto duration = duration_cast<milliseconds>(end - start);

    // ���ִ��ʱ��
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