#include <bits/stdc++.h>
#include "alg.h"

using namespace std;

int main(){
    string small_path = "small_numbers.csv";
    string medium_path = "medium_numbers.csv";
    string large_path = "large_numbers.csv";

    vector<int> small = csv2_vector(small_path);
    vector<int> medium = csv2_vector(medium_path);
    vector<int> large = csv2_vector(large_path);

    vector<int> small_ss = small, small_cpp = small, small_ms = small, small_qs = small;
    
    //sorting algs.
    //small dataset
    chrono::high_resolution_clock::time_point begin = chrono::high_resolution_clock::now();
    selection_sort(small_ss);
    chrono::high_resolution_clock::time_point end = chrono::high_resolution_clock::now();
    auto timer_small_ss = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout <<"\tsmall dataset selection sort: " << endl;
    //for(int n : small_ss) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(small_cpp);
    end = chrono::high_resolution_clock::now();
    auto timer_small_cpp = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout <<"\tsmall dataset c++ sort: " << endl;
    //for(int n : small_cpp) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    
    begin = chrono::high_resolution_clock::now();
    mergesort(small_ms, 0, small_ms.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_small_ms = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout <<"\tsmall dataset mergesort: " << endl;
    //for(int n : small_ms) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    begin = chrono::high_resolution_clock::now();
    quicksort(small_qs, 0, small_qs.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_small_qs = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout <<"\tsmall dataset quicksort: " << endl;
    //for(int n : small_qs) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;


     //medium dataset
    vector<int> medium_ss = medium, medium_cpp = medium, medium_ms = medium, medium_qs = medium;
    begin = chrono::high_resolution_clock::now();
    selection_sort(medium_ss);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_ss = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tmedium dataset selection sort: " << endl;
    //for(int n : medium_ss) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(medium_cpp);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_cpp = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tmedium dataset c++: " << endl;
    //for(int n : medium_cpp) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    
    begin = chrono::high_resolution_clock::now();
    mergesort(medium_ms, 0, medium_ms.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_ms = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tmedium dataset mergesort: " << endl;
    //for(int n : medium_ms) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    begin = chrono::high_resolution_clock::now();
    quicksort(medium_qs, 0, medium_qs.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_qs = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tmedium dataset quicksort: " << endl;
    //for(int n : medium_qs) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    //large dataset
    vector<int> large_ss = large, large_cpp = large, large_ms = large, large_qs = large;
    begin = chrono::high_resolution_clock::now();
    //selection_sort(large_ss);
    end = chrono::high_resolution_clock::now();
    auto timer_large_ss = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tlarge dataset selection sort: " << endl;
    //for(int n : large_ss) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(large_cpp);
    end = chrono::high_resolution_clock::now();
    auto timer_large_cpp = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tlarge dataset c++ sort: " << endl;
    //for(int n : large_cpp) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    begin = chrono::high_resolution_clock::now();
    mergesort(large_ms, 0, large_ms.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_large_ms = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tlarge dataset mergesort: " << endl;
    //for(int n : large_ms) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    begin = chrono::high_resolution_clock::now();
    quicksort(large_qs, 0, large_qs.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_large_qs = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tlarge dataset quicksort: " << endl;
    //for(int n : large_qs) cout << n << endl;
    cout <<"------------------------------------------------------------------------------"<<endl;

    
    //matrix multiplications algs.
    
    string m6 = "matrix_6.csv", m6_b = "matrix_6b.csv";
    string m7 = "matrix_7.csv", m7_b = "matrix_7b.csv";
    string m8 = "matrix_8.csv", m8_b = "matrix_8b.csv";

    vector<vector<int>> matrix_6 = csv2_matrix(m6);
    vector<vector<int>> matrix_7 = csv2_matrix(m7);
    vector<vector<int>> matrix_8 = csv2_matrix(m8);

    vector<vector<int>> matrix_6_b = csv2_matrix(m6_b);
    vector<vector<int>> matrix_7_b = csv2_matrix(m7_b);
    vector<vector<int>> matrix_8_b = csv2_matrix(m8_b);

     //2**6
    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> trad_m6 = iter_trad(matrix_6, matrix_6_b);
    end = chrono::high_resolution_clock::now();
    auto timer_matrix6_trad = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\titeracion tradicional square matrix n = 2**6"<< endl;
    //print_matrix(trad_m6);
    
    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> transp_m6 = iter_transp(matrix_6, transp_matrix(matrix_6_b));
    end = chrono::high_resolution_clock::now();
    auto timer_matrix6_transp = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\titeracion transpuesta square matrix n = 2**6"<< endl;
    //print_matrix(transp_m6);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> strassen_m6 = strassen(matrix_6, matrix_6_b);
    end = chrono::high_resolution_clock::now();
    auto timer_matrix6_strassen = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout <<"\tstrassen square matrix n = 2**6"<< endl;
    //print_matrix(strassen_m6);
   // 2**7
    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> trad_m7 = iter_trad(matrix_7, matrix_7_b);
    end = chrono::high_resolution_clock::now();
    auto timer_matrix7_trad = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion tradicional square matrix n = 2**7" << endl;
    //print_matrix(trad_m7);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> transp_m7 = iter_transp(matrix_7, transp_matrix(matrix_7_b));
    end = chrono::high_resolution_clock::now();
    auto timer_matrix7_transp = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion transpuesta square matrix n = 2**7" << endl;
    //print_matrix(transp_m7);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> strassen_m7 = strassen(matrix_7, matrix_7_b);
    end = chrono::high_resolution_clock::now();
    auto timer_matrix7_strassen = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tstrassen square matrix n = 2**7" << endl;
    //print_matrix(strassen_m7);

    // 2**8
    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> trad_m8 = iter_trad(matrix_8, matrix_8_b);
    end = chrono::high_resolution_clock::now();
    auto timer_matrix8_trad = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion tradicional square matrix n = 2**8" << endl;
    //print_matrix(trad_m8);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> transp_m8 = iter_transp(matrix_8, transp_matrix(matrix_8_b));
    end = chrono::high_resolution_clock::now();
    auto timer_matrix8_transp = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion transpuesta square matrix n = 2**8" << endl;
    //print_matrix(transp_m8);

    begin = chrono::high_resolution_clock::now();
    //vector<vector<int>> strassen_m8 = strassen(matrix_8, matrix_8_b);
    end = chrono::high_resolution_clock::now();
    auto timer_matrix8_strassen = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tstrassen square matrix n = 2**8" << endl;
    //print_matrix(strassen_m8);

    //special cases
    //Sorting
    //sorting 50%
    vector<int> small_ss_50 = small, small_cpp_50 = small, small_ms_50 = small, small_qs_50 = small;
    
    sort_percent(small_ss_50,50);
    sort_percent(small_cpp_50,50);
    sort_percent(small_ms_50,50);
    sort_percent(small_qs_50,50);

    // Sorting algorithms //for small dataset
    begin = chrono::high_resolution_clock::now();
    selection_sort(small_ss_50);
    end = chrono::high_resolution_clock::now();
    auto timer_small_ss_50 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset selection sort: " << endl;
    //for(int n : small_ss_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(small_cpp_50);
    end = chrono::high_resolution_clock::now();
    auto timer_small_cpp_50 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset C++ sort: " << endl;
    //for(int n : small_cpp_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    mergesort(small_ms_50, 0, small_ms_50.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_small_ms_50 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset mergesort: " << endl;
    //for(int n : small_ms_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    quicksort(small_qs_50, 0, small_qs_50.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_small_qs_50 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset quicksort: " << endl;
    //for(int n : small_qs_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;


    // Medium dataset
    vector<int> medium_ss_50 = medium, medium_cpp_50 = medium, medium_ms_50 = medium, medium_qs_50 = medium;
    sort_percent(medium_ss_50,50);
    sort_percent(medium_cpp_50,50);
    sort_percent(medium_ms_50,50);
    sort_percent(medium_qs_50,50);
    begin = chrono::high_resolution_clock::now();
    selection_sort(medium_ss_50);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_ss_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset selection sort: " << endl;
    //for(int n : medium_ss_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(medium_cpp_50);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_cpp_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset C++ sort: " << endl;
    //for(int n : medium_cpp_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    mergesort(medium_ms_50, 0, medium_ms_50.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_ms_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset mergesort: " << endl;
    //for(int n : medium_ms_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    quicksort(medium_qs_50, 0, medium_qs_50.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_qs_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset quicksort: " << endl;
    //for(int n : medium_qs_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    // Large dataset
    vector<int> large_ss_50 = large, large_cpp_50 = large, large_ms_50 = large, large_qs_50 = large;
    sort_percent(large_ss_50,50);
    sort_percent(large_cpp_50,50);
    sort_percent(large_ms_50,50);
    sort_percent(large_qs_50,50);
    begin = chrono::high_resolution_clock::now();
    // selection_sort(large_ss_50);
    end = chrono::high_resolution_clock::now();
    auto timer_large_ss_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset selection sort: " << endl;
    //for(int n : large_ss_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(large_cpp_50);
    end = chrono::high_resolution_clock::now();
    auto timer_large_cpp_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset C++ sort: " << endl;
    //for(int n : large_cpp_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    mergesort(large_ms_50, 0, large_ms_50.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_large_ms_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset mergesort: " << endl;
    //for(int n : large_ms_50) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    //quicksort(large_qs_50, 0, large_qs_50.size() - 1); worst case when the elements are sorted
    end = chrono::high_resolution_clock::now();
    auto timer_large_qs_50 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset quicksort: " << endl;
    //for(int n : large_qs_50) cout << n << endl;

    vector<int> small_ss_80 = small, small_cpp_80 = small, small_ms_80 = small, small_qs_80 = small;
    
    sort_percent(small_ss_80,80);
    sort_percent(small_cpp_80,80);
    sort_percent(small_ms_80,80);
    sort_percent(small_qs_80,80);

    // Sorting algorithms //for small dataset
    begin = chrono::high_resolution_clock::now();
    selection_sort(small_ss_80);
    end = chrono::high_resolution_clock::now();
    auto timer_small_ss_80 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset selection sort: " << endl;
    //for(int n : small_ss_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(small_cpp_80);
    end = chrono::high_resolution_clock::now();
    auto timer_small_cpp_80 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset C++ sort: " << endl;
    //for(int n : small_cpp_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    mergesort(small_ms_80, 0, small_ms_80.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_small_ms_80 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset mergesort: " << endl;
    //for(int n : small_ms_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    quicksort(small_qs_80, 0, small_qs_80.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_small_qs_80 = chrono::duration_cast<chrono::nanoseconds>(end - begin).count();
    cout << "\tsmall dataset quicksort: " << endl;
    //for(int n : small_qs_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;


    // Medium dataset
    vector<int> medium_ss_80 = medium, medium_cpp_80 = medium, medium_ms_80 = medium, medium_qs_80 = medium;
    sort_percent(medium_ss_80,80);
    sort_percent(medium_cpp_80,80);
    sort_percent(medium_ms_80,80);
    sort_percent(medium_qs_80,80);
    begin = chrono::high_resolution_clock::now();
    selection_sort(medium_ss_80);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_ss_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset selection sort: " << endl;
    //for(int n : medium_ss_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(medium_cpp_80);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_cpp_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset C++ sort: " << endl;
    //for(int n : medium_cpp_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    mergesort(medium_ms_80, 0, medium_ms_80.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_ms_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset mergesort: " << endl;
    //for(int n : medium_ms_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    quicksort(medium_qs_80, 0, medium_qs_80.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_medium_qs_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tmedium dataset quicksort: " << endl;
    //for(int n : medium_qs_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    // Large dataset
    vector<int> large_ss_80 = large, large_cpp_80 = large, large_ms_80 = large, large_qs_80 = large;
    sort_percent(large_ss_80,80);
    sort_percent(large_cpp_80,80);
    sort_percent(large_ms_80,80);
    sort_percent(large_qs_80,80);
    begin = chrono::high_resolution_clock::now();
    // selection_sort(large_ss_80);
    end = chrono::high_resolution_clock::now();
    auto timer_large_ss_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset selection sort: " << endl;
    //for(int n : large_ss_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    cpp_sort(large_cpp_80);
    end = chrono::high_resolution_clock::now();
    auto timer_large_cpp_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset C++ sort: " << endl;
    //for(int n : large_cpp_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    mergesort(large_ms_80, 0, large_ms_80.size() - 1);
    end = chrono::high_resolution_clock::now();
    auto timer_large_ms_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset mergesort: " << endl;
    //for(int n : large_ms_80) cout << n << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    begin = chrono::high_resolution_clock::now();
    //quicksort(large_qs_80, 0, large_qs_80.size() - 1); worst case when the elements are sorted
    end = chrono::high_resolution_clock::now();
    auto timer_large_qs_80 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tlarge dataset quicksort: " << endl;
    //for(int n : large_qs_80) cout << n << endl;
    
    //Matrix
    //diferent sizes

    string m_a = "matrix_A.csv", m_b = "matrix_B.csv";
    string m_c = "matrix_C.csv", m_d = "matrix_D.csv";
    string m_e = "matric_E.csv", m_f = "matrix_F.csv";
    
    vector<vector<int>> matrix_a = csv2_matrix(m_a);
    vector<vector<int>> matrix_b = csv2_matrix(m_b);
    vector<vector<int>> matrix_c = csv2_matrix(m_c);
    vector<vector<int>> matrix_d = csv2_matrix(m_d);
    vector<vector<int>> matrix_e = csv2_matrix(m_e);
    vector<vector<int>> matrix_f = csv2_matrix(m_f);



    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> trad_m6_7 = iter_trad(matrix_a, matrix_b); 
    end = chrono::high_resolution_clock::now();
    auto timer_matrix6_7_trad = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion tradicional matrix  (64x128 * 128*64)" << endl;
    //print_matrix(trad_m6_7);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> transp_m6_7b = iter_transp(matrix_a, transp_matrix(matrix_b)); 
    end = chrono::high_resolution_clock::now();
    auto timer_matrix6_7b_transp = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion transpuesta  matrix (64x128 * 128*64)" << endl;
    //print_matrix(transp_m6_7b);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> strassen_m6_7 = strassen(matrix_a, matrix_b); 
    end = chrono::high_resolution_clock::now();
    auto timer_matrix6_7_strassen = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tstrassen matrix ((64x128 * 128*64))" << endl;
    //print_matrix(strassen_m6_7);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> trad_m7_6 = iter_trad(matrix_c, matrix_d); 
    end = chrono::high_resolution_clock::now();
    auto timer_matrix7_6_trad = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion tradicional  matrix (256x512 * 512*256)" << endl;
    //print_matrix(trad_m7_6);

    begin = chrono::high_resolution_clock::now();
    vector<vector<int>> transp_m7_6b = iter_transp(matrix_c, transp_matrix(matrix_d)); 
    end = chrono::high_resolution_clock::now();
    auto timer_matrix7_8b_transp = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\titeracion transpuesta  matrix (256x512 * 512*256)" << endl;
    //print_matrix(transp_m7_6b);

    begin = chrono::high_resolution_clock::now();
    //vector<vector<int>> strassen_m7_6b = strassen(matrix_c, matrix_d); 
    end = chrono::high_resolution_clock::now();
    auto timer_matrix7_6b_strassen = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
    cout << "\tstrassen  matrix (256x512 * 512*256)" << endl;
    //print_matrix(strassen_m7_6b);

    //prints for the benchmarks info
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"Normal Dataset Benchmark"<< endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tSmall Dataset Benchmark [nanoseconds]:\n"<<"Selection Sort: "<<timer_small_ss<<"\n"<<
    "C++ Sort: "<<timer_small_cpp<<"\n"<<"Merge Sort: "<<timer_small_ms<<"\n"<<"Quicksort: "<<timer_small_qs<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tMedium Dataset Benchmark [ms]:\n"<<"Selection Sort: "<<timer_medium_ss<<"\n"<<
    "C++ Sort: "<<timer_medium_cpp<<"\n"<<"Merge Sort: "<<timer_medium_ms<<"\n"<<"Quicksort: "<<timer_medium_qs<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tLarge Dataset Benchmark [ms]:\n"<<"Selection Sort: "<<timer_large_ss<<"\n"<<
    "C++ Sort: "<<timer_large_cpp<<"\n"<<"Merge Sort: "<<timer_large_ms<<"\n"<<"Quicksort: "<<timer_large_qs<<endl;
    
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"50\% Sorted Benchmark"<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tSmall Dataset Benchmark [nanoseconds]:\n"<<"Selection Sort: "<<timer_small_ss_50<<"\n"<<
    "C++ Sort: "<<timer_small_cpp_50<<"\n"<<"Merge Sort: "<<timer_small_ms_50<<"\n"<<"Quicksort: "<<timer_small_qs_50<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tMedium Dataset Benchmark [ms]:\n"<<"Selection Sort: "<<timer_medium_ss_50<<"\n"<<
    "C++ Sort: "<<timer_medium_cpp_50<<"\n"<<"Merge Sort: "<<timer_medium_ms_50<<"\n"<<"Quicksort: "<<timer_medium_qs_50<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tLarge Dataset Benchmark [ms]:\n"<<"Selection Sort: "<<timer_large_ss_50<<"\n"<<
    "C++ Sort: "<<timer_large_cpp_50<<"\n"<<"Merge Sort: "<<timer_large_ms_50<<"\n"<<"Quicksort: "<<timer_large_qs_50<<endl;

    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"80\% Sorted Benchmark"<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tSmall Dataset Benchmark [nanoseconds]:\n"<<"Selection Sort: "<<timer_small_ss_80<<"\n"<<
    "C++ Sort: "<<timer_small_cpp_80<<"\n"<<"Merge Sort: "<<timer_small_ms_80<<"\n"<<"Quicksort: "<<timer_small_qs_80<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tMedium Dataset Benchmark [ms]:\n"<<"Selection Sort: "<<timer_medium_ss_80<<"\n"<<
    "C++ Sort: "<<timer_medium_cpp_80<<"\n"<<"Merge Sort: "<<timer_medium_ms_80<<"\n"<<"Quicksort: "<<timer_medium_qs_80<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tLarge Dataset Benchmark [ms]:\n"<<"Selection Sort: "<<timer_large_ss_80<<"\n"<<
    "C++ Sort: "<<timer_large_cpp_80<<"\n"<<"Merge Sort: "<<timer_large_ms_80<<"\n"<<"Quicksort: "<<timer_large_qs_80<<endl;


    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tSquare matrix"<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout<<"\tSquare Matrix (n = 2**6) Benchmark[miliseconds]\n"<<"Iterativo Cubico Tradicional: "<<timer_matrix6_trad<<
    "\n"<<"Iterativo Cubico Transpuesto: "<<timer_matrix6_transp<<"\n"<<"Strassen: "<<timer_matrix6_strassen<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout<<"\tSquare Matrix (n = 2**7) Benchmark[miliseconds]\n"<<"Iterativo Cubico Tradicional: "<<timer_matrix7_trad<<
    "\n"<<"Iterativo Cubico Transpuesto: "<<timer_matrix7_transp<<"\n"<<"Strassen: "<<timer_matrix7_strassen<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout<<"\tSquare Matrix (n = 2**10) Benchmark[miliseconds]\n"<<"Iterativo Cubico Tradicional: "<<timer_matrix8_trad<<
    "\n"<<"Iterativo Cubico Transpuesto: "<<timer_matrix8_transp<<"\n"<<"Strassen: "<<timer_matrix8_strassen<<endl;

    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"\tDifferent dimension matrix"<<endl;
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"Matrix (64x128 * 128*64) Benchmark[miliseconds]\n"<<"Iterativo Tradicional: "<<timer_matrix6_7_trad <<"\n"<<
    "Iterativo Transpuesto: "<<timer_matrix6_7b_transp<<"\n"<<"Strassen: "<<timer_matrix6_7_strassen<<"\n";
    cout <<"------------------------------------------------------------------------------"<<endl;
    cout <<"Matrix (256x512 * 512*256) Benchmark[miliseconds]\n"<<"Iterativo Tradicional: "<<timer_matrix7_6_trad <<"\n"<<
    "Iterativo Transpuesto: "<<timer_matrix7_8b_transp<<"\n"<<"Strassen: "<< timer_matrix7_6b_strassen <<"\n";




    return 0;
}