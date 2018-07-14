package vector2;

vector
arraylist


********   ex: vector v = new vector ();   //posso guardar o que quiser//como se fosse ilimitado//
********   v.add("o1");
********   v.add("02");

// adicionando string

********   vadd(new conta(10,"marcos"));


//remove -----> remover!

********   v.remove("02"); // procura altomaticamente o objeto;

ou

********   v.remove("0"); // exclui o objeto da position 0;


********   int r = v.indexof("oi"); //procura o elemento no vetor
	   boolean b= v.contains("02");

varrendo:    for(int i=0; i<v.size(); i++){
		STRING S= V.GET(I);
		
             }

vector<string>  //vetor só guada string;
vector<string> v = vector<string>();


for(string tempo: v){     			//for para strings   ex: guardei em v:{01, 02, 03}
	System.out.println(tempo);
}


maneira generica para varrer!

iterator : é como se fosse um dedo// >>>> poderá fazer 2 perguntas ao dedo: >>>: retorna o elemento que vc deseja// segunda pergunta: "ainda tem elemento?" >>: ele procura apontar pra mais algum elemento que exista no saco e aponta se existir; ele varre qualquer coleção!


iterator it = v.iterator();
while(it.hasnext()){   // true ou false
	String s = it.next();
	.
	.
	.
	.
}



