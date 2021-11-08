var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

var t = lines.shift();
for(let j=1; j<=t; j++){
    [n,k] = lines.shift().split(' ').map(Number);
    let people = [];
    
    for(let i=1; i<=n; i++) people.push(i);
    
    let curr = 0;
    while(people.length > 1){
        curr = (curr + k - 1) % people.length;
        people.splice(curr,1);
    }

    console.log('Case %d: %d', j, people[0]);
}