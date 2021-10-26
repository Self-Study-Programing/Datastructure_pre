print(ord('a')) # 97
print(ord('A')) # 65

print(chr(97)) # a
for i in range(97, 123):
    print(chr(i), end=' ')
print()
for i in range(0, 26):
    print(chr(ord('a')+i), end=" ")