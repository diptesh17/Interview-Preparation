int makeBeautiful(string str) {
	// Write your code here
	int n = str.size();
    int count1 = 0, count2 = 0;

    // Count the number of operations needed to change the string to '010101...'
    for (int i = 0; i < n; ++i) {

        if (i % 2 == 0 && str[i] != '0') {
            count1++;
        }
        if (i % 2 == 1 && str[i] != '1') {
            count1++;
        }
    }
    // Count the number of operations needed to change the string to '101010...
    for (int i = 0; i < n; ++i) {

        if (i % 2 == 0 && str[i] != '1') {
            count2++;
        }
        if (i % 2 == 1 && str[i] != '0') {
            count2++;
            }
    }

    // Return the minimum of the two counts

    return min(count1, count2);

}
