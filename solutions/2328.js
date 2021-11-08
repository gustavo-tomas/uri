var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift()), sum = 0;
var cuts = lines.shift();
var cutsArr = cuts.split(' ');

for(let i=0; i<n; i++){
    let cut = parseInt(cutsArr[i]);
    sum += (cut - 1);
}
console.log(sum);
