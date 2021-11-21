var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var [a, b, c, d] = lines[0].split(" ");
console.log(Math.abs((Number(a) + Number(d)) - (Number(b) + Number(c))));
