import random

arr=[random.randint(-10, 10) for _ in range(20)]

ot_arr=[]
pos_arr=[]
for num in arr:
    if num < 0:
        ot_arr.append(num)
    else:
        pos_arr.append(num)

print ("Исходный массив: ", arr)
print ("Новый массив: "б ot_arr + pos_arr)
