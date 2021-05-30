n, d = [int(i) for i in input().split()]
lastx = 0
lasty = 0

streak = 0
ans = 1
miss = True

for i in range(n):
  x,y = [int(i) for i in input().split()]
  distance = ((x-lastx)**2 + (y-lasty)**2)

  if miss:
    streak += 1
    miss = False

  elif distance <= d**2:
    streak += 1
  else:
    streak = 0
    miss = True
  lastx = x
  lasty = y
  ans = max(ans, streak)

print(ans)