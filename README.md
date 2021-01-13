# Project1

IMAGE PROCESSING PROJECT


CONTENTS OF THIS FILE
- - - - - - - - - - - - - - - - - - - - -

 *Introduction
 *Installation
 * Working
 *Project status

INTRODUCTION
- - - -  - - - - - - - - - - - - - - - - - 

 This is a simple project based on image processing where the objective of the project is to create a C++ program which can input an image and input an angle and then rotate the image by that angle and then display the rotated image.
 Before moving further let's have a quick eye on the definition of image processing. Image processing is a method to perform some operations on an image, in order to get an enhanced image or to extract some useful information from it. 
 It is a type of signal processing in which input is an image and output may be image or characteristics/features associated with that image.
 In this project I have made use of simple functions for taking image input(imread()) and for displaying the output (imshow()) and some more functions for the purpose of rotating the image . We will briefly go through all these functions later in the file . 

INSTALLATION
 - - - - - - - - - - - - - - - - - - - - - - -

 For creating this project opencv and visual studio were to be installed :

 OpenCV :  

 OpenCV stands for Open Source Computer Vision Library , it is a free open source library used in real-time image processing. It is used to process images, videos, and even live streams, but in this project, we will  process images only . OpenCV can read and write images from scratch, draw an image through code, capture and save videos, process images, perform feature detection, detect specific objects and analyze videos, and  determine the direction and the motion of an object.  it is a library of programming functions mainly aimed at real-time computer vision.
 
LINK FOR DOWNLOADING VISUAL STUDIO : 

https://visualstudio.microsoft.com/downloads/

 After downloading visual studio the following steps are to be followed :

 Step 1 :  Install the C++ Desktop development Workload. Open your Visual Studio Installer  tool and add C++ for desktop development as a workload to your current Visual Studio IDE version. This step is essential since you can not use OpenCV in VS without all the C++ required libraries.

Step 2 : Configure a Visual Studio project to run OpenCV.

1 .Open Visual Studio 2019

2 . choose to create a new project .

3 . Go for the C++ Console App template.

4 . Once the project created you should have a layout with a solution explorer to the right having one source file and in the window upper ribbon you should see Debug for x86 platforms, meaning that the project will build and run in debug mode targeting x86 windows architectures.

 5 . Change the solution platforms from x86 to x64 . 

 6 . Change the Project Properties to add the OpenCV libraries

 7 . Go to Configuration Properties/VC++ Directories to add the include directory for OpenCV.

 8 . Do the same for the Library Directory.

 9 . Edit the VC++ project linker with the opencv_world420d.lib OpenCV dynamic library.Copy the name of the file opencv_world420d.lib and paste it in the dependency box.

 Now , we have succcessfully installed both the OpenCV and  Visual Studio and we can we can now run our code in visual studio .

WORKING
- - - - - - - - - - - - - - - - - - - - -

The program that has been created uses simple functions and with the help of these functions we achieves our desired target of taking an image and an angle as input and rotating the image by that angle and then displaying the output 
image which is the rotated image . This program uses various functions for performing various tasks such as to take input of an image , to rotate the image , to display the rotated image . 

Let us now take a look at the various header files, functions we are using in this program :

Mat  
Mat object which holds the image .The Mat class of OpenCV library is used to store the values of an image. It represents an n-dimensional array and is used to store image data of grayscale or color images, voxel volumes, vector fields, point clouds, tensors,  histograms, etc. 

HEADER FILES

 #include <opencv2/opencv.hpp>

opencv2/opencv.hpp header file itself will include all other necessary header files in OpenCV library. We have to include only this header file in order to compile our OpenCV codes. 

#include <iostream>
iostream header file should also be included because we use cout and cin in our program to print an error message to the console.

NAMESPACE

using namespace cv; 

All OpenCV functions, classes and data structures are declared inside cv namespace. So, we have to add the 'using namespace cv' line in the top of our program. Otherwise we have to append 'cv::' specifier before each OpenCV functions, classes and data structures. (e.g - cv::Mat, cv::imread() , etc). 
using namespace std; We have to use the std namespace also because cout  and cin functions are inside the std namespace.

FUNCTIONS

1 . imread() : 

 This function is used to take an image as an intput . This function loads an image
from the specified file and return it as a Mat object. If the function cannot read
the file, it will return an empty Mat object. In this function we take the image
address or the name of the image as an argument with a flag also as an argument.
There are three different types of flags that can be taken as argument where these
three different flags have their own specific role which are described below:
                     
   1 . IMREAD_UNCHANGED :   The image will be loaded as it is. If you want to get the alpha channel in your input image (if it is available), you have to use this flag.

   2 . IMREAD_GRAYSCALE - The image will be load as a gray-scale image    (i.e. - Single channel image, Black and white image)

   3 . IMREAD_COLOR - The image will be loaded as a BGR image (i.e. - 3 channel image, color image .

2 . empty() : 

This function will check if the image has been loaded in the program i.e, the    input function that we have used has worked correctly or not . If imread() function fails to load the image, the returned Mat object will be empty. 
        If the Mat object is empty, image.empty() function will return true. In such scenarios, our program will print an error message to the console and wait for any key press. When the user press any key in the keyboard, the program will exit returning -1. It's a good practice to check whether the image is empty and exit the program. Otherwise our program will crash while trying to execute the imshow() function.

3 . rotate(); 

This function will rotate the inputted image by the angle that has been taken as input . In this function we will take the name of the image as well as the angle as its argumnet .This function will rotate the image by that 
specified angle and then return the rotated image that we wish to display as our output .

4 . namedWindow(windowName);

 This function creates a window with the name of "XYZ". The name of the window is used later in this code to identify the window .
  We also use flags here which are used to determine the size of the window. If we do  not pass any value to this argument then in such case the function will take the default WINDOW_AUTOSIZE flag .

   There are two flags that can be used : 

  1 .WINDOW_AUTOSIZE –If this flag is used then the user cannot resize the window. Image will be displayed in its original size. 

   2 .WINDOW_NORMAL- In case of this flag the user can resize the window

5 .  warpAffine(image, rimage, r, Size(image.cols, image.rows));

 This OpenCV function applies affine transformation to an image . wrafAffine funtion is inbuilt in the opencv library. wrafAffine takes 4 parametres. First is source image file , second is destination image file , third parameter is mat object that is ouput after rotating with some point taking into reference and last is taking the size.

6 . Point2f pt(image.cols / 2., image.rows / 2.);

 This function returns the point from where the image has to be  rotated .   

PROJECT STATUS 
 - - - - - - - - - - - - - - - - - - - - -

This project has been completed successfully and it also displays the desired output . If you wish to run this code in your system then the only change you are required to make is to change the image address or the name of the image by any other image name or path which is stored in your system memory and you can also make changes to the name of the image with reference to the kind of image that you have used .
 
