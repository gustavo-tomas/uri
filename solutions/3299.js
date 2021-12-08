var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n')[0];

const treze = lines.search("13");
if (treze >= 0)
    console.log(lines, "es de Mala Suerte");
else
    console.log(lines, "NO es de Mala Suerte");
