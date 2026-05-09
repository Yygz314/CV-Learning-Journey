import numpy as np
import cv2

img = np.zeros((480,640,3),np.uint8)

roi = img[100:400,100:600]  # 创建ROI, 100行100列宽480行640行（y,x）
roi[:,:] = [0,0,255]    # 填充,3个通道
roi[:,10] = [0,0,0]
roi[10:200,10:200] = [0,255,0]  

cv2.imshow('img',roi)
key = cv2.waitKey(0)
if key & 0xFF == ord('q'):
    cv2.destroyAllWindows()
