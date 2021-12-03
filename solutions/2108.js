var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.replace(/\r/g, "").split("\n").filter(l => l.length > 0);
lines.pop();

var biggest = "", res = "";
lines.forEach(line => {
  let flag = 0;
  line = line.split(" ");
  line.forEach(word => {
    if (flag)
      res += "-";
    res += word.length;
    if (word.length >= biggest.length)
      biggest = word;
    flag = 1;
  });
  res += "\n";
});

console.log(res);
console.log("The biggest word:",biggest);
