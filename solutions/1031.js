var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift());
while(n > 0){
    let people = [], backup = [];
    
    for(let i=1; i<=n; i++){
        people.push(i);
        backup.push(i);
    }
    
    let curr, k = 1;
    while(people.length > 1){
        curr = 0;
        while(people.length > 1){
            people.splice(curr,1);
            curr = (curr + k - 1) % people.length;
        }
        if(people[0] != 13)
            people = [...backup];
        else
            console.log(k);
        k++;
    }
    var n = parseInt(lines.shift());
}