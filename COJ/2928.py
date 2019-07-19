# Copyright (c) Jorge Nunez Siri. All rights reserved.
# Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2928

while True:
	n = raw_input()
	spl = map(int,n.split())
	d = spl[0]
	k = spl[1]
	if d == 0 and k == 0: break
	x = int(str(d)*k)
	sum = 0
	cad = str(x*x)
	for i in cad:
		sum = sum + int(i)
	print sum
