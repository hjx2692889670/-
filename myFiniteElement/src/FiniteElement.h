/*
 * FiniteElement.h
 *
 *  Created on: 2021��1��24��
 *      Author: sds
 */

#ifndef FINITEELEMENT_H_
#define FINITEELEMENT_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

#include <math.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;
#define N 15   //��Ԫ
#define M 16 //�����Σ�
#define T 6
//static int E = 1;//������t=1������ģ��E=1
//static int t = 1;
//�����ε�Ԫ�ĸնȾ���k,����t=1,����ģ��E=1��
static double E = 2e+11;//������t=1������ģ��E=1
static int t = 1;
class FiniteElement {
public:
	FiniteElement();
	void doFE(int ix,int iy,int jx,int jy,int mx,int my,double u=0.25);
	void doB1S( ifstream &infile);
	void showSUMB1S(ofstream &);
	void doSumFE();
	void showB1S(ofstream &);
	void doInit(ifstream & bmIn);
	virtual ~FiniteElement();
//��������
	double _area;
	double **B1S;//ֻ�ڷ����ڴ��õ���
//�������
	double **SUM_B1S;
private:
	int BM[3][N]={0};
};

#endif /* FINITEELEMENT_H_ */
