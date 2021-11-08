var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var n = 0;
while(n != -1){
    n = parseInt(lines.shift());
    if(n > -1){
        let entries = lines.shift().split(' ');
        let sum = 0, count = 0;
        for(let i=0; i<entries.length; i++){
            let entry = parseInt(entries[i]);
            sum += entry;
            if(sum % 100 == 0){
                count++;
            }
        }
        console.log(count)
    }
}