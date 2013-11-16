
#include "cv.h"  
#include "highgui.h"  
  
int main(int argc, char* argv[]) {  
  IplImage* img; //画像ファイルポインタ  
  char imgfile[] = "test.jpg"; //ファイル名  
  
  //画像読み込み  
  img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);  
  
  //画像の表示  
  cvNamedWindow ("test OpenCV", CV_WINDOW_AUTOSIZE);  
  cvShowImage ("test OpenCV", img);  
  cvWaitKey (0);  
  cvDestroyWindow ("test OpenCV");  
  
  //画像の解放  
  cvReleaseImage(&img);  
  
  return 0;  
}  
