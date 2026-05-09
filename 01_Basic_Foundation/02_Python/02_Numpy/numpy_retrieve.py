'''
LastEditors: Yygz314 2711859393@qq.com
LastEditTime: 2026-05-06 15:57:31
'''
import numpy as np
import cv2

img = np.zeros((480,640,3),np.uint8)

# 检索
print(img[100,100]) # 获取第100行第100列的像素值
count = 0;

# 赋值
while count < 200:  # 将第100行第100列的像素值设置为255，循环200次
    img[count,100,0] = 255  
    count += 1

cv2.imshow('img',img)
key = cv2.waitKey(0)
if key & 0xFF == ord('q'):
    cv2.destroyAllWindows()
