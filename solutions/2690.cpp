var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);
lines.shift();

const upper = {
  'G':'0', 'Q':'0', 'I':'1', 'S':'1',
  'E':'2', 'O':'2', 'Y':'2', 'F':'3', 'P':'3', 'Z':'3',
  'J':'4', 'T':'4', 'D':'5', 'N':'5', 'X':'5',
  'A':'6', 'K':'6', 'U':'6', 'C':'7', 'M':'7', 'W':'7',
  'B':'8', 'L':'8', 'V':'8', 'H':'9', 'R':'9'
};

lines.forEach(line => {
  var res = "";
  letters = line.replace(/\s/g, "").split("");
  letters.forEach(letter => {
    if (letter == letter.toLowerCase())
      res += ((letter.charCodeAt(0) - 97) % 10).toString();
    else
      res += upper[letter];
  });
  console.log(res.slice(0,12));
});
