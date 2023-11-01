var findMode = function(root) {
    // Initialize a Map to store the frequency of each value
    var frequencyMap = new Map();

    // Helper function to perform an in-order traversal and count the frequency of each value
    function isValid(node) {
        if (node === null) return;

        isValid(node.left); // Traverse left subtree
        frequencyMap.set(node.val, (frequencyMap.get(node.val) || 0) + 1); // Update frequency count in the map
        isValid(node.right); // Traverse right subtree
    }

    isValid(root); // Call the helper function to populate the frequency map

    let maxi = 0;
    // Find the maximum frequency encountered
    frequencyMap.forEach(value => {
        maxi = Math.max(maxi, value);
    });

    let ans = [];
    // Collect elements with the maximum frequency in the result list
    frequencyMap.forEach((value, key) => {
        if (value === maxi) {
            ans.push(key);
        }
    });

    return ans;
};
