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

def Binary_search(list,target):
    low = 0
    high = len(list)-1

    while high >= low:
        mid = low + int((high - low) / 2)
        if list[mid]==target:
            return mid
        elif list[mid]>target:
            high = mid - 1
        else:
            low = mid + 1
    return -1

list = [10,30,19,26,27,31,33,35,42,44]

print(shellsort(list))
target = int(input("input Number: "))
index = Binary_search(list,target)
if index != -1:
    print("element found at : ",index)
else:
    print("element not found")
