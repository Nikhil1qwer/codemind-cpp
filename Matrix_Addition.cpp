#include <iostream>
#include <vector>

using namespace std;

vector < vector <int> > inputMatrixFromUser(int rows, int cols) {
    vector < vector <int> > matrix (rows, vector <int> (cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

vector < vector <int> > AddTwoMatrixs (vector < vector <int> > &Mat1, vector < vector <int> > &Mat2) {
    int rows = Mat1.size();
    int cols = Mat1[0].size();
    
    vector < vector <int> > Result (rows, vector<int> (cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Result[i][j] = Mat1[i][j] + Mat2[i][j];
        }
    }
    return Result;
}

void DisplayMatrix(vector < vector <int> > mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }   cout << endl;
    }
}

int main() {
    int rows1, cols1;
    cin >> rows1 >> cols1;
    vector < vector <int> > matrix1 = inputMatrixFromUser(rows1, cols1);
    
    int rows2, cols2;
    cin >> rows2 >> cols2;
    vector < vector <int> > matrix2 = inputMatrixFromUser(rows2, cols2);
    
    DisplayMatrix(AddTwoMatrixs(matrix1, matrix2));
    
}
