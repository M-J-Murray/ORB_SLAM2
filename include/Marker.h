#ifndef ORB_SLAM2_MARKER_H
#define ORB_SLAM2_MARKER_H

#include <opencv2/opencv.hpp>
#include <vector>

struct Marker {
    const double side_length;
    const std::vector<cv::Vec3d> rot;
    const std::vector<cv::Vec3d> tran;
    const std::vector<cv::Point2f> marker_corners;
};


#endif //ORB_SLAM2_MARKER_H
