a = input()

for i in range(int(a)+1, 20000):
  b = str(i)
  freq = [0]*10
  c = True
  for j in range(len(b)):
    if freq[int(b[j])] == 1:
      c = False
      break
    freq[int(b[j])] = 1
  if c:
    print(i)
    break