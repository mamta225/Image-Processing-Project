#include <opencv2/opencv.hpp>
#include <iostream>
 
using namespace cv;
using namespace std;
 
Mat rotate(Mat image, double angle)   
{
    Mat rimage;      
    Point2f pt(image.cols/2., image.rows/2.);          
    Mat r = getRotationMatrix2D(pt, angle, 1.0);     n
    warpAffine(image, rimage, r, Size(image.cols, image.rows)); 
    return rimage;       
}
 
int main()
{
	string str;
	cin>>str;
	double angle;
	cout<<"Enter the angle:";
	cin>>angle;
    Mat image = imread(str,IMREAD_UNCHANGED);   //reading image file in mat object
    if(image.empty())
    {
    	cout<<"ERROR!";
    	cin.get();
    	return -1;
	}
    Mat rimage;     
    rimage = rotate(image, angle);     
    string windowName="image";
    namedWindow(windowName,WINDOW_AUTOSIZE);
    imshow("image", image);      //displaying input image file
    imshow("rimage", rimage);    //displaying output image file
    waitKey(0);                    
    return 0;
}
