var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g,"").split('\n').filter(line => line.length > 0);

lines.forEach(line => {
  line = line.split("").reverse().join("");
  var operands = line.split(/\+|\=/).map(Number);
  if (operands[0] === operands[1] + operands[2])
    console.log("True");
  else
    console.log("False");
});
