#pragma once

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

#include <string>

using namespace std;

typedef pcl::PointXYZRGBA PointT;
typedef pcl::PointCloud<PointT> PointCloudT;

class MyCloud
{


public:
	MyCloud();
	~MyCloud();

	PointCloudT::Ptr cloud;			//����ָ��
	string dirname;			//�ļ�Ŀ¼
	string fullname;		//����·��
	string filename;		//�ļ�����������׺��
	string filetype;		//�ļ�����
	bool visible = true;
};