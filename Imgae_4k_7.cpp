#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/cudaarithm.hpp>
#include <opencv2/cudawarping.hpp>
#include <opencv2/cudafilters.hpp>
#include <opencv2/stitching.hpp>

using namespace std;
using namespace cv;
/*
int main()
{
    // 加载图像
    std::vector<cv::Mat> images;
    images.push_back(imread("D:\\image_data\\image1.jpg"));
    images.push_back(imread("D:\\image_data\\image2.jpg"));
    images.push_back(imread("D:\\image_data\\image3.jpg"));
    images.push_back(imread("D:\\image_data\\image4.jpg"));
    images.push_back(imread("D:\\image_data\\image5.jpg"));
    images.push_back(imread("D:\\image_data\\image6.jpg"));
    images.push_back(imread("D:\\image_data\\image7.jpg"));

    // 创建CUDA类型的图像容器
    std::vector<cv::cuda::GpuMat> gpuImages(images.size());
    std::vector<cv::cuda::GpuMat> gpuWarpedImages(images.size());
    std::cout << "images.size()" << images.size() << std::endl;


    // 将图像数据上传到GPU
    std::cout << "Load image to GPU " << std::endl;
    for (int i = 0; i < images.size(); i++)
    {

        std::cout << "Load image " << i + 1 << std::endl;
        // 显示图像
        //cv::imshow("Original Image", image);
        //cv::waitKey(0); // 等待按键继续
        cv::Mat resizedImage;
        cv::resize(images[i], resizedImage, cv::Size(), 0.3, 0.3); // 缩小为原来的一半

        // 将目标图像的数据类型设置为CV_8UC3
        //resizedImage.convertTo(resizedImage, CV_8UC3);
        // 显示缩小后的图像
        cv::imshow("Resized Image", resizedImage);
        cv::waitKey(0);
        std::cout << "Resized Image Properties:" << std::endl;
        std::cout << "Size: " << resizedImage.size() << std::endl;
        std::cout << "Channels: " << resizedImage.channels() << std::endl;
        std::cout << "Type: " << resizedImage.type() << std::endl;
        std::cout << "depth: " << resizedImage.depth() << std::endl;

        if (resizedImage.empty())
        {
            std::cout << "Failed to load image " << i + 1 << std::endl;
            continue;
        }
        if (resizedImage.channels() != 3 || resizedImage.type() != CV_8UC3)
        {
            std::cout << "Invalid image format for GPU processing: " << i + 1 << std::endl;
            std::cout << "depth: " << resizedImage.depth() << std::endl;
            continue;
        }

        gpuImages[i].upload(images[i]);
    }

    // 创建图像拼接器
    //cv::Ptr<cv::Stitcher> stitcher = cv::Stitcher::create();
    //Ptr<Stitcher> stitcher= cv::createStitcher(true);
    static Ptr< Stitcher > 	stitcher(0);

    // 图像拼接
    cv::cuda::GpuMat result;
    stitcher->stitch(gpuImages, result);

    // 检查图像拼接结果
    if (result.empty())
    {
        std::cout << "Image stitching failed" << std::endl;
        return -1;
    }

    // 下载结果图像
    cv::Mat resultImage;
    result.download(resultImage);

    // 保存结果图像
    cv::imwrite("D:\\image_data\\result.jpg", resultImage);

    return 0;
}
*/