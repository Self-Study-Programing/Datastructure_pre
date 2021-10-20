# import random

# arr = list()

# print(arr)

# for i in range(1,11):
#     arr.append(random.randint(1,100))

# print('*' * 40)
# print(arr)
# print(max(arr))
# print('*' * 40)

li=[]
li.append('BTS')
li.append('Black Pink')
print(li)
print(li[1])

for i in range(0,3,1):
    li.append(input('가수 이름을 쓰세요 : '))

print('-' * 20)
print(li)
print(f'리스트 개수 {len(li)}개 입니다.')