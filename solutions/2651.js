var input = require('fs').readFileSync('stdin', 'utf8');
var name = input.replace(/\r/g, "").toLowerCase();
if (name.match(/zelda/))
  console.log("Link Bolado")
else
  console.log("Link Tranquilo")
