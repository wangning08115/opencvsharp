#ifndef _CPP_ML_KNEAREST_H_
#define _CPP_ML_KNEAREST_H_

#include "include_opencv.h"


CVAPI(int) ml_KNearest_getDefaultK(cv::ml::KNearest *obj)
{
	return obj->getDefaultK();
}
CVAPI(void) ml_KNearest_setDefaultK(cv::ml::KNearest *obj, int val)
{
	obj->setDefaultK(val);
}

CVAPI(int) ml_KNearest_getIsClassifier(cv::ml::KNearest *obj)
{
	return obj->getIsClassifier() ? 1 : 0;
}
CVAPI(void) ml_KNearest_setIsClassifier(cv::ml::KNearest *obj, int val)
{
	obj->setIsClassifier(val != 0);
}

CVAPI(int) ml_KNearest_getEmax(cv::ml::KNearest *obj)
{
	return obj->getEmax();
}
CVAPI(void) ml_KNearest_setEmax(cv::ml::KNearest *obj, int val)
{
	obj->setEmax(val);
}

CVAPI(int) ml_KNearest_getAlgorithmType(cv::ml::KNearest *obj)
{
	return obj->getAlgorithmType();
}
CVAPI(void) ml_KNearest_setAlgorithmType(cv::ml::KNearest *obj, int val)
{
	obj->setAlgorithmType(val);
}


CVAPI(float) ml_KNearest_findNearest(cv::ml::KNearest *obj, cv::_InputArray *samples, int k,
	cv::_OutputArray *results, cv::_OutputArray *neighborResponses, cv::_OutputArray *dist)
{
	return obj->findNearest(*samples, k, *results, *neighborResponses, *dist);
}


CVAPI(cv::Ptr<cv::ml::KNearest>*) ml_KNearest_create()
{
	cv::Ptr<cv::ml::KNearest> ptr = cv::ml::KNearest::create();
	return new cv::Ptr<cv::ml::KNearest>(ptr);
}

CVAPI(void) ml_Ptr_KNearest_delete(cv::Ptr<cv::ml::KNearest> *obj)
{
	delete obj;
}

CVAPI(cv::ml::KNearest*) ml_Ptr_KNearest_get(cv::Ptr<cv::ml::KNearest>* obj)
{
	return obj->get();
}

#endif
