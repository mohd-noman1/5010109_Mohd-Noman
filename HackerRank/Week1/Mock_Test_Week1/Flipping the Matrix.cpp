int flippingMatrix(vector<vector<int>> matrix) {
 int n = matrix.size() / 2;
 int total = 0;
 for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
 total += max({
 matrix[i][j],
 matrix[i][2 * n - 1 - j],
 matrix[2 * n - 1 - i][j],
 matrix[2 * n - 1 - i][2 * n - 1 - j]
 });
 }
 }
 return total;
}
