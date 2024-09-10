#include "alg.h"
using namespace std;

//sorting alg for vectors

void selection_sort(vector<int> &data) {
    int n = data.size();

    for(int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[min_index]) { // find min element
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(data[min_index], data[i]);
        }
    }
}

void cpp_sort(vector<int> &data){
    sort(data.begin(), data.end());
}

void merge(vector<int> &data, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int i = 0, j = 0, k = l;

    vector<int> r_vec(n2), l_vec(n1);

    for (int i = 0; i < n1; i++) l_vec[i] = data[l + i];
    for (int i = 0; i < n2; i++) r_vec[i] = data[mid + 1 + i];

    while (i < n1 && j < n2){
        if (l_vec[i] <= r_vec[j]){
            data[k] = l_vec[i];
            ++i;
        } else{
            data[k] = r_vec[j];
            ++j;
        }
        ++k;
    }
    while (i < n1){
        data[k] = l_vec[i];
        ++i;
        ++k;
    }
    while(j < n2){
        data[k] = r_vec[j];
        ++j;
        ++k;
    }
}

void mergesort(vector<int> &data, int l, int r){
    if (l >= r) return;
    int mid = l + (r - l) / 2;

    mergesort(data, l, mid);
    mergesort(data, mid + 1, r); 
    
    merge(data, l, mid, r); //print out func for simplicity
}

int partition(vector<int> &data, int l, int h){
    int pivot = data[h];

    int i = l - 1;

    for (int j = l; j <= h - 1; j++){
        if (data[j] <= pivot){
            i++;
            swap(data[i], data[j]);
        }
    }

    swap(data[i + 1], data[h]);

    return (i + 1);
}

void quicksort(vector<int> &data, int l, int h){
    if(l < h){
        int p_index = partition(data, l, h);

        quicksort(data, l, p_index - 1);
        quicksort(data, p_index + 1, h);
    }
}

vector<vector<int>> iter_trad(const vector<vector<int>> &a, const vector<vector<int>> &b){
    int rowsA = a.size();
    int colsA = a[0].size();
    int rowsB = b.size();
    int colsB = b[0].size();

    if (colsA != rowsB) {
        throw runtime_error("Matrix dimensions are not compatible for multiplication"); //error for non squared matrix
    }

    vector<vector<int>> res(rowsA, vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return res;
}

vector<vector<int>> transp_matrix(const vector<vector<int>> &t){
    int rows = t.size();
    int cols = t[0].size();
    vector<vector<int>> t_transp(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            t_transp[j][i] = t[i][j];
        }
    }
    return t_transp;
}

vector<vector<int>> iter_transp(const vector<vector<int>> &a, const vector<vector<int>> &b){
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                res[i][j] += a[i][k] * b[j][k];
            }
        }
    }
    return res;
}

vector<vector<int>> add_matrix(const vector<vector<int>> &a, const vector<vector<int>> &b){
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = a[i][j] + b[i][j];
        }
    }
    return res;
}

vector<vector<int>> subst_matrix(const vector<vector<int>> &a, const vector<vector<int>> &b){
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = a[i][j] - b[i][j];
        }
    }
    return res;
}

vector<vector<int>> strassen(const vector<vector<int>> &a, const vector<vector<int>> &b) {
    int n = a.size();
    if (n == 1) return {{a[0][0] * b[0][0]}};

    int new_size = n / 2;
    vector<vector<int>> A11(new_size, vector<int>(new_size));
    vector<vector<int>> A12(new_size, vector<int>(new_size));
    vector<vector<int>> A21(new_size, vector<int>(new_size));
    vector<vector<int>> A22(new_size, vector<int>(new_size));

    vector<vector<int>> B11(new_size, vector<int>(new_size));
    vector<vector<int>> B12(new_size, vector<int>(new_size));
    vector<vector<int>> B21(new_size, vector<int>(new_size));
    vector<vector<int>> B22(new_size, vector<int>(new_size));

    // Divide matrices into submatrices
    for (int i = 0; i < new_size; i++) {
        for (int j = 0; j < new_size; j++) {
            A11[i][j] = a[i][j];
            A12[i][j] = a[i][j + new_size];
            A21[i][j] = a[i + new_size][j];
            A22[i][j] = a[i + new_size][j + new_size];

            B11[i][j] = b[i][j];
            B12[i][j] = b[i][j + new_size];
            B21[i][j] = b[i + new_size][j];
            B22[i][j] = b[i + new_size][j + new_size];
        }
    }

    // Calculate the 7 products
    vector<vector<int>> M1 = strassen(add_matrix(A11, A22), add_matrix(B11, B22));
    vector<vector<int>> M2 = strassen(add_matrix(A21, A22), B11);
    vector<vector<int>> M3 = strassen(A11, subst_matrix(B12, B22));
    vector<vector<int>> M4 = strassen(A22, subst_matrix(B21, B11));
    vector<vector<int>> M5 = strassen(add_matrix(A11, A12), B22);
    vector<vector<int>> M6 = strassen(subst_matrix(A21, A11), add_matrix(B11, B12));
    vector<vector<int>> M7 = strassen(subst_matrix(A12, A22), add_matrix(B21, B22));

    // Calculate the resulting submatrices
    vector<vector<int>> C11 = add_matrix(subst_matrix(add_matrix(M1, M4), M5), M7);
    vector<vector<int>> C12 = add_matrix(M3, M5);
    vector<vector<int>> C21 = add_matrix(M2, M4);
    vector<vector<int>> C22 = add_matrix(subst_matrix(add_matrix(M1, M3), M2), M6);

    // Combine the submatrices into the final result matrix
    vector<vector<int>> res(n, vector<int>(n));

    for (int i = 0; i < new_size; i++) {
        for (int j = 0; j < new_size; j++) {
            res[i][j] = C11[i][j];
            res[i][j + new_size] = C12[i][j];
            res[i + new_size][j] = C21[i][j];
            res[i + new_size][j + new_size] = C22[i][j];
        }
    }

    return res;
}

//aux funcs

void print_matrix(const vector<vector<int>>& data){
    for (const auto& row : data){
        for(int element : row) cout << element << " ";
        cout << endl;
    }
}

vector<int> csv2_vector(string path){
    string large_path = path;

    ifstream file(large_path);

    vector<int> data;

    string line;

    while(getline(file, line)){
        int n = stoi(line);
        data.push_back(n);
        
    }

    file.close();
    return data;
}

vector<vector<int>> csv2_matrix(const string &path){
    ifstream file(path);
    vector<vector<int>> matrix;
    string line;

    while(getline(file, line)){
        stringstream ss(line);
        vector<int> row;
        string value;
        while(getline(ss, value, ',')){
            row.push_back(stoi(value));
        }
        matrix.push_back(row);
    }
    return matrix;
}

void sort_percent(vector<int> &data, double percent){

    size_t data_size = data.size();
    size_t n_sort = static_cast<size_t>(data_size * (percent / 100));

    sort(data.begin(), data.end());

    vector<int> top(data.end() - n_sort, data.end());

    sort(top.begin(), top.end());

    copy(top.begin(), top.end(), data.end() - n_sort);
}

