import matplotlib.pyplot as plt
import numpy as np

# Data for sorting benchmarks
sorting_algorithms = ['Selection Sort', 'C++ Sort', 'Merge Sort', 'Quicksort']
datasets = ['Small', 'Medium', 'Large']
normal_dataset_small = [26600, 15400, 42100, 10000]  # nanoseconds
normal_dataset_medium = [201, 2, 6, 2]  # milliseconds
normal_dataset_large = [0, 348, 663, 287]  # milliseconds

sorted_50_small = [20700, 7600, 38400, 63000]  # nanoseconds
sorted_50_medium = [202, 1, 4, 623]  # milliseconds
sorted_50_large = [0, 202, 520, 0]  # milliseconds

sorted_80_small = [20200, 7400, 37200, 151100]  # nanoseconds
sorted_80_medium = [199, 1, 4, 613]  # milliseconds
sorted_80_large = [0, 196, 516, 0]  # milliseconds

# Data for matrix multiplication benchmarks
matrix_algorithms = ['Iterative Cubic', 'Iterative Transposed', 'Strassen']
square_matrix_sizes = ['n=64', 'n=128', 'n=1024']
square_matrix_benchmarks = [
    [2, 2, 325],   # n=2**6
    [26, 31, 2305],  # n=2**7
    [15843, 11777, 0]  # n=2**10
]

rectangular_matrix_sizes = ['64x128', '256x512']
rectangular_matrix_benchmarks = [
    [7, 4, 326],  # 64x128 * 128x64
    [407, 182, 0]  # 256x512 * 512x256
]

# Function to plot sorting benchmarks
def plot_sorting_benchmark(title, small, medium, large):
    fig, axes = plt.subplots(1, 3, figsize=(15, 5))
    fig.suptitle(title, fontsize=16)

    axes[0].bar(sorting_algorithms, small)
    axes[0].set_title('Small Dataset (ns)')
    
    axes[1].bar(sorting_algorithms, medium)
    axes[1].set_title('Medium Dataset (ms)')
    
    axes[2].bar(sorting_algorithms, large)
    axes[2].set_title('Large Dataset (ms)')
    
    for ax in axes:
        ax.set_ylabel('Time')
        ax.tick_params(axis='x', rotation=45)
    
    plt.tight_layout(rect=[0, 0, 1, 0.95])
    plt.show()

# Function to plot matrix multiplication benchmarks
def plot_matrix_benchmark(title, sizes, data):
    fig, ax = plt.subplots(figsize=(10, 6))
    index = np.arange(len(sizes))
    bar_width = 0.25

    for i, algorithm in enumerate(matrix_algorithms):
        plt.bar(index + i * bar_width, [d[i] for d in data], bar_width, label=algorithm)
    
    ax.set_xlabel('Matrix Size')
    ax.set_ylabel('Time (ms)')
    ax.set_title(title)
    ax.set_xticks(index + bar_width)
    ax.set_xticklabels(sizes)
    ax.legend()

    plt.tight_layout()
    plt.show()

# Plot sorting benchmarks
plot_sorting_benchmark('Normal Dataset Benchmark', normal_dataset_small, normal_dataset_medium, normal_dataset_large)
plot_sorting_benchmark('50% Sorted Dataset Benchmark', sorted_50_small, sorted_50_medium, sorted_50_large)
plot_sorting_benchmark('80% Sorted Dataset Benchmark', sorted_80_small, sorted_80_medium, sorted_80_large)

# Plot matrix multiplication benchmarks
plot_matrix_benchmark('Square Matrix Benchmark', square_matrix_sizes, square_matrix_benchmarks)
plot_matrix_benchmark('Matrix Benchmark', rectangular_matrix_sizes, rectangular_matrix_benchmarks)
