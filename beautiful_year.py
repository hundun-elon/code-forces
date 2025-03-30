year = int(input())

def beautiful(s):

	chars = set(s)

	return len(chars)==len(s)

stop = 100000000000000000


for i in range(year+1, stop):
	
	if beautiful(str(i)):
		print(i)
		break





