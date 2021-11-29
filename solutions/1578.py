n = int(input())
for l in range(n):
  m = int(input())
  mat = [[]]
  for i in range(m):
    args = list(map(int, input().split()))
    mat.append(args)

  mat.remove(mat[0])
  for i in range(m):
    for j in range(m):
      mat[i][j] *= mat[i][j]  
  
  if l > 0:
    print()
  print("Quadrado da matriz #" + str(l+4) + ":")
  for i in range(m):
    for j in range(m):
      if j > 0:
        print(" ", end='')
      col = list(zip(*mat))
      size = max(len(str(e)) for e in col[j])
      print(str(mat[i][j]).rjust(size), end='')
    print()
