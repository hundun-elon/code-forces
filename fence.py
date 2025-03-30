n= int(input())

h=int(input())


width = 0

for i in range(n):
	a = int(input())

	if a < h:
		width+=1
	else:
		width+=2



print(width)
