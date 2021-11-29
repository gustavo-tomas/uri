var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g,"").split('\n').filter(l => l.length > 0);
lines.shift();

const countries = [];
lines.forEach(line => {
    line = line.split(" ");
    const country = {
        "country": line.shift(),
        "medals": [...line].map(Number)
    };
    countries.push(country);
});
countries.sort((a, b) => {
    if (a.country > b.country)
        return 1;
    if (a.country < b.country)
        return -1;
    return 0;
});
countries.sort((a, b) => {
    if (a.medals[2] > b.medals[2])
        return -1;
    if (a.medals[2] < b.medals[2])
        return 1;
    return 0;
});
countries.sort((a, b) => {
    if (a.medals[1] > b.medals[1])
        return -1;
    if (a.medals[1] < b.medals[1])
        return 1;
    return 0;
});
countries.sort((a, b) => {
    if (a.medals[0] > b.medals[0])
        return -1;
    if (a.medals[0] < b.medals[0])
        return 1;
    return 0;
});
countries.forEach(country => {
    console.log(country.country, ...country.medals)
});
