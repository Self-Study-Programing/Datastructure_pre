arr=['b','c','a','f','t','e']
print(arr)
arr.sort()
print(arr)
print(arr[len(arr)-1])

arr2=['b','c','a','f','t','e']
arr2.sort(reverse=True)
print(arr2[0])

arr2.sort()
print(arr2[-1])

score = [55,78,99,34,87]
score.sort()
print(score[0], score[-1])