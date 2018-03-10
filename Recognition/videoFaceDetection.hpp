//
//  videoFaceDetection.hpp
//  openCV
//
//  Created by soWhat on 10.03.18.
//  Copyright © 2018 soWhat. All rights reserved.

#ifndef videoFaceDetection_hpp
#define videoFaceDetection_hpp

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>

#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;

class VFaceDetection
{
public:
    void detect();
private:
    /** Global variables */
    const static String face_cascade_name;
    const static String eyes_cascade_name;
    CascadeClassifier face_cascade;
    CascadeClassifier eyes_cascade;
    const static string window_name;

    /** Function Headers */
    void detectAndDisplay( Mat frame );
};

#endif /* videoFaceDetection_hpp */
