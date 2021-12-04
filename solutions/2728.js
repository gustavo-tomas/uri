var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);

lines.forEach(line => {
  var cobol = "cobol", ok = 1;
  const words = line.toLowerCase().split("-");
  for (let i = 0; ok && i < words.length; i++)
    if (words[i][0] != cobol[i] && words[i][words[i].length - 1] != cobol[i])
      ok = 0;

  if (ok)
    console.log("GRACE HOPPER");
  else
    console.log("BUG");
});
