var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g,"").split('\n').filter(l => l.length > 0);
const [n, w] = lines[0].split(" ").map(Number);
lines.shift();

lines.forEach(line => {
  var height = Number(line.split(" ").slice(-1));
  if (height > w) {
    console.log(line.split(" ").slice(0,-1).join(" "));
  }
});
