m = int(input())
ans = 0
a = [int(i) for i in input().split()]
for i in range(m):
  ans += a[i]
print(ans)