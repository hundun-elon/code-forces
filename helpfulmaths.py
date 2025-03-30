x = input()
nums = list()
for i in range(0,len(x),2):
	nums.append(x[i])
res =""
nums.sort()
if len(x)==1:
	print(x)
else:
#	res =""
	
	for i in range(len(nums)-1):
		res+=nums[i]+'+'
	
	res+=nums[-1]

#print(nums)
print(res)
