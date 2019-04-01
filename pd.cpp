//substitui força bruta
//recursividade com uma lookup table
//maximizacao/minimizacao/analise combinatoria
//seq de fibonacci(exemplo) >> custo exponencial(2^n/2) -> custo linear(n)
//top-down (+ memoria/tempo)-> começar de um problema maior, 
//subdividindo em problemas menores
//bottom-up (- memoria/tempo)-> começar de um problema menor,
// e chegar na solução de problemas menores
//algoritmo de bellman
//unir grafos com tabelas -> cada caminho com k+1 arestas 
//ligando dois pontos no maximo

//5 passos
//1 - definir os sub-problemas -> descobrir o numero de subproblemas
//2 - chute -> descobrir o numero de chutes
//3 - relacinar a sol. dos subproblemas -> garantir ordenaçao topologica s/ ciclos
//4 - recursao + memorizacao
//5 - solucao do problema maior

//Edit distance
//Dadas duas strings x e y, qual e o custo de transformar x em y?
//mods: -> remover,inserir e trocar caracteres
//1 - O(x.y)
//2-  ED(i,j) = min(1+ED(i,j+1),ED(i+1,j),ED(i+1,j+1))
//3- Somente ir p/ frente

/*int memo[N][N];
int ED(int i,int j){
	if(memo[i][j]!=-1){
		return memo[i][j];
	}
	else 
		return memo[i][j] =  min(1+ED(i,j+1),ED(i+1,j),ED(i+1,j+1))
	if(x>N|| j>N{
		return max(i,j);
	}
}
*/

//knpsack
//KS(i,s) = max(KS(i+1)(s-si),KS(i-1))
//


