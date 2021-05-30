n = int(input())
s = input()

freq = [False]*600
freq[1] = True
freq[2] = True

fib = [0]*20
fib[1] = 1
fib[2] = 1

for i in range(3, 15):
  fib[i] = fib[i-1] + fib[i-2]
  freq[fib[i]] = True

x = True

for i in range(n):
  if s[i] == 'A' and freq[i+1] != True:
    print("Bruno, GO TO SLEEP")
    x = False
    break
  if s[i] != 'A' and freq[i+1] == True:
    print("Bruno, GO TO SLEEP")
    x = False
    break

if x:
  print("That's quite the observation!")