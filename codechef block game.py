t=int(raw_input())
for i in range(t):
	n=raw_input()
	s=n[::-1]
	if n == s:
		print "wins"
	else :
		print "losses" 