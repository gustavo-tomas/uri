var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);

lines.forEach(line => {
  const values = line.split(/\+|\=/);
  if (values[2].search(/[A-Z]/) >= 0)
    console.log(parseInt(values[0]) + parseInt(values[1]));
  else if (values[1].search(/[A-Z]/) >= 0)
    console.log(parseInt(values[2]) - parseInt(values[0]))
  else
    console.log(parseInt(values[2]) - parseInt(values[1]))
});
