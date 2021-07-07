// Include libraries
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(void){

	// Read image in Grayscale format
	Mat testImage = imread("number_zero.jpg", 0);
	imwrite("test.jpg", testImage);
}
