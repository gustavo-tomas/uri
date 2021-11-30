var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);
var [n, m] = lines[0].split(" ").map(Number);

function prime(x) {
  if (x == 1)
    return 0;
  if (x % 2 === 0)
    return x == 2 ? 1 : 0;
  for (let i = 3; i * i <= x; i++)
    if (x % i === 0)
      return 0;
  return 1;
}

var p = 0, q = 0;
for (let i = n; i >= 2 && p === 0; i--)
  if (prime(i))
    p = i;
     
for (let i = m; i >= 2 && q === 0; i--)
  if (prime(i))
    q = i;
    
console.log(p * q);
