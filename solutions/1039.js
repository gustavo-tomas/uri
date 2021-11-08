var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

do{
    var values = lines.shift();
    if(values){
        values = values.split(' ').map(Number);
        var dist = Math.sqrt((values[1]-values[4])**2 + (values[2]-values[5])**2); 
        dist += values[3];
        if(dist > values[0]) console.log('MORTO');
        else console.log('RICO');
    }
}while(values);