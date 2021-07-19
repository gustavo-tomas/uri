var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift());
for(let i=0; i<n; i++){
    let dimensions = lines.shift().split(' ');
    let y = parseInt(dimensions[0]) - 2;
    let x = parseInt(dimensions[1]) - 2;
    console.log(Math.ceil(x/3) * Math.ceil(y/3));
}