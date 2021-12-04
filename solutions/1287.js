var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
lines.pop();

lines.forEach(line => {
  line = line
    .replace(/o|O/g, "0")
    .replace(/l/g, "1")
    .replace(/\s|,/g, "");
  const num = parseInt(line);
  if (line.match(/\D/g))
    console.log("error");
  else if (isNaN(num) || num > 2147483647)
    console.log("error");
  else
    console.log(num);
});
