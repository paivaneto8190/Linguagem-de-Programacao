#include <iostream>

using namespace std;

const int tam = 41;//Para as strings

//STRUCT 1
struct Loja {
	int tel_loja;
	char nome[tam], l_endereco[tam];
};

//STRUCT 2
struct Produto {
	int cod, qtd, p_qtd;	//Código e número de produtos
	char nome_prod[tam];	//Nome dos produtos
	float preco;			//Preço dos produtos	
};

//STRUCT 3
struct Data {
	int dia, mes, ano;//Variáveis referentes aos aniversários dos clientes
};

//STRUCT 4
struct Cliente {
	int c_qtd;//Quantidade de clientes
	char user[tam], endereco[tam], email[tam], cpf[12];//Nome, endereço, emails e CPF dos usuários
};

//Imprime os aniversariantes do mês(FUNÇÃO 1)
void aniv (struct Data vec[], struct Cliente vec1[], int n, int mes) {
	int i;
	char mes1[13][10] = {" ", "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};//O 10 é a quantidade máxima de caracteres da string
	
	//Verifica a lista de aniversariantes de acordo com o mês e imprime os nomes
	cout << "Aniversariantes de " << mes1[mes] << ":" << endl;
	for(i = 0; i < n; i++){
		if(vec[i].mes == mes){
			cout << vec1[i].user << endl;
		}
	}
}

//Imprime os produtos com menos de 10 unidades em estoque(FUNÇÃO 2)
void prod_10 (struct Produto vec[], int n) {
	int i;
	
	//Imprime o nome dos produtos
	cout << "Produtos com estoque inferior a 10:" << endl;
	for(i = 0; i < n; i++){
		if(vec[i].qtd < 10){
			cout << vec[i].nome_prod << endl;//Imprime o nome dos produtos
		}
	}
}

//Imprime todas as informações de um cliente na posição n_info(FUNÇÃO 3)
void info_cliente (struct Cliente vec1[], struct Data vec2[], int n, int n_info) {
	cout << "Cliente na posição " << n_info << ":" << endl		//Posição do cliente no vetor
		 << "Nome: " << vec1[n_info].user << endl				//Nome
		 << "Endereço: " << vec1[n_info].endereco << endl		//Endereço
		 << "Email: " << vec1[n_info].email << endl				//Email
		 << "CPF: " << vec1[n_info].cpf << endl					//CPF
		 << "Data de nascimento: "
		 << vec2[n_info].dia << "/"								//Dia do aniversário
		 << vec2[n_info].mes << "/"								//Mês do aniversário
		 << vec2[n_info].ano << endl;							//Ano do aniversário
}

//Imprime todas as informações de um produto na posição n_info1(FUNÇÃO 4)
void info_prod (struct Produto vec2[], int n, int n_info1) {
	cout << "Produto na posição: " << n_info1 << endl		//Posição do produto no vetor
		 << "Código: " << vec2[n_info1].cod << endl			//Código
		 << "Nome: " << vec2[n_info1].nome_prod << endl		//Nome
		 << "Preço: " << vec2[n_info1].preco << endl		//Preço
		 << "Estoque: " << vec2[n_info1].qtd << endl;		//QUantidade em estoque
}

//PROGRAMA PRINCIPAL
int main () {
	int i, cliente_qtd, prod_qtd, mes, n_info, n_info1;//Números de clientes e produtos ---- Mês dos aniversariantes ---- Posições dos vetores de clientes e produtos
	
	Loja aux;//STRUCT 1
	
	//LEITURA DAS INFORMAÇÕES
	
	//Informações iniciais
	cin >> cliente_qtd						//Quantidade de clientes
		>> prod_qtd;						//Quantidade de produtos
		cin.ignore();						//Consome o \n
		cin.getline(aux.nome, tam);			//Nome da loja
		cin.getline(aux.l_endereco, tam);	//Endereço da loja
		cin >> aux.tel_loja;				//Telefone da loja
		cin.ignore();
	
	//O tamanho dos vetores vai ser dado pelas variáveis cliente_qtd e prod_qtd
	Produto vec1[prod_qtd];		//STRUCT 2
	Data vec2[cliente_qtd];		//STRUCT 3
	Cliente vec3[cliente_qtd];	//STRUCT 4
	
	//Informações dos cliente_qtd clientes
	for(i = 0; i < cliente_qtd; i++){
			 //STRUCT 4
		cin.getline(vec3[i].user, tam);
		cin.getline(vec3[i].endereco, tam);
		cin.getline(vec3[i].email, tam);
		cin.getline(vec3[i].cpf, 12);
			 //STRUCT 2
		cin	>> vec2[i].dia
			>> vec2[i].mes
			>> vec2[i].ano;
		cin.ignore();
	}
	
	//Informações dos prod_qtd clientes
	for(i = 0; i < cliente_qtd; i++){
			 //STRUCT 2
		cin >> vec1[i].cod;
		cin.ignore();
		cin.getline(vec1[i].nome_prod, tam);
		cin	>> vec1[i].preco
			>> vec1[i].qtd;
			cin.ignore();
	}
	
	cin >> mes;//Mês que será usado para imprimir os aniversariantes
	
	cin >> n_info >> n_info1;//Posições dos vetores de clientes e produtos
	
	//IMPRESSÃO DAS INFORMAÇÕES
	
	//Informações da loja
	cout << "Loja: " << aux.nome << endl
		 << "Endereço: " << aux.l_endereco << endl
		 << "Telefone: " << aux.tel_loja << endl;
		
	//Lista de aniversariantes do mês
	aniv (vec2, vec3, cliente_qtd, mes);
	
	//Produtos inferiores a 10
	prod_10 (vec1, prod_qtd);
	
	//Informações sobre cliente em n_info
	info_cliente (vec3, vec2, cliente_qtd, n_info);
	
	//Informações sobre produto em n_info1
	info_prod (vec1, prod_qtd, n_info1);
	
	return 0;
}
