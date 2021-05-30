n = int(input())
x = int(input())
ans = 0
for i in range(n):

  p1, p2 = [int(i) for i in input().split()]
  diff = abs(p1 - p2)

  if diff > x:
    p3 = int(input())
    ans += p3
  
  else:
    ans += max(p1, p2)

print(ans)