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
	int cod, qtd, p_qtd;	//C�digo e n�mero de produtos
	char nome_prod[tam];	//Nome dos produtos
	float preco;			//Pre�o dos produtos	
};

//STRUCT 3
struct Data {
	int dia, mes, ano;//Vari�veis referentes aos anivers�rios dos clientes
};

//STRUCT 4
struct Cliente {
	int c_qtd;//Quantidade de clientes
	char user[tam], endereco[tam], email[tam], cpf[12];//Nome, endere�o, emails e CPF dos usu�rios
};

//Imprime os aniversariantes do m�s(FUN��O 1)
void aniv (struct Data vec[], struct Cliente vec1[], int n, int mes) {
	int i;
	char mes1[13][10] = {" ", "janeiro", "fevereiro", "mar�o", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};//O 10 � a quantidade m�xima de caracteres da string
	
	//Verifica a lista de aniversariantes de acordo com o m�s e imprime os nomes
	cout << "Aniversariantes de " << mes1[mes] << ":" << endl;
	for(i = 0; i < n; i++){
		if(vec[i].mes == mes){
			cout << vec1[i].user << endl;
		}
	}
}

//Imprime os produtos com menos de 10 unidades em estoque(FUN��O 2)
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

//Imprime todas as informa��es de um cliente na posi��o n_info(FUN��O 3)
void info_cliente (struct Cliente vec1[], struct Data vec2[], int n, int n_info) {
	cout << "Cliente na posi��o " << n_info << ":" << endl		//Posi��o do cliente no vetor
		 << "Nome: " << vec1[n_info].user << endl				//Nome
		 << "Endere�o: " << vec1[n_info].endereco << endl		//Endere�o
		 << "Email: " << vec1[n_info].email << endl				//Email
		 << "CPF: " << vec1[n_info].cpf << endl					//CPF
		 << "Data de nascimento: "
		 << vec2[n_info].dia << "/"								//Dia do anivers�rio
		 << vec2[n_info].mes << "/"								//M�s do anivers�rio
		 << vec2[n_info].ano << endl;							//Ano do anivers�rio
}

//Imprime todas as informa��es de um produto na posi��o n_info1(FUN��O 4)
void info_prod (struct Produto vec2[], int n, int n_info1) {
	cout << "Produto na posi��o: " << n_info1 << endl		//Posi��o do produto no vetor
		 << "C�digo: " << vec2[n_info1].cod << endl			//C�digo
		 << "Nome: " << vec2[n_info1].nome_prod << endl		//Nome
		 << "Pre�o: " << vec2[n_info1].preco << endl		//Pre�o
		 << "Estoque: " << vec2[n_info1].qtd << endl;		//QUantidade em estoque
}

//PROGRAMA PRINCIPAL
int main () {
	int i, cliente_qtd, prod_qtd, mes, n_info, n_info1;//N�meros de clientes e produtos ---- M�s dos aniversariantes ---- Posi��es dos vetores de clientes e produtos
	
	Loja aux;//STRUCT 1
	
	//LEITURA DAS INFORMA��ES
	
	//Informa��es iniciais
	cin >> cliente_qtd						//Quantidade de clientes
		>> prod_qtd;						//Quantidade de produtos
		cin.ignore();						//Consome o \n
		cin.getline(aux.nome, tam);			//Nome da loja
		cin.getline(aux.l_endereco, tam);	//Endere�o da loja
		cin >> aux.tel_loja;				//Telefone da loja
		cin.ignore();
	
	//O tamanho dos vetores vai ser dado pelas vari�veis cliente_qtd e prod_qtd
	Produto vec1[prod_qtd];		//STRUCT 2
	Data vec2[cliente_qtd];		//STRUCT 3
	Cliente vec3[cliente_qtd];	//STRUCT 4
	
	//Informa��es dos cliente_qtd clientes
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
	
	//Informa��es dos prod_qtd clientes
	for(i = 0; i < cliente_qtd; i++){
			 //STRUCT 2
		cin >> vec1[i].cod;
		cin.ignore();
		cin.getline(vec1[i].nome_prod, tam);
		cin	>> vec1[i].preco
			>> vec1[i].qtd;
			cin.ignore();
	}
	
	cin >> mes;//M�s que ser� usado para imprimir os aniversariantes
	
	cin >> n_info >> n_info1;//Posi��es dos vetores de clientes e produtos
	
	//IMPRESS�O DAS INFORMA��ES
	
	//Informa��es da loja
	cout << "Loja: " << aux.nome << endl
		 << "Endere�o: " << aux.l_endereco << endl
		 << "Telefone: " << aux.tel_loja << endl;
		
	//Lista de aniversariantes do m�s
	aniv (vec2, vec3, cliente_qtd, mes);
	
	//Produtos inferiores a 10
	prod_10 (vec1, prod_qtd);
	
	//Informa��es sobre cliente em n_info
	info_cliente (vec3, vec2, cliente_qtd, n_info);
	
	//Informa��es sobre produto em n_info1
	info_prod (vec1, prod_qtd, n_info1);
	
	return 0;
}
