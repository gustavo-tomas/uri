var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

function gcd(a, b){ 
    return (!a) ? b : gcd(b % a, a);
}

var n = parseInt(lines.shift());
while(n-- > 0){
    var line = lines.shift().split(' ');
    var n1 = parseInt(line[0]);
    var d1 = parseInt(line[2]);
    var op = line[3];
    var n2 = parseInt(line[4]);
    var d2 = parseInt(line[6]);
    var nr = 0, dr = 0;
    switch (op){
        case '+':
            nr = n1 * d2 + n2 * d1;
            dr = d1 * d2;
            break;
        case '-':
            nr = n1 * d2 - n2 * d1;
            dr = d1 * d2;
            break;
        case '*':
            nr = n1 * n2;
            dr = d1 * d2;
            break;
        case '/':
            nr = n1 * d2;
            dr = n2 * d1;
            break;
        default:
            break;
    }
    let div = Math.abs(gcd(nr,dr));
    console.log(nr+'/'+dr,'=',nr/div+'/'+dr/div);
}