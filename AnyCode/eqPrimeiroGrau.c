// juan silva
// executar seu próprio código C na placa FPGA (com argumentos) | equacao do primeiro grau

int resolve_raiz_equacao_primeiro_grau(register int a, register int b) {
   register int x = (int)(((-1)*b)/a); // fazendo cast para inteiro pois o resultado será exibido nos LED'S
   return x;

}
