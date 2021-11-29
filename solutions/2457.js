var input = require('fs').readFileSync('stdin', 'utf8');
var [letter, words] = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);
words = words.split(" ");

var contains = words.filter(w => w.match(letter));
var perc = contains.length / words.length * 100;
console.log(perc.toFixed(1));
