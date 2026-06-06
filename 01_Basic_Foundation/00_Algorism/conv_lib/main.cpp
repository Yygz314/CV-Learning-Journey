/*
 * @LastEditors: Yygz314 2711859393@qq.com
 * @LastEditTime: 2026-06-06 14:04:24
 */
#include<iostream>
#include "convolution.h"

using namespace std;

int main(){
    //1.自定义输入（3*3小图像）
    int in_h = 3,in_w = 3;
    float input_data[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    const float* input[3] = {input_data[0],input_data[1],input_data[2]};

    //自定义卷积核（2*2锐化核）
    int k_h = 2,k_w = 2;
    float kernel_data[2][2] = {
        {0,1},
        {1,0}
    };
    const float* kernel[2] = {kernel_data[0],kernel_data[1]};

    //自定义输出空间
    int out_h = in_h - k_h + 1;
    int out_w = in_w - k_w +1;
    float output_data[2][2] = {0};
    float* output[2] = {output_data[0],output_data[1]};

    //调用倦极库
    conv2d(input,kernel,output,in_h,in_w,k_h,k_w);

    //输出结果
    for(int i = 0;i < out_h;i++){
        for(int j = 0;j < out_w;j++){
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}