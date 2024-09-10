import numpy as np
import csv

def generate_matrix(rows, cols, file_name):
    matrix = np.random.randint(0, 100, size=(rows, cols))  
    with open(file_name, 'w', newline='') as file:
        writer = csv.writer(file)
        writer.writerows(matrix)
    return matrix


matrix_A = generate_matrix(64, 128, "matrix_A.csv")
matrix_B = generate_matrix(128, 64, "matrix_B.csv")
matrix_C = generate_matrix(256, 512, "matrix_C.csv")  
matrix_D = generate_matrix(512, 256, "matrix_D.csv")
matrix_E = generate_matrix(64,128, "matrix_E.csv")
matrix_F = generate_matrix(128, 64, "matrix_F.csv")

