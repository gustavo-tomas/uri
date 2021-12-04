var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);

const cpf = lines[0].replace(/[^0-9\.]/g, "").slice(0, 11);
var first_val = lines[0].replace(/[^0-9\.]/g, "").slice(11);
var second_val = lines[1].replace(/[^0-9\.]/g, "");

const p1 = first_val.search(/\./g);
if (p1 >= 0)
  first_val = first_val.slice(0, p1 + 3);

const p2 = second_val.search(/\./g);
if (p2 >= 0)
  second_val = second_val.slice(0, p2 + 3);

const res = (parseFloat(first_val) || 0.00) + (parseFloat(second_val) || 0.00);

console.log("cpf", cpf);
console.log(res.toFixed(2));
