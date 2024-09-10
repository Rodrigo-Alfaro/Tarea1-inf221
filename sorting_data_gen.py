import csv
import numpy as np


min_int = 0
max_int = 2147483647


num_entries = 10**6


def write_large_csv(filename, num_entries):
    with open(filename, mode='w', newline='') as file:
        writer = csv.writer(file)
        for i in range(num_entries):
            number = np.random.randint(min_int, max_int + 1)
            writer.writerow([number])
            if i % 10**7 == 0:
                print(f'Written {i} entries...')

write_large_csv('large_numbers.csv', num_entries)
