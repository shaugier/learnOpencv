#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;


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
