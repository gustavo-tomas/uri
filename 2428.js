var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

var sortedArr = [], arr = lines.shift().split(' ');
for(let i=0; i<4; i++)
    sortedArr.push(parseInt(arr[i]));

sortedArr.sort((a,b) => a-b);
if(sortedArr[0] * sortedArr[3] === sortedArr[1] * sortedArr[2])
    console.log('S')
else 
    console.log('N')