/**
 * @return {function(...args): string}
 */
var createHelloWorld = function() {
    return function(args) {
        return "Hello World";
    };
};
