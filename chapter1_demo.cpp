#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace cv;
int main(){
    Mat srcImage=imread("/home/lee/cv_data/lena.jpg");
    imshow("source image",srcImage);
    //erode
    Mat element=getStructuringElement(MORPH_RECT,Size(15,15));
    Mat erode_img;
    erode(srcImage,erode_img,element);
    imshow("erode image",erode_img);
    //blur
    Mat dstImage;
    blur(srcImage,dstImage,Size(7,7));
    imshow("blur image",dstImage);
    //canny
    Mat grayImage;
    cvtColor(srcImage,grayImage,COLOR_BGR2GRAY);
    Mat canny_img;
    blur(grayImage,canny_img,Size(3,3));
    Canny(canny_img,canny_img,3,9,3);
    imshow("canny image",canny_img);
    waitKey(0);
    
}