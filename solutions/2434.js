var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n').slice(0, -1);

let [n, balance] = lines[0].split(' ');
let worst = parseInt(balance);

balance = parseInt(balance);
lines = lines.slice(1);
lines.forEach(value => {
  balance += parseInt(value);
  worst = balance < worst ? balance : worst;
});
console.log(worst);
