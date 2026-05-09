'''
LastEditors: Yygz314 2711859393@qq.com
LastEditTime: 2026-05-06 09:01:20
'''
'''进度条示例'''
import time

for i in range(101):
    bar = '[' + '=' * (i//2) + '' * (50-i//2) + ']'
    print(f"\r{bar}{i:3}%",end='',flush=True)
    time.sleep(0.05)
print()