def shellsort(list):
    gap = len(list)//2
    while gap > 0:
        for index in range(len(list)):
            temp = list[index]
            subindex = index
            while subindex >= gap and list[subindex - gap] > temp:
                list[subindex] = list[subindex - gap]
                subindex = subindex - gap

            list[subindex] = temp
        gap = gap//2
    return list

def interpolation_sear(list,target):
    low = 0
    high = len(list) - 1

    while high > low :
        pos = low + int((target - list[low]) * (high - low)/(list[high] - list[low]))
        if pos < low or pos > high:
            break
        elif target == list[pos]:
            return pos
        elif list[pos] > target:
            high = pos - 1
        else:
            low = pos + 1
    return -1


list = [10,14,19,26,27,1,33,35,42,44]
print(shellsort(list))
target = int(input("input Number: "))
index = interpolation_sear(list,target)
if index != -1:
    print("element found at : ",index)
else:
    print("element not found")