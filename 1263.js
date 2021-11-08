var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

lines.forEach(line => {
  var count = 0;
  words = line.split(" ");
  words = words.filter(word => word !== "");
  
  for (let i = 0; i < words.length - 1; i++) {
    currWord = words[i].toLowerCase();
    nextWord = words[i+1].toLowerCase();
    
    if (currWord[0] === nextWord[0]) {
      count++;
      while (currWord[0] === nextWord[0] && i < words.length - 2) {
        i++;
        currWord = nextWord;
        nextWord = words[i + 1].toLowerCase();
      }
    }
  }
  if (words.length > 0) {
    console.log(count);
  }
});
