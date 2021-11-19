var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

lines = Object.values(lines.filter(line => line.length > 0));

const dict = new Set();
lines.forEach(line => {
  const words = line.toLowerCase().split(/[^a-zA-Z]/).filter(word => word.length > 0);
  words.forEach(word => dict.add(word));
});
[...dict].sort().forEach(word => console.log(word));