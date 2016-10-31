#include <iostream>
#include<cv.h>
#include <opencv2/opencv.hpp>


using namespace cv;
using namespace std;


// Temp
void bitwise (){
    string Path_1 ="/home/salavat/diamond.jpg";
    string Path_2 = "/home/salavat/bubble.jpg";

    Mat mt = imread(Path_1);
    Mat mt1 = imread(Path_2);

    Mat res ;

    cvNamedWindow("Erstes Bild");
    cvNamedWindow("Zweites Bild");

    imshow("First", mt);
    imshow("Second", mt1);
    cvNamedWindow("bit_And",1);
    cvNamedWindow("bit_Or",1);
    cvNamedWindow("bit_Xor",1);

    bitwise_and(mt,mt1,res);
    imshow("bit_And", res);

    bitwise_or(mt,mt1,res);
    imshow("bit_Or", res);

    bitwise_xor(mt,mt1,res);
    imshow("bit_Xor", res);

    waitKey(0);

}



int main() {

    bitwise();

    return 0;

}



