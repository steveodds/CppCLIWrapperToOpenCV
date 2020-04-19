#include "opencv2/opencv.hpp"

#pragma once

using namespace System;

namespace CCLIWrapperToOpenCV {
	public ref class ImageLoader
	{
	public:
		void LoadImage()
		{
			auto image = cv::imread("Chrysanthemum.jpg", 1);
			cv::namedWindow("Hello Window");
			cv::imshow("Hello Window", image);
			cv::waitKey(0);
		}
	};
}
