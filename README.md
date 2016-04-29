# SortingAlgorithms

Number of comparisons in some random integer data from -500 to +500 and average time per test. 

(_Note: This does not include memory usage nor array acceses_)

Array elements: 10 000

Number of tests: 100

        -------------------------------------------------------------------------------------
        |                                    Random Data                                    |
        -------------------------------------------------------------------------------------
        |        Algorithm        |   Min    |   Avg    |   Max    | Errors | Avg time (ms) |
        -------------------------------------------------------------------------------------
        |                         |          |          |          |        |               |
        | Bubble sort             | 99990000 | 14090654 | 99990000 |      0 |        776.31 |
        | Bubble sort (Optimized) | 49958943 |  7045118 | 50004971 |      0 |        628.33 |
        | Cocktail sort (Shake)   | 37185483 | 37616614 | 38109996 |      0 |        541.58 |
        | Selection               | 50004999 |  7055326 | 50004999 |      0 |        151.74 |
        | Secuencial insertion    | 24611320 | 24991036 | 25357327 |      0 |        138.55 |
        | Binary insertion        |   128934 |   129000 |   129097 |      0 |         94.17 |
        | MergeSort               |   130272 |   130445 |   130626 |      0 |          4.46 |
        | ShellSort               |   245562 |   258608 |   281901 |      0 |          3.63 |
        | QuickSort               |   162437 |   173240 |   201264 |      0 |          1.61 |
        -------------------------------------------------------------------------------------
      
      
        -------------------------------------------------------------------------------------
        |                                Almost Sorted Data                                 |
        -------------------------------------------------------------------------------------
        |        Algorithm        |   Min    |   Avg    |   Max    | Errors | Avg time (ms) |
        -------------------------------------------------------------------------------------
        |                         |          |          |          |        |               |
        | Bubble sort             | 99990000 | 14090654 | 99990000 |      0 |        339.63 |
        | Selection               | 50004999 |  7055326 | 50004999 |      0 |        159.18 |
        | Bubble sort (Optimized) |    59984 | 25980560 | 49996998 |      0 |         91.58 |
        | MergeSort               |    83312 |    86850 |    93194 |      0 |          5.36 |
        | ShellSort               |   130010 |   131567 |   135208 |      0 |          3.56 |
        | Binary insertion        |   127894 |   128089 |   128403 |      0 |          2.49 |
        | QuickSort               |   141149 |   141420 |   141658 |      0 |          2.45 |
        | Cocktail sort (Shake)   |    49989 |    49989 |    49989 |      0 |          1.93 |
        | Secuencial insertion    |    20009 |    27125 |    39738 |      0 |          1.77 |
        -------------------------------------------------------------------------------------
      
      
        -------------------------------------------------------------------------------------
        |                                  Few Unique Data                                  |
        -------------------------------------------------------------------------------------
        |        Algorithm        |   Min    |   Avg    |   Max    | Errors | Avg time (ms) |
        -------------------------------------------------------------------------------------
        |                         |          |          |          |        |               |
        | Bubble sort             | 99990000 | 14090654 | 99990000 |      0 |        691.67 |
        | Bubble sort (Optimized) | 46615893 |  3931971 | 47116593 |      0 |        526.73 |
        | Cocktail sort (Shake)   | 36961721 | 37518520 | 38178183 |      0 |        465.08 |
        | Selection               | 50004999 |  7055326 | 50004999 |      0 |        156.08 |
        | Binary insertion        |   129951 |   130155 |   130435 |      0 |        121.34 |
        | Secuencial insertion    | 18440204 | 18769567 | 19243963 |      0 |        107.56 |
        | MergeSort               |   118126 |   118742 |   119199 |      0 |          4.04 |
        | ShellSort               |   145228 |   146285 |   147469 |      0 |          2.35 |
        | QuickSort               |   138174 |   142027 |   147918 |      0 |          1.29 |
        -------------------------------------------------------------------------------------
      
      
        -------------------------------------------------------------------------------------
        |                                   Reversed Data                                   |
        -------------------------------------------------------------------------------------
        |        Algorithm        |   Min    |   Avg    |   Max    | Errors | Avg time (ms) |
        -------------------------------------------------------------------------------------
        |                         |          |          |          |        |               |
        | Bubble sort             | 99990000 | 14090654 | 99990000 |      0 |        965.85 |
        | Cocktail sort (Shake)   | 50004999 |  7055326 | 50004999 |      0 |        834.36 |
        | Bubble sort (Optimized) | 50004999 |  7055326 | 50004999 |      0 |        807.52 |
        | Secuencial insertion    | 50014998 |  7065325 | 50014998 |      0 |        282.52 |
        | Binary insertion        |   133616 |   133616 |   133616 |      0 |        192.03 |
        | Selection               | 50004999 |  7055326 | 50004999 |      0 |         162.6 |
        | MergeSort               |    74607 |    74607 |    74607 |      0 |          3.52 |
        | ShellSort               |   182577 |   182577 |   182577 |      0 |          2.34 |
        | QuickSort               |   135451 |   135451 |   135451 |      0 |          0.67 |
        -------------------------------------------------------------------------------------
