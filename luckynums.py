
number = int(input())
res = str(number)

n = len(res)
nums =0

for char in res:
	if char in {'4','7'}:
		nums+=1
		#break



if nums==4 or nums==7:
	print("YES")
else:
	print("NO")
#print(res)
