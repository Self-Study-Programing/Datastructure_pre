def f_iter(n):
    r=1
    for i in range(1,n+1):
        r*=i
    return r

def f_rec(n):
    if n<=1:
        return 1
    else:
        return n*f_rec(n-1)

print(f_iter(5))
print(f_rec(5))