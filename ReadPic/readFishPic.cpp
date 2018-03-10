//
//  recognizeFish.cpp
//  openCV
//
//  Created by soWhat on 08.03.18.
//  Copyright © 2018 soWhat. All rights reserved.
//

#include "readFishPic.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void ReadFishPic::ReadImgAndShow(int argc, char** argv) {
    if( argc != 2)
    {
        cout <<" Usage: display_image ImageToLoadAndDisplay" << endl;
    }
    
    Mat image;
    image = imread(argv[1], CV_LOAD_IMAGE_COLOR);   // Read the file
    
    if(! image.data )                              // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
    }
    
    namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
    imshow( "Display window", image );                   // Show our image inside it.
    
    waitKey(0);                                          // Wait for a keystroke in the window}

}
