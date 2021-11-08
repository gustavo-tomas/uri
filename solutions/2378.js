var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

var curr = 0, ans = 'N', [n, max] = lines.shift().split(' ');
n = parseInt(n);
max = parseInt(max);

for(let i=0; i<n; i++){
    var [out_, in_] = lines.shift().split(' ');
    in_ = parseInt(in_);
    out_ = parseInt(out_);
    curr = curr - out_ + in_;
    if(curr > max) ans = 'S';
}
console.log(ans);