# CIC0169 - Programação Competitiva

Códigos-fontes produzidos na disciplina **CIC0169 - Programação Competitiva**, nos cursos de Bacharelado em Ciência da Computação e Bacharelado em Engenharia de Computação da Universidade de Brasília.

Esta disciplina cobre conteúdos importantes para trabalhar a capacidade de resolução de problemas dos competidores iniciantes e intermediários. Para estudar os tópicos específicos de programação competitiva como grafos, strings, teoria dos números, geometria computacional, programação dinâmica etc, consulte o repositório [CIC0258 - Tópicos Especiais em Programação Competitiva](https://github.com/viniciusrpb/cic0258_topicos_programacao_competitiva).

Atenção: o Material Didático (Slides, Exercícios Resolvidos) na íntegra é possível obter no Aprender3/Moodle da disciplina, ou nos repositórios elaborados no decorrer dos últimos anos em:

- [GitHub UnBalloon](https://github.com/unballoon)

- [GitHub do Projeto de Extensão Maratona de Programação](https://github.com/UnB-CIC/Maratona-Extensao)


## Autores

Prof. Dr. Vinícius R. P. Borges


## Sumário

### Módulo I: Fundamentos de Programação Competitiva

#### 1. Fundamentos de Linguagem C/C++

&nbsp;&nbsp;&nbsp;&nbsp; 1.1. [Template C++ (aula 05/04/2023)](general/vinicius.cpp), [[String: Classe STL](general/string_stl.cpp)], [[String Nativas C](general/string_nativo_c.cpp)], [[Vector](general/vectors_stl.cpp)], [[Vetor Nativo C](general/vetor_nativo_c.cpp)], [[Pair](general/pairs.cpp)], [[Tuple](general/tuples.cpp)]
 
&nbsp;&nbsp;&nbsp;&nbsp; 1.2. Ordenação e Busca Binária: [[sort](general/sort.cpp)] [[Lower Bound e Upper Bound](general/search.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 1.3. Upsolving 1: [Codeforces 992A - Nastya and an Array](https://codeforces.com/contest/992/problem/A) [[Solução](upsolving/nastya_array.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 1.4. Upsolving 2: [Codeforces 706B - Interesting drink](https://codeforces.com/problemset/problem/706/B) [[Solução](upsolving/706b_interesting_drink.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 1.5. Upsolving 3: [Codeforces 25A - IQ Test](https://codeforces.com/problemset/problem/25/A) [[Solução](upsolving/25a_iq_test.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 1.6. Upsolving 4: [Codeforces 50A - Domino Pilling](https://codeforces.com/problemset/problem/50/A) [[Solução](upsolving/50a_domino_piling.cpp)]



#### 2. Ponteiros e Alocação Dinâmica de Memória

&nbsp;&nbsp;&nbsp;&nbsp; 2.1. Ponteiros e Iterators

&nbsp;&nbsp;&nbsp;&nbsp; 2.2. Alocação Dinâmica de Memória (malloc)


### Módulo II: Estruturas de Dados

#### 3. Estruturas de Dados Lineares

&nbsp;&nbsp;&nbsp;&nbsp; 3.1. [Fila](general/stl_queue.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 3.2. [Pilha](general/stl_stack.cpp)  [Extra: [Pilha de Máximos](general/stl_max_stack.cpp)]
 
&nbsp;&nbsp;&nbsp;&nbsp; 3.3. [Fila de Prioridade Mínima](general/stl_min_priority_queue.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 3.4. [Fila de Prioridade Máxima](general/stl_max_priority_queue.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 3.5. [Fila de Prioridade por Pair - Custom Comparator](general/stl_pair_priority_queue.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 3.6. Upsolving: [Codeforces 343B - Alternating Current](https://codeforces.com/contest/343/problem/B) [[Solução](upsolving/343b_alternating_current.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 3.7. Upsolving: [Codeforces 920B - Tea Queue](https://codeforces.com/problemset/problem/920/B) [[Solução](upsolving/920b_tea_queue.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 3.8. Upsolving: [Codeforces 1153A - Serval and Bus](https://codeforces.com/problemset/problem/1153/A) [[Solução](upsolving/1153a_serval_bus.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 3.9. Upsolving: [Beecrowd 1523 - Estacionamento Linear](https://www.beecrowd.com.br/judge/pt/problems/view/1523) [[Solução](upsolving/beecrowd_1523.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 3.10. Upsolving: [Beecrowd 2065 - Supermarket Line](https://www.beecrowd.com.br/judge/pt/problems/view/2065) [[Solução](upsolving/beecrowd_2056.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 3.11. Upsolving [Codeforces 982B - Bus of Characters](https://codeforces.com/problemset/problem/982/B) [[Solução](upsolving/cf982b.cpp)]

<!--<!--
#### 4. Estruturas de Dados Não-Lineares

&nbsp;&nbsp;&nbsp;&nbsp; 4.1. [Sets](general/stl_set.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 4.2. [Map](general/stl_map.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 4.3. Upsolving: [Codeforces Good Bye 2020 - Bovine Dilemma](https://codeforces.com/contest/1466/problem/A) [[Solução](upsolving/1466a_bovine_dilemma.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 4.4. Upsolving: [Codeforces 1234D - Distinct Characters Queries](https://codeforces.com/contest/1234/problem/D) [[Solução](upsolving/1234d_distinct_characters_queries.cpp)]


#### 5. Soma de Prefixos e Codificação Delta

&nbsp;&nbsp;&nbsp;&nbsp; 5.1. Soma de Prefixos (*Prefix sum*): [Exemplo básico](general/prefix_sum.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 5.2. Codificação Delta (*Delta encoding*, *Difference arrays*): [Exemplo básico](general/delta_encoding.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 5.3. Upsolving 1: [Codeforces 816B - Karen and Coffee](https://codeforces.com/problemset/problem/816/B) [[Solução](upsolving/816b_karen_and_coffee.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 5.4. Upsolving 2: [Codeforces 295A - Greg and Array](https://codeforces.com/problemset/problem/295/A/) [[Solução](upsolving/greg_array.cpp)]



#### 6. Operadores Bitwise e Bitmasks

&nbsp;&nbsp;&nbsp;&nbsp; 6.1. [Operadores Bitwise](general/op_bitwise.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 6.2. [Bitmasks](general/bitmask.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 6.3. Upsolving: [Codeforces 1421A - XORwice](https://codeforces.com/problemset/problem/1421/A ) [[Solução](upsolving/1421a_xorwice.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 6.4. Upsolving: [Codeforces 1698A - XOR Mixup](https://codeforces.com/problemset/problem/1698/A) [[Solução](upsolving/1698a_xor_mixup.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 6.5. Upsolving: [Codeforces 579A - Raising Bacteria](https://codeforces.com/problemset/problem/579/A) [[Solução](upsolving/579a_raising_bacteria.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 6.6. Upsolving: [Codeforces 1949A - ABC String](https://codeforces.com/problemset/problem/1494/A) [[Solução](upsolving/1949a_abc_string.cpp)] 


### Módulo III: Paradigmas de Resolução de Problemas

#### 7. Busca Completa

&nbsp;&nbsp;&nbsp;&nbsp; 7.1. Busca em Profundidade e Backtracking

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.1. [Gerando subsets e permutações](general/buscacompleta.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.2. Upsolving 4: [Beecrowd 1556 - Removing Letters](https://www.beecrowd.com.br/judge/en/problems/view/1556) [[Solução](upsolving/beecrowd_1556.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.3. Upsolving 5: [Codeforces 510B - Fox and Two Dots](https://codeforces.com/problemset/problem/510/B) [[Solução](upsolving/510b_fox_twodots.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.4. Upsolving 6: [Codeforces 339C - Xenia and Weights](https://codeforces.com/problemset/problem/339/C) [[Solução](upsolving/339c_xenia_weights.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.5. Upsolving 7: [Codeforces 550B - Preparing Olympiad](https://codeforces.com/contest/550/problem/B) [[Solução](upsolving/550b_preparing_olympiad.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 7.1. Busca em Largura

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.1. Upsolving 1: [Beecrowd 1910 - Ajude Clotilde](https://www.beecrowd.com.br/judge/en/problems/view/1910) [[Solução](upsolving/uri1910_ajude_clotilde.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.2. Upsolving 2: [Codeforces 520B - Two Buttons](https://codeforces.com/problemset/problem/520/B) [[Solução](upsolving/520b_two_buttons.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 7.1.3. Upsolving 3: [Beecrowd 1907 - Colouring Game Scenarios](https://www.beecrowd.com.br/judge/en/problems/view/1907) [[Solução](upsolving/beecrowd_1907.cpp)]


#### 8. Divisão-e-Conquista

&nbsp;&nbsp;&nbsp;&nbsp; 8.1. Merge Sort

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.1. [Implementação Tradicional](general/merge_sort.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.2. [Implementação com Contagem de Inversões](general/merge_sort_enhanced.cpp)
    
&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.4. Upsolving 2: [OBI 2016 - Arco e Flecha](https://olimpiada.ic.unicamp.br/pratique/p1/2016/f2/arco/) [[Solução](upsolving/obi2016_arco_flecha.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.5. Upsolving 3: [1490D - Permutation Transformation](https://codeforces.com/problemset/problem/1490/D) [[Solução](upsolving/1490d_permutation_transformation.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.5. Upsolving 3: [1461D - Divide and Summarize](https://codeforces.com/contest/1461/problem/D) [[Solução](upsolving/1461d_divide_summarize.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.3. Upsolving 1: [Beecrowd 1088 - Bolhas e Baldes](https://www.beecrowd.com.br/judge/pt/problems/view/1088) [[Solução](upsolving/uri1088_bubbles_buckets.cpp)]


&nbsp;&nbsp;&nbsp;&nbsp; 8.1. Busca Binária

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.1. [Implementação Tradicional](general/busca_binaria.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.2. [Lower and Upper Bounds](general/lower_upper_bounds.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.3. [Busca Binária na Resposta](general/buscabin_resposta.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.4. Upsolving 1: [Codeforces 812C - Sagheer and Nubian Market](https://mirror.codeforces.com/contest/812/problem/C) [[Solução](upsolving/812c_sagheer_nubian_market.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.5. Upsolving 2: [Codeforces 760B - Frodo and Pillows](https://codeforces.com/problemset/problem/760/B) [[Solução](upsolving/760b_frodo_pillows.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.5. Upsolving 3: [Codeforces 1538C - Pair of Numbers](https://codeforces.com/problemset/problem/1538/C) [[Solução](upsolving/1538c_number_pairs.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.4. Upsolving 4: [Beecrowd 1472 - Triângulos](https://www.beecrowd.com.br/judge/pt/problems/view/1472) [[Solução](upsolving/uri1472_triangles.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; 8.1.5. Upsolving 3: [Codeforces 1676E - Eating Queries](https://codeforces.com/problemset/problem/1676/E) [[Solução](upsolving/1676e_eating_queries.cpp)]

#### 9. Análise amortizada: Two Pointers

&nbsp;&nbsp;&nbsp;&nbsp; 9.1. [Problema 2SUM](general/two_sum.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 9.2. [Problema 3SUM](general/three_sum.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 9.3. [Problema Max Len Substring](general/max_substring.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 9.4. Upsolving 1: [Codeforces 1133C - Balanced Teams](https://codeforces.com/problemset/problem/1133/C) [[Solução](upsolving/1133c_balanced_team.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 9.5. Upsolving 2: [Codeforces 1343C - Alternating Subsequence](https://codeforces.com/problemset/problem/1343/C) [[Solução](upsolving/1343c_alternating_subsequence.cpp)]


&nbsp;&nbsp;&nbsp;&nbsp; 9.3. Upsolving 3: [Codeforces 279B - Books](https://codeforces.com/problemset/problem/279/B) [[Solução](upsolving/279b_books.cpp)]


#### 9. Algoritmos Gulosos

&nbsp;&nbsp;&nbsp;&nbsp; 9.1. [Problema do Escalonamento de Tarefas](general/escalonamento_tarefas.cpp)
    
&nbsp;&nbsp;&nbsp;&nbsp; 9.2. [Maximizar Tarefas (Intervalos) Disjuntos](general/max_tarefas_disjuntas.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 9.3. [Problema da Mochila Fracionária](general/frac_knapsack.cpp)

&nbsp;&nbsp;&nbsp;&nbsp; 9.4. Upsolving 1: [Codeforces 1197C - Array Splitting](https://codeforces.com/problemset/problem/1197/C) [[Solução](upsolving/1197c_array_splitting.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 9.5. Upsolving 2: [Codeforces 492C - Vanya and Exams](https://codeforces.com/problemset/problem/492/C) [[Solução](upsolving/492c_vanya_exams.cpp)]

&nbsp;&nbsp;&nbsp;&nbsp; 9.6. Upsolving 3: [Codeforces 1446A - Knapsack](https://codeforces.com/problemset/problem/1446/A
) [[Solução](upsolving/1446a_knapsack.cpp)]

    





#### 11. Fundamentos de Programação Dinâmica
-->

## Referências

