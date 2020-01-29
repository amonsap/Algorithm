
def Liner_Search(list,target):
    for i in range(len(list)-1):
        if list[i] == target:
            return i
    return -1

list = [64,34,50,25,12,22,11]
target = int(input("input Number: "))
index = Liner_Search(list,target)
if index != -1:
    print("element found at : ",index)
else:
    print("element not found")