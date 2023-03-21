#include<stdio.h>

main(){
    
    float produto, lucro, custo, venda, despesa, frete;
    
		printf("Informe o valor do produto:\n");
    	scanf("%f",&produto);
        
		printf("Informe o valor do frete:\n");
    	scanf("%f",&frete);
        
		printf("Informe o quanto foi gasto com despesas:\n");
    	scanf("%f",&despesa);
    	
		custo = produto + frete + despesa;
        
		printf("Qual o valor da venda :");
    	scanf("%f",&venda);
    
		lucro = ((venda-custo)/custo*100);
    
		printf("O lucro neste produto e de :%.2f%%", lucro);
		
		return 0;
}
