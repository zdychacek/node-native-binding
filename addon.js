var addon = require('./build/Release/addon');
var seconds = 3;

console.log('Sync result:', addon.calculateSync(seconds));
console.log('Continue...');

addon.calculateAsync(seconds, function (err, result) {
	console.log('Async result:', result);
});
console.log('Continue...');