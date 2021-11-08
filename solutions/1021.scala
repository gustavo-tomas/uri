object Main {

    def main(args: Array[String]) {

        //100, 50, 20, 10, 5, 2 e 1
        var nota100=0 
        var nota50=0 
        var nota20=0
        var nota10=0
        var nota5=0
        var nota2=0
        var moeda1=0
        var moeda50=0
        var moeda25=0
        var moeda10=0
        var moeda05=0
        var moeda01=0
        var valor = scala.io.StdIn.readDouble()

        while (valor>=100.00){
            valor-=100.00;
            nota100+=1;
        }

        while (valor>=50.00){
            valor-=50.00;
            nota50+=1;
        }

        while (valor>=20.00){
            valor-=20.00;
            nota20+=1;
        }

        while(valor>=10.00){
            valor-=10.00;
            nota10+=1;
        }

        while(valor>=5.00){
            valor-=5.00;
            nota5+=1;
        }
        
        while(valor>=2.00){
            valor-=2.00;
            nota2+=1;
        }

        while(valor>=1.00){
            valor-=1.00;
            moeda1+=1;
        }

        while(valor>=0.50){
            valor-=0.50;
            moeda50+=1;
        }

        while(valor>=0.25){
            valor-=0.25;
            moeda25+=1;
        }

        while(valor>=0.10){
            valor-=0.10;
            moeda10+=1;
        }

        while(valor>=0.05){
            valor-=0.05;
            moeda05+=1;
        }

        while(valor>=0.01){
            valor-=0.01;
            moeda01+=1;
        }

        if(valor >= 0.009){
            valor -= 0.01;
            moeda01+=1;
        }

        print("NOTAS:\n");
        print(nota100 + " nota(s) de R$ 100.00\n");
        print(nota50 + " nota(s) de R$ 50.00\n");
        print(nota20 + " nota(s) de R$ 20.00\n");
        print(nota10 + " nota(s) de R$ 10.00\n");
        print(nota5 + " nota(s) de R$ 5.00\n");
        print(nota2 + " nota(s) de R$ 2.00\n");
        print("MOEDAS:\n");
        print(moeda1 + " moeda(s) de R$ 1.00\n");
        print(moeda50 + " moeda(s) de R$ 0.50\n");
        print(moeda25 + " moeda(s) de R$ 0.25\n");
        print(moeda10 + " moeda(s) de R$ 0.10\n");
        print(moeda05 + " moeda(s) de R$ 0.05\n");
        print(moeda01 + " moeda(s) de R$ 0.01\n");
    }
}
