var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);
lines.shift();

lines.forEach(line => {
  const items = line.split(" ").sort();
  const sorted_items = [...new Set(items)];
  console.log(...sorted_items);
});
