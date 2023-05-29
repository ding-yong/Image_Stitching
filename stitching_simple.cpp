
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/stitching.hpp"
#include <iostream>
#include <chrono>

using namespace std;
using namespace cv;
using namespace std::chrono;
/*
bool divide_images = false;
Stitcher::Mode mode = Stitcher::PANORAMA;
vector<Mat> imgs;
string result_name = "result.jpg";

void printUsage(char** argv);
int parseCmdArgs(int argc, char** argv);
bool try_use_gpu = false;
int main(int argc, char* argv[])
{
    int retval = parseCmdArgs(argc, argv);
    if (retval) return EXIT_FAILURE;

    //![stitching]
    Mat pano;
    Ptr<Stitcher> stitcher = Stitcher::create(mode);
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
        return EXIT_FAILURE;
    }
    //![stitching]

    imwrite(result_name, pano);
    cout << "stitching completed successfully\n" << result_name << " saved!";
    return EXIT_SUCCESS;
}


void printUsage(char** argv)
{
    cout <<
        "Images stitcher.\n\n" << "Usage :\n" << argv[0] << " [Flags] img1 img2 [...imgN]\n\n"
        "Flags:\n"
        "  --d3\n"
        "      internally creates three chunks of each image to increase stitching success\n"
        "  --mode (panorama|scans)\n"
        "      Determines configuration of stitcher. The default is 'panorama',\n"
        "      mode suitable for creating photo panoramas. Option 'scans' is suitable\n"
        "      for stitching materials under affine transformation, such as scans.\n"
        "  --output <result_img>\n"
        "      The default is 'result.jpg'.\n\n"
        "Example usage :\n" << argv[0] << " --d3 --try_use_gpu yes --mode scans img1.jpg img2.jpg\n";
}


int parseCmdArgs(int argc, char** argv)
{
    if (argc == 1)
    {
        printUsage(argv);
        return EXIT_FAILURE;
    }

    for (int i = 1; i < argc; ++i)
    {
        if (string(argv[i]) == "--help" || string(argv[i]) == "/?")
        {
            printUsage(argv);
            return EXIT_FAILURE;
        }
        else if (string(argv[i]) == "--d3")
        {
            divide_images = true;
        }
        else if (string(argv[i]) == "--try_use_gpu")
        {

            try_use_gpu = true;
        }
        else if (string(argv[i]) == "--output")
        {
            result_name = argv[i + 1];
            i++;
        }
        else if (string(argv[i]) == "--mode")
        {
            if (string(argv[i + 1]) == "panorama")
                mode = Stitcher::PANORAMA;
            else if (string(argv[i + 1]) == "scans")
                mode = Stitcher::SCANS;
            else
            {
                cout << "Bad --mode flag value\n";
                return EXIT_FAILURE;
            }
            i++;
        }
        else
        {
            cout << argv[i];
            Mat img = imread(samples::findFile(argv[i]));
            if (img.empty())
            {
                cout << "Can't read image '" << argv[i] << "'\n";
                return EXIT_FAILURE;
            }

            if (divide_images)
            {
                Rect rect(0, 0, img.cols / 2, img.rows);
                imgs.push_back(img(rect).clone());
                rect.x = img.cols / 3;
                imgs.push_back(img(rect).clone());
                rect.x = img.cols / 2;
                imgs.push_back(img(rect).clone());
            }
            else
                imgs.push_back(img);
        }
    }
    return EXIT_SUCCESS;
}
*/