#include"head.h"

int main()
{
	

	// 初级图像混合 opencv入门教程之三
	/*Mat girl = imread("hair.jpg", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);//载入最原始的图像
	namedWindow("PRETTY GIRL", WINDOW_NORMAL);//窗口大小可变
	imshow("PRETTY GIRL", girl);

	Mat image = imread("dota.png", 199);
	Mat logo = imread("logo.png", -1);
	namedWindow("logo");
	imshow("logo", logo);

	Mat imageROI;//region of interest
	imageROI = image(Rect(800, 350, logo.cols, logo.rows));
	//Rect(列起始位置，行起始位置，+列数，+行数);
	imshow("imageROI", imageROI);
	//imageROI here is a patch of picture dota

	//add logo to image
	//(src1, proportion src1, src2, proportion src2, adjugement, des)
	addWeighted(imageROI, 0.5, logo, 0.3, 0., imageROI);
	namedWindow("dota with logo", WINDOW_NORMAL);
	imshow("dota with logo", image);
	waitKey();

	//save image
	vector<int> compres;
	compres.push_back(CV_IMWRITE_PNG_COMPRESSION);
	compres.push_back(9);
	imwrite("dotaLogo.jpg", image,compres);*/
	return 0;
	



	/*Mat pic(300, 200,CV_16SC4, Scalar(100,0,200));
	createAlphaMat(pic);
	vector<int> compre;
	compre.push_back(CV_IMWRITE_PNG_COMPRESSION);
	compre.push_back(9);
	try{
		imwrite("alpha graphic.png", pic, compre);
	}
	catch (runtime_error& ex){
		fprintf(stderr, "translate error: %s\n", ex.what());
		return 1;
	}
	cout << "png save finished\n" << endl;
	return 0;*/

	//Mat hair = imread("hair.jpg", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_ANYCOLOR);
	//Mat hair2 = imread("hair.jpg", 0);
	//Mat hair3 = imread("hair.jpg", -1);
	////namedWindow用于指定窗口可否放大，可否支持openGL
	//namedWindow("hair"); //创建一个容器窗口，autosize,不可改变
	//namedWindow("hair2", WINDOW_NORMAL);//anysize，可以改变
	//imshow("hair", hair);
	//imshow("hair2", hair);
	//imshow("hair2+", hair2);
	//imshow("hair2", hair3);


	/*Mat src1 = imread("01.jpg");
	Mat src2 = imread("02.jpg");
	imshow("src1", src1);
	Mat des1 = src1.clone();
	Mat des2 = src2.clone();
	GaussianBlur(src1, des1, Size(9, 9), 0, 0);
	imshow("final", des1);
	waitKey();*/


	/*Mat des = Mat::eye(12,10,CV_8UC1);
	cout << des.depth() << endl;
	imshow("original", des);
	int d[12] = { 225, 225, 225, 222, 116, 137, 43, 227, 245, 225 };
	for (int i = 0; i < des.rows; i++)
	{
		memcpy(des.ptr(i), d, 12 * sizeof(int));
	}
	imshow("final", des);
	waitKey();*/

	/* show image
	Mat ig = imread("imag.jpg");
	namedWindow("weibo pei tu");
	imshow("weibo pei tu", ig);
	waitKey(6000);
	*/

	//Mat M(800, 1200, CV_8UC3, Scalar(220, 170, 0)); //blue, green, red
	//M.create(10, 10, CV_8UC2);
	//cout << M << endl;
	//namedWindow("show single corlor");
	//imshow("single corlor", M);
	//waitKey(10000);


	/*Mat Z = Mat::zeros(800, 600, CV_8UC1);
	uchar value = Z.at<uchar>(400, 300);
	imshow("original", Z);
	cout << value << endl;
	Z.at<uchar>(400, 300) = 10;
	imshow("changed", Z);
	waitKey(5000);*/

	/*  traversal by at<>()
	Mat g(600, 800, CV_8UC1);
	Mat c(600, 800, CV_8UC3);

	for (int i = 0; i < g.rows; i++)
	{
		for (int j = 0; j < g.cols; j++)
		{
			g.at<uchar>(i, j) = (i - j) % 255;
		}
	}

	for (int i = 0; i < c.rows; i++)
	{
		for (int j = 0; j < c.cols; j++)
		{
			Vec3b pixel;
			pixel[0] = 144;
			pixel[1] = 255 - j % 255;
			pixel[2] = 255 - i % 255;
			c.at<Vec3b>(i, j) = pixel;
		}
	}

	imshow("gray", g);
	imshow("colored", c);
	waitKey(0);*/

	/*Mat g(600, 800, CV_8UC1);
	Mat c(600, 800, CV_8UC3);
	MatIterator_<uchar> git;
	for ( git = g.begin<uchar>(); git < g.end<uchar>(); git++)
	{
		*git = rand() % 255;
	}
	MatIterator_<Vec3b> cit;
	for ( cit = c.begin<Vec3b>(); cit < c.end<Vec3b>(); cit++)
	{
		(*cit)[0] = rand() % 5;
		(*cit)[1] = rand() % 255;
		(*cit)[2] = rand() % 200;
	}

	imshow("g", g);
	imshow("c", c);
	waitKey(0);*/



}