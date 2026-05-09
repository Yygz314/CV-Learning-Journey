'''
LastEditors: Yygz314 2711859393@qq.com
LastEditTime: 2026-05-06 11:09:38
'''
import numpy as np

# 通过array创建数组
a = np.array([1,2,3])
b = np.array([[1,2,3],[4,5,6]])

print(a)
print(b)

# 通过zeros创建全零数组
c = np.zeros((3,5,3),np.uint8)  #  创建3行5列的3通道全零数组
print(c)

# 通过ones创建全一数组
d = np.ones((3,5,3),np.uint8)  # 创建3行5列的3通道全一数组
print(d)

# 通过full创建全指定值数组
e = np.full((3,5,3),255,np.uint8)  # 创建3行5列的3通道全255数组
print(e)

#定义单位矩阵identity
f = np.identity(4)  # 创建4行4列的单位矩阵
print(f)

# 通过eye创建对角矩阵
g = np.eye(3,5,k=2)  # 创建3行5列的对角矩阵，k=2表示对角线向右偏移2个位置
print(g)