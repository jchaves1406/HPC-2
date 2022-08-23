/*********************************************************************
 * Universidad Sergio Arboleda
 * Fecha: 21 de agosto del 2022
 * Autor: Jesus Chaves Acero
 * Asignatura: HPC-2 Métricas de rendimiento
 * Tema: Solución al taller de algebra de matrices.
 *********************************************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

/*************************************************************************
 * Ejercicio a: X = 3A - 4B
 * A = | 4   -2|, B = |-1    2|
 *     | 1   -7|      | 6   -5|
 * Solución: Dado que la X ya esta despejada el resultado de la ecuación
 * es el desarrollo del mismo ejercicio propuesto.
 *************************************************************************/
void ejercicio_a(){
    Eigen::Matrix2i A;
    A << 4, -2, 1, -7;
    Eigen::Matrix2i B;
    B << -1, 2, 6, -5;
    Eigen::Matrix2i resultado;

    std::cout << "a) Calcular: X = 3A - 4B \n" << std::endl;
    resultado = 3*A - 4*B;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio b: 2X + 4A = 3BA
 * A = | 0   -1|, B = | 1    2|
 *     | 2    1|      | 3    4|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = (3BA - 4A)/2
 *************************************************************************/
void ejercicio_b(){
    Eigen::Matrix2d A;
    A << 0, -1, 2, 1;
    Eigen::Matrix2d B;
    B << 1, 2, 3, 4;
    Eigen::Matrix2d resultado;

    std::cout << "b) Calcular: 2X + 4A = 3BA \n" << std::endl;
    resultado = (3*B*A - 4*A)/2;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio c: AXB^T = C
 * A = |-3   -2|, B = | 5    3|, C = | 1    1|
 *     | 3    3|      | 9    4|      | 0    0|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = ((A^-1)C)(B^-1)
 * Nota: Para dealizar la división entre matrices es de la forma
 * AX = B -> X = (A^-1)B y XA = B -> X = B(A^-1)
 *************************************************************************/
void ejercicio_c(){
    Eigen::Matrix2d A;
    A << -3, -2, 3, 3;
    Eigen::Matrix2d B;
    B << 5, 3, 9, 4;
    Eigen::Matrix2d C;
    C << 1, 1, 0, 0;
    Eigen::Matrix2d resultado;

    std::cout << "c) Calcular: 2X + 4A = 3BA \n" << std::endl;
    resultado = (A.inverse()*C) * B.transpose().inverse();
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Matriz C: \n" << C << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio d: XA = B
 * A = | 2    1|, B = | 2    2|,
 *     |-4   -3|      | 6    4|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = B(A^-1)
 * Nota: Para dealizar la división entre matrices es de la forma
 * XA = B -> X = B(A^-1)
 *************************************************************************/
void ejercicio_d(){
    Eigen::Matrix2d A;
    A << 2, 1, -4, -3;
    Eigen::Matrix2d B;
    B << 2, 2, 6, 4;
    Eigen::Matrix2d resultado;

    std::cout << "d) Calcular: XA = B \n" << std::endl;
    resultado = B * A.inverse();
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio e: X = 2(AB+C)
 * A = | 3    0   -1|, B = | 1    2|, C = |-2    0|
 *     | 0    2    1|      | 1    0|      |-2   -5|
 *                         | 0    6|
 * Solución: Dado que la X ya esta despejada el resultado de la ecuación
 * es el desarrollo del mismo ejercicio propuesto.
 *************************************************************************/
void ejercicio_e(){
    Eigen::MatrixXd A(2,3);
    A << 3, 0, -1, 0, 2, 1;
    Eigen::MatrixXd B(3, 2);
    B << 1, 2, 1, 0, 0, 6;
    Eigen::Matrix2d C;
    C << -2, 0, -2, -5;
    Eigen::MatrixXd resultado;

    std::cout << "e) Calcular: X = 2(AB+C) \n" << std::endl;
    resultado = 2*(A*B+C);
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio f: X = A + 3B
 * A = | 1    5   -1|, B = |-1   -4    3|
 *     |-1    2    2|      | 1   -2   -2|
 *     | 0   -3    3|      |-3    3   -5|
 * Solución: Dado que la X ya esta despejada el resultado de la ecuación
 * es el desarrollo del mismo ejercicio propuesto.
 *************************************************************************/
void ejercicio_f(){
    Eigen::Matrix3d A;
    A << 1, 5, -1, -1, 2, 2, 0, -3, 3;
    Eigen::Matrix3d B;
    B << -1, -4, 3, 1, -2, -2, -3, 3, -5;
    Eigen::Matrix3d resultado;

    std::cout << "f) Calcular: X = A + 3B \n" << std::endl;
    resultado = A + 3*B;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio g: XA = B
 * A = | 2    7    3|, B = | 1    0    2|
 *     | 3    9    4|      | 0    1    0|
 *     | 1    5    3|      | 0    0    1|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = B(A^-1)
 * Nota: Para dealizar la división entre matrices es de la forma
 * XA = B -> X = B(A^-1)
 *************************************************************************/
void ejercicio_g(){
    Eigen::Matrix3d A;
    A << 2, 7, 3, 3, 9, 4, 1, 5, 3;
    Eigen::Matrix3d B;
    B << 1, 0, 2, 0, 1, 0, 0, 0, 1;
    Eigen::Matrix3d resultado;

    std::cout << "g) Calcular: XA = B \n" << std::endl;
    resultado = B*A.inverse();
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio h: AX = B
 * A = | 1    1    1|, B = | 0    1    2|
 *     | 6    5    4|      | 1    0    2|
 *     |13   10    8|      | 1    2    0|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = (A^-1)B
 * Nota: Para dealizar la división entre matrices es de la forma
 * AX = B -> X = (A^-1)B
 *************************************************************************/
void ejercicio_h(){
    Eigen::Matrix3d A;
    A << 1, 1, 1, 6, 5, 4, 13, 10, 8;
    Eigen::Matrix3d B;
    B << 0, 1, 2, 1, 0, 2, 1, 2, 0;
    Eigen::Matrix3d resultado;

    std::cout << "h) Calcular: XA = B \n" << std::endl;
    resultado = A.inverse()*B;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio i: X = A^TA - 2A
 * A = | 3   -1|
 *     | 0    2|
 * Solución: Dado que la X ya esta despejada el resultado de la ecuación
 * es el desarrollo del mismo ejercicio propuesto.
 *************************************************************************/
void ejercicio_i(){
    Eigen::Matrix2d A;
    A << 3, -1, 0, 2;
    Eigen::Matrix2d resultado;

    std::cout << "i) Calcular: A^TA - 2A \n" << std::endl;
    resultado = A.transpose()*A - 2*A;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio j: X = A^3
 * A = | 4    2|
 *     |-1    0|
 * Solución: Dado que la X ya esta despejada el resultado de la ecuación
 * es el desarrollo del mismo ejercicio propuesto.
 *************************************************************************/
void ejercicio_j(){
    Eigen::Matrix2d A;
    A << 4, 2, -1, 0;
    Eigen::Matrix2d resultado;

    std::cout << "j) Calcular: X = A^3 \n" << std::endl;
    resultado = A*A*A;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio k: A^TXB = C
 * A = | 2    4|, B = | 1    0|, C = | 7    5|
 *     | 3    2|      | 2    1|      | 6    1|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = (((A^T)^-1)C)(B^-1)
 * Nota: Para dealizar la división entre matrices es de la forma
 * AX = B -> X = (A^-1)B y XA = B -> X = B(A^-1)
 *************************************************************************/
void ejercicio_k(){
    Eigen::Matrix2d A;
    A << 2, 4, 3, 2;
    Eigen::Matrix2d B;
    B << 1, 0, 2, 1;
    Eigen::Matrix2d C;
    C << 7, 5, 6, 1;
    Eigen::Matrix2d resultado;

    std::cout << "k) Calcular: A^TXB = C \n" << std::endl;
    resultado = (A.transpose().inverse()*C) * B.inverse();
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Matriz C: \n" << C << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio l: X = AA^T - 2AB
 * A = | 1    0   -2|, B = | 2   -3|,
 *     | 2   -1    3|      |-2    0|
 *                         |-1   -2|
 * Solución: Dado que la X ya esta despejada el resultado de la ecuación
 * es el desarrollo del mismo ejercicio propuesto.
 *************************************************************************/
void ejercicio_l(){
    Eigen::MatrixXd A(2,3);
    A << 1, 0, -2, 2, -1, 3;
    Eigen::MatrixXd B(3, 2);
    B << 2, -3, -2, 0, -1, -2;
    Eigen::MatrixXd resultado;

    std::cout << "l) Calcular: X = AA^T - 2AB \n" << std::endl;
    resultado = A*A.transpose() - 2*A*B;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio m: X = ABC
 * A = | 4    8   12|, B = | 3    2|, C = | 3 |
 *                         | 0    1|      |-1 |
 *                         |-1    0|
 * Solución: Dado que la X ya esta despejada el resultado de la ecuación
 * es el desarrollo del mismo ejercicio propuesto.
 *************************************************************************/
void ejercicio_m(){
    Eigen::MatrixXd A(1, 3);
    A << 4, 8, 12;
    Eigen::MatrixXd B(3, 2);
    B << 3, 2, 0, 1, -1, 0;
    Eigen::MatrixXd C(2, 1);
    C << 3, -1;
    Eigen::MatrixXd resultado;

    std::cout << "m) Calcular: X = ABC \n" << std::endl;
    resultado = A*B*C;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Matriz C: \n" << C << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio n: A^TX = B
 * A = | 3    4    1|, B = | 3    9    7|
 *     |-1   -3    3|      | 1   11    7|
 *     | 2    3    0|      | 7    5    7|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = ((A^T)^-1)B
 * Nota: Para dealizar la división entre matrices es de la forma
 * AX = B -> X = (A^-1)B
 *************************************************************************/
void ejercicio_n(){
    Eigen::Matrix3d A;
    A << 3, 4, 1, -1, -3, 3, 2, 3, 0;
    Eigen::Matrix3d B;
    B << 3, 9, 7, 1, 11, 7, 7, 5, 7;
    Eigen::Matrix3d resultado;

    std::cout << "n) Calcular: A^TX = B \n" << std::endl;
    resultado = A.transpose().inverse()*B;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio o: XA = B
 * A = | 2    5    7|, B = |-1    1    0|
 *     | 6    3    4|      | 0    1    1|
 *     | 5   -2   -3|      | 1    0   -1|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = B(A^-1)
 * Nota: Para dealizar la división entre matrices es de la forma
 * XA = B -> X = B(A^-1)
 *************************************************************************/
void ejercicio_o(){
    Eigen::Matrix3d A;
    A << 2, 5, 7, 6, 3, 4, 5, -2, -3;
    Eigen::Matrix3d B;
    B << -1, 1, 0, 0, 1, 1, 1, 0, -1;
    Eigen::Matrix3d resultado;

    std::cout << "o) Calcular: XA = B \n" << std::endl;
    resultado = B*A.inverse();
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}

/*************************************************************************
 * Ejercicio p: AX = B
 * A = | 1    1    1    1|, B = | 1    1    0    0|
 *     | 1    1   -1   -1|      | 1    0    1    0|
 *     | 1   -1    1   -1|      | 1    0    0    1|
 *     | 1   -1   -1    1|      | 1    0    1    1|
 * Solución: Realizar el despeje de X lo cual da como resultado
 * X = (A^-1)B
 * Nota: Para dealizar la división entre matrices es de la forma
 * AX = B -> X = (A^-1)B
 *************************************************************************/
void ejercicio_p(){
    Eigen::Matrix4d A;
    A << 1, 1, 1, 1, 1, 1, -1, -1, 1, -1, 1, -1, 1, -1, -1, 1;
    Eigen::Matrix4d B;
    B << 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1;
    Eigen::Matrix4d resultado;

    std::cout << "p) Calcular: XA = B \n" << std::endl;
    resultado = A.inverse()*B;
    std::cout << "Matriz A: \n" << A << std::endl;
    std::cout << "Matriz B: \n" << B << std::endl;
    std::cout << "Resultado: \n" << resultado << std::endl;
}


int main(){
    std::cout << "**********************************************" << std::endl;
    ejercicio_a();
    std::cout << "**********************************************" << std::endl;
    ejercicio_b();
    std::cout << "**********************************************" << std::endl;
    ejercicio_c();
    std::cout << "**********************************************" << std::endl;
    ejercicio_d();
    std::cout << "**********************************************" << std::endl;
    ejercicio_e();
    std::cout << "**********************************************" << std::endl;
    ejercicio_f();
    std::cout << "**********************************************" << std::endl;
    ejercicio_g();
    std::cout << "**********************************************" << std::endl;
    ejercicio_h();
    std::cout << "**********************************************" << std::endl;
    ejercicio_i();
    std::cout << "**********************************************" << std::endl;
    ejercicio_j();
    std::cout << "**********************************************" << std::endl;
    ejercicio_k();
    std::cout << "**********************************************" << std::endl;
    ejercicio_l();
    std::cout << "**********************************************" << std::endl;
    ejercicio_m();
    std::cout << "**********************************************" << std::endl;
    ejercicio_n();
    std::cout << "**********************************************" << std::endl;
    ejercicio_o();
    std::cout << "**********************************************" << std::endl;
    ejercicio_p();

    return 0;
}
