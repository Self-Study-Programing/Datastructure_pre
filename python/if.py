a=5
if a>=3:
    print('3이상')
elif a>1:
    print('3미만 1초과')
else:
    print('1이하')

n1,n2=map(int,input().split())
if n1>=n2:
    print(n1)
else:
    print(n2)

score = int(input())
if score >= 70:
    print('최우수')
elif score >= 50:
    print('우수')
elif score >= 20:
    print('보통')
else:
    print('노력 필요')