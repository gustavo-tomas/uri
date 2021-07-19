var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var n = lines.shift(), orderedArr = [], arr = [];
var weights = lines.shift().split(' ');

for(let i=0; i<n; i++){
    let weight = parseInt(weights[i]);
    arr.push(weight);
}

orderedArr = arr.sort((a,b) => a-b).slice(0);

let ok = true;
for(let i=0; i<n-1 && ok; i++){
    if(orderedArr[i+1] - orderedArr[i] > 8 || orderedArr[0] > 8)
        ok = false;
}
if(ok) console.log('S');
else console.log('N');