#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;


bool ROI_AddImage()
{
	Mat src1 = imread("mushroom.png", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);
	Mat src2 = imread("logo.png", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);
	if (!src1.data)
	{
		cout << "read file mushroom.png failed, please check the filename" << endl;
		return false;
	}
	if (!src2.data)
	{
		cout << "read file logo.png failed, please check the filename" << endl;
		return false;
	}
	Mat ROI = src1(Range(250, 250 + src2.rows), Range(600, 600 + src2.cols));
	Mat mask = imread("logo.png",  0);//it have to be gray picture
	src2.copyTo(ROI, mask); //ROI is OutputArray, mask is InputArray
	namedWindow("mushlogo", WINDOW_AUTOSIZE);
	imshow("mushlogo", src1);
	return true;
}


void createAlphaMat(Mat &m)
{
	for (int i = 0; i < m.rows; i++)
	{
		for (int j = 0; j < m.cols; j++)
		{ 
			Vec4s& rgba = m.at<Vec4s>(i,j); 
			rgba[0] = SHRT_MAX;
			rgba[1] = saturate_cast<short>
				((float(m.cols - j)) / ((float)m.cols)*SHRT_MAX);
			rgba[2] = saturate_cast<short>
				((float(m.rows - i)) / ((float)m.rows)*SHRT_MAX);
			rgba[3] = saturate_cast<short>(0.5*(rgba[1] + rgba[2]));
			//rgba[3] = 0.7;
		}
	}
}
