#include <bits/stdc++.h>
#include <chrono>
using namespace std;

//sorting alg for vectors
void selection_sort(vector<int> &data);
void cpp_sort(vector<int> &data);
void mergesort(vector<int> &data, int l, int r);
void quicksort(vector<int> &data, int l, int h);

//sorting algs for matrixs
vector<vector<int>> iter_trad(const vector<vector<int>> &a, const vector<vector<int>> &b);
vector<vector<int>> iter_transp(const vector<vector<int>> &a, const vector<vector<int>> &b);
vector<vector<int>> strassen(const vector<vector<int>> &a, const vector<vector<int>> &b);

//aux funcs for the algs.
void merge(vector<int> &data, int l, int mid, int r);
int partition(vector<int> &data, int l, int h);
void print_matrix(const vector<vector<int>>& data);
vector<vector<int>> transp_matrix(const vector<vector<int>> &t);
vector<vector<int>> add_matrix(const vector<vector<int>> &a, const vector<vector<int>> &b);
vector<vector<int>> subst_matrix(const vector<vector<int>> &a, const vector<vector<int>> &b);
vector<int> csv2_vector(string path);
vector<vector<int>> csv2_matrix(const string &path);
void sort_percent(vector<int> &data, double percent);
