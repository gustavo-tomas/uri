var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var words = lines.shift().split(' ');
for(let i=0; i<words.length; i++){
    let word = words[i];
    if(i > 0 && i < words.length) process.stdout.write(' ')
    if(word[0] == word[2] && word[1] == word[3]){
        let newWord = word.slice(2);
        process.stdout.write(newWord);
    } else {
        process.stdout.write(word);
    }
}
console.log()