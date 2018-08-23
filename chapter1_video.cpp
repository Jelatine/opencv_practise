#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
int main(){
    VideoCapture cap("/home/lee/cv_data/test_video.mp4");
    // VideoCapture cap(0);
    while(1){
        Mat frame;
        cap>>frame;
        Mat grayImgage,edges;
        cvtColor(frame,grayImgage,CV_BGR2GRAY);
        blur(grayImgage,edges,Size(7,7));
        Canny(edges,edges,0,30,3);
        imshow("play video",edges);
        waitKey(30);
    }
    return 0;
}