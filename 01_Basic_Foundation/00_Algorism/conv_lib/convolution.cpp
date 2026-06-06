#include<iostream>
#include<cstring>

//2D 单通道卷积实现（valid模式，步长1）
void conv2d(
    const float** input,
    const float** kernel,
    float** output,
    int in_h,int in_w,
    int k_h,int k_w
){
    //计算输出尺寸
    int out_h = in_h - k_h + 1;
    int out_w = in_w - k_w + 1;

    //初始化输出为 0 
    for(int i = 0; i < out_h; i++){
        memset(output[i],0,out_w * sizeof(float));
    }

    //卷积计算
    for(int i = 0;i<out_h;i++){
        for(int j = 0;j<out_w;j++){
            float sum = 0.0f;
            //遍历卷积核
            for(int ki = 0;ki<k_h;ki++){
                for(int kj = 0;kj < k_w;kj++){
                    sum += input[i+ki][j+kj] * kernel[ki][kj];
                }
            }
            output[i][j] = sum;
        }
    }
}