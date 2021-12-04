var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);
lines.shift();

lines.forEach(line => {
  if (line.length != 20
    || line.slice(0,2) != "RA"
    || line.slice(2).match(/\D/g)
    || parseInt(line.slice(2)) <= 0)
    console.log("INVALID DATA");
  else
    console.log(line.slice(2).replace(/^0+/, ""));
});
