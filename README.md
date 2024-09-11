# Tarea1-inf221
### Rodrigo Alfaro Olmos, Rol:202030013-5
## Estructura de los archivos:
- Lógica del benchmark: [benmark.cpp](benchmark.cpp)
- Lógica de los algoritmos: [alg.cpp](alg.cpp) y [alg.h](alg.h)
- Lógica de los generadores de dataset: [sorting_data_gen.py](sorting_data_gen.py) , [matrix_gen.py](matrix_gen.py) y [matrix_gen_mult.py](matrix_gen_mult.py)
- Datasets: [Datasets](dataset)
- Generador de gráficos: [graph.py](graphs.py)
- Output con el cual se realizaron los graficos: [graphs.txt](graphs.txt)

## Ejecución
Para ejecutar es necesario copiar los [Datasets](dataset) a la carpeta en donde se encuentran los códigos, luego en una terminal simplemente podemos: 

     make 

para compilar, y luego para correr:

    make run

Esto printeara los dataset ordenados según lo especificado en la entrega, así también como el resultado de las multiplicaciones de las matrices, finalmente printeara el [Benchmark](graphs.txt).

