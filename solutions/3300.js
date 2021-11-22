var input = require('fs').readFileSync('stdin', 'utf8');
var num = input.replace("\r","").split('\n')[0];

const arr = num.split("13");
if (arr.length > 1) {
  console.log(num, "es de Mala Suerte");
} else {
  console.log(num, "NO es de Mala Suerte");
}
