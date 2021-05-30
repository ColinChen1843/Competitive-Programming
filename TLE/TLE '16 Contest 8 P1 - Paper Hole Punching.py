t = str(input())
n = int(input())

for i in range(n):
  x = str(input())
  a = True
  for j in range(len(t)):
    if t[j] not in x:
      a = False
      print("no")
      break
  if a:
    print("yes")