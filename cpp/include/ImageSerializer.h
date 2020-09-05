#include <opencv2/opencv.hpp>

void get_image_serialized(Mat &img, int quality)
{
    // send image to dashboard
    std::vector<int> param(2);
    param[0] = cv::IMWRITE_JPEG_QUALITY;
    param[1] = 2;
    cv::imencode(".jpg", img, buffer, param);

    
}