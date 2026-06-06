/*
 * @LastEditors: Yygz314 2711859393@qq.com
 * @LastEditTime: 2026-06-06 13:38:58
 */
//头文件，对外暴露接口
//防止头文件重复包含
#ifndef CONVOLUTION_H
#define CONVOLUTION_H

//卷积函数声明（2D单通道卷积）

void conv2d(
    const float** input,   //输入图像二维数组
    const float** kernel,  //卷积核二维数组
    float** output,       //输出结果二维数组
    int in_h, int in_w,    //输入高宽
    int k_h, int k_w        //卷积核高宽
);

#endif
