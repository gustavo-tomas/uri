var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift())
while(n--){
    var max = 0, bin = parseInt(lines.shift()).toString(2)
    for(let i=0; i<bin.length; i++){
        let j=i, count = 0;
        while(bin[j] == '1'){
            count++
            j++
        }
        max = count > max ? count : max;
    }
    console.log(max);
}