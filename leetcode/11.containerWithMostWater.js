var min = function (a, b) { return a > b ? b : a; };
var abs = function (a) { return a >= 0 ? a : -1 * a; };
var pow = function (a) { return a * a; };
var maxArea = function (heights) {
    var max_square = 0;
    var length = heights.length - 1;
    for (var i = 0; i < heights.length; i++) { /*
      0    1    2   3=>2
      2-0  2-1  2-2
      1 2 1
*/
        var max_length = length - (i % (Math.ceil(length / 2)));
        console.log(max_length, length, i, length / 2, Math.ceil(length / 2));
        var square = pow(min(max_length, heights[i]));
        if (max_square < square)
            max_square = square;
    }
    return max_square;
};
console.log("[1,2,1] = ", maxArea([1, 2, 1]));
