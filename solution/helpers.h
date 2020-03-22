#include <opencv2/opencv.hpp>
#include <sys/time.h>
#include <iostream>

double getTimeStamp();

cv::Mat load_image(const char *image_path);
void save_image(const char *output_filename, float *buffer, int height,
                int width);
