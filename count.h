#ifndef COUNT_H
#define COUNT_H
#include"preparation.h"
#include<QString>
#include<QFile>
#include<QTextStream>
#include<iostream>
#include<cmath>
const int maxOrder=360;                                           //参与计算的最大阶数
const double w=7.2921150e-5;                                      //地球自转角速度
const double GM=3.986005e+14;                                     //地心引力常数：万有引力常数与地球质量乘积
const double a=6378137.0;                                         //地球长半径
const double pi=3.14159265358979323846;                           //圆周率
class Geodesy
{
public:
    Geodesy();
    Geodesy(const QString fileAdderss, const BLH &blh1);

    void run(void);                                               //进行计算

    double dmToRm(const double D,const double F,const double M);  //将角度制(degree measure)转成弧度制(radian measure)
private:

    void countT(void);                                            //计算扰动位

    void readGfcFile(QString fileAddress);                        //读取.efc文件
    void countPolar(void);                                        //计算待求点极坐标
    void countE(void);                                            //计算第一,二偏心率e,es(second eccentricity)
    void countR0(void);                                           //计算椭球上的正常重力r0
    void countDpc(void);                                          //计算扰动位系数(disturbing potential coefficient)
    void countP(void);                                            //计算规格化连带勒让德函数
    void countDiffP(void);                                        //计算规格化连带勒让德函数关于归化纬度的一阶导数
    void BLHToXYZ(const BLH&blh1, XYZ&xyz1);                      //将大地坐标BLH转成大地直角坐标XYZ


    vector<vector<Gfc> >gfcV;                                     //读取的地球重力场模型系数
    vector<vector<Gfc> >dpc;                                      //扰动位系数(disturbing potential coefficient)
    vector<vector<double> >P;                                     //规格化连带勒让德函数
    vector<vector<double> >diffP;                                 //规格化连带勒让德函数关于归化纬度的一阶导数
    BLH blh;                                                      //待求点大地坐标
    XYZ xyz;                                                      //待求点大地直角坐标
    Polar polar;                                                  //待求点极坐标
    double e,es,q0;                                               //第一偏心率,第二偏心率(second eccentricity)
    double r0;                                                    //椭球上的正常重力
    CountResult countResult;                                      //计算结果

};

#endif // COUNT_H
