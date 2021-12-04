var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);

const table = [
  ["a", "\@"],
  ["e", "\&"],
  ["i", "\!"],
  ["o", "\\*"],
  ["u", "\#"]
];

lines.forEach(line => {
  table.forEach(item => {
    const character = new RegExp(item[1], "g");
    line = line.replace(character, item[0]);
  });
  console.log(line);
});
