#include <opencv2/opencv.hpp>
#include "opencv2/features2d/features2d.hpp"
#include <opencv2/flann/flann.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace cv;

#define IMAGE1NAME  "/home/atom/Desktop/tu.jpeg"
#define IMAGE2NAME  "/home/atom/Desktop/tu.jpeg"

int main(int argc ,char ** argv){
	String srcImage1Name;
	String srcImage2Name;
	if(argc < 3){
		srcImage1Name = IMAGE1NAME;	
		srcImage2Name = IMAGE2NAME;	
	}	
	else{
		srcImage1Name = argv[1];
		srcImage2Name = argv[2];
	}
	cv::Mat img1 = cv::imread(srcImage1Name.c_str());
	cv::Mat img2 = cv::imread(srcImage2Name.c_str());


	if(!img1.data || !img2.data){
		printf("not load image! T_T !!!...");
		return false;
	}

	//cv::imshow("image1",img1);
	//cv::imshow("image2",img2);
	//cv::waitKey();

	//[2]
	std::vector<cv::KeyPoint> left_KeyPoints,right_KeyPoints;

	//Detect keypoints in the left and right images;
	FastFeatureDetector ffd(20);
	
		

return 0;
}
