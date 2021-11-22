var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

lines.shift();
lines.forEach(name => {
  if (name.length >= 1) {
    const regVowel = new RegExp(/a|e|i|o|u/i);
    const consonants = name
      .replace("\r", "")
      .split(regVowel)
      .filter(consonant => consonant.length >= 3);
  
    if (consonants.length >= 1) {
      console.log(name.replace("\r",""), "nao eh facil");
    } else {
      console.log(name.replace("\r",""), "eh facil");
    }
  }
});
