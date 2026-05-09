'''
LastEditors: Yygz314 2711859393@qq.com
LastEditTime: 2026-05-06 10:02:03
'''
def greet():
    print("来自example模块的问候！")
    
if __name__ == "__main__":
    print("该脚本正在直接运行。")
    greet()
else:
    print("该脚本作为模块被导入。")