import numpy as np
import pandas as pd

def generate_matrix(n, filename, random_values=True, min_val=0, max_val=100):
   
    if random_values:
        # Generate a matrix with random integers
        matrix = np.random.randint(min_val, max_val, size=(n, n))
    else:
        # Generate a matrix with a sequence of integers
        matrix = np.arange(n*n).reshape(n, n)
    
    # Convert to DataFrame for saving
    df = pd.DataFrame(matrix)
    df.to_csv(filename, index=False, header=False)

def main():
    generate_matrix(2**7, 'matrix_7.csv', random_values=True)
    generate_matrix(2**10, 'matrix_8.csv', random_values=True)
    generate_matrix(2**6, 'matrix_6.csv', random_values=True)
    generate_matrix(2**7, 'matrix_7b.csv', random_values=True)
    generate_matrix(2**10, 'matrix_8b.csv', random_values=True)
    generate_matrix(2**6, 'matrix_6b.csv', random_values=True)
    


    print("Matrices generated and saved to CSV files.")

if __name__ == "__main__":
    main()
