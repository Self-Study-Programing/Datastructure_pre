# 함수의 매개변수 한개 사용해보기

def Hello(name):
    print('Hi,',name)

def Hello1(name):
    print(f'hello, {name}')

def Hello2(name, hobby):
    print(f'Hi, My name is {name},'\
        f' My hobby is {hobby}')

Hello('abc')
Hello1('def')
Hello2('ghi', 'jkl')

def info(name, address, phone):
    print(f'제 이름은 {name}이고, 주소는 {address}입니다. 제 전화번호는 {phone}에요')

info('배', '안심', '010')

def Hello3(name, age):
    print('Hi,',name, 'You are', age, 'years old.')

Hello3('sdf', 17)

def singer(a,b,c):
    print(f'제가 좋아하는 가수는 {a} {b} {c}입니다')

a = input('좋아하는 첫번째 가수 : ')
b = input('좋아하는 두번째 가수 : ')
c = input('좋아하는 세번째 가수 : ')
singer(a,b,c)