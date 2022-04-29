#include <iostream>

using namespace std;

extern void agregarProductos( string descripcion, int cantidad, double precio);
extern void productos(int opcion);

void comida(int OpcionS) {
    system("cls");

     int opcionComida;
     int opcionProducto;

    cout << "C O M I D A S" << endl;
    cout << "=============" << endl;
    cout << "1. Pizza hut" << endl;
    cout << "2. Pollo hondureno" << endl;
    cout << "3. bebidas" << endl;
    cout << endl;
    cout << "Ingrese una opcion: "; cin >> opcionComida;
   

   switch (opcionComida)
    {
        case 1:
        {
            system("cls");
            cout << "P I Z Z A  H U T" << endl;
            cout << "================" << endl << endl;
            cout << "1. 4 estaciones pizza (super, suprema, jamon y canadiense y pepperoni.)" << endl;
            cout << "2. pizza pepperoni lovers" << endl;
            cout << "3. Calzone supremo" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;
                
            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1  (4 estaciones pizza) - L 318.00", 1, 318);
                break;
            case 2:
                agregarProductos("1 pizza pepperoni lovers - L 290.00", 1, 290);
                break; 
            case 3:
                agregarProductos("1 Calzone supremo - L 155.00", 1, 155);
                break;   
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
            
            break;
        }

        case 2: {
            system("cls");
            cout << "P O L L O   H O N D U R E N O" << endl;
            cout << "=============================" << endl << endl;
            cout << "1. 1/2 pollo frito + 1 orden de papas + 1 ensalado de repollo" << endl;
            cout << "2. Nachos" << endl;
            cout << "3. Hamburguesa + 1 orden de papas" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;
                    
            switch (opcionProducto)
            {
            case 1:
                agregarProductos("1 (1/2 pollo frito + 1 orden de papas + 1 ensalado de repollo) - L179.00", 1, 179);
                break;
            case 2:
                agregarProductos("1 Nachos - L115", 1, 115);
                break; 
            case 3:
                agregarProductos("1 Hamburguesa + 1 orden de papas - L 125.00", 1, 125);
                break;
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
            
            break;
            }

     case 3: {
        system("cls");
        cout << "B E B I D A S" << endl;
        cout << "==============" << endl << endl;
        cout << "1. 1 Pepsi 500 ml" << endl;
        cout << "2. Mirinda 2 litros" << endl;
        cout << "3. Agua zen 750 ml" << endl;
        cout << "4 . Te lipton 2 litros" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
                
        switch (opcionProducto)
        {
        case 1:
            agregarProductos("1 Pepsi 500 ml - L31.00", 1, 31);
            break;
        case 2:
            agregarProductos("1 Mirinda 2 litros - L47.00", 1, 47);
            break; 
        case 3:
            agregarProductos("1 Agua zen 750 ml - L 25.00", 1, 25);  
            break; 
        case 4:
            agregarProductos("1 Te lipton 2 litros - L 47.00", 1, 47);  
            break;
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
        }

     default: {
        cout << " Opcion invalidad" << endl;
        break;
        }

    }

}

void Cafe(int  OpcionS) 
{
    system("cls");

    int opcionPrducto;

    switch (OpcionS)
    {
     case 1:
    {
        cout << "B E B I D A S   C A L I E N T E S" << endl;
        cout << "=================================" << endl << endl;
        cout << "1 - Capuccion" << endl;
        cout << "2 - Expresso" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionPrducto;
                
        switch (opcionPrducto)
        {
        case 1:
            agregarProductos("1 Capuccion - L 40.00", 1, 40);
            break;
        case 2:
            agregarProductos("1 Expresso - L 30.00", 1, 30);
            break;    
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
        case 2:
        {
            cout << "B E B I D A S   F R I A S" << endl;
            cout << "=========================" << endl << endl;
            cout << "1 - Mochaccino" << endl;
            cout << "2 - Granita de coffee" << endl;
            cout << "3 - Iced tea" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Mochaccino - L 30.00", 1, 30);
                break;
            case 2:
                agregarProductos("1 Granita de coffee - L 45.00", 1, 45);
                break;
            case 3:
                agregarProductos("1 Iced tea - L 45.00", 1, 45);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }
         case 3:
        {
            cout << "R E P O S T E R I A S" << endl;
            cout << "=====================" << endl << endl;
            cout << "1 - Sandwich con huevo" << endl;
            cout << "2 - Chilena leche" << endl;
            cout << "3 - Galleta de mantequilla" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Sandwich con huevo- L 30.00", 1, 30);
                break;
            case 2:
                agregarProductos("1 Chilena leche - L 15.00", 1, 15);
                break;
            case 3:
                agregarProductos("1 Galleta de mantequilla - L 25.00", 1, 25);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }
    default:
        break;
    }
}

void Super(int OpcionS) {
    system("cls");

    int opcionPrducto;
    int opcionSuper;
     
        cout << "S U P E R M E R C A D O S   L A   C O L O N I A " << endl;
        cout << "================================================" << endl;
        cout << "1 - Arroz, frijol y semilas" << endl;
        cout << "2 - Aceites" << endl;
        cout << "3 - Bolsas y higiene personal" << endl;
        cout << "4 - Papel toalla y servilletas" << endl;
        cout << "5 - Fauras y verduras" << endl;
        cout << endl;
        cout << "Ingrese una opcion: "; cin >> opcionSuper;

    switch (opcionSuper)
    {
     case 1:
    {
        system("cls");
        cout << "A R R O Z, F R I J O L  Y  S E M I L A S "<< endl;
        cout << "========================================" << endl;
        cout << "1 - Arroz integramosal Mr.Dieck (454 Gramos)" << endl;
        cout << "2 - Frijol la cosecha rojo especial" << endl;
        cout << "3 - Arroz progreso ";
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionPrducto;
                
        switch (opcionPrducto)
        {
        case 1:
            agregarProductos("1 Arroz integramosal - L 18.70", 1, 18.70);
            break;
        case 2:
            agregarProductos("1 Frijol la cosecha rojo especial - L 61.00", 1, 61);
            break; 
        case 3:
            agregarProductos("1 Arroz progreso - L 62.00", 1, 62);
            break;   
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
        case 2:
        {
            system("cls");
            cout << "A C E I T E S" << endl;
            cout << "==============" << endl << endl;
            cout << "1 - Aceite borges oliva extra virgen" << endl;
            cout << "2 - Aceite Clover vegetal  (1,000 ml)" << endl;
            cout << "3 - Aceite orisol olva light ()750 ml)" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Aceite borges oliva extra virge - L 142.00", 1, 142);
                break;
            case 2:
                agregarProductos("1 Aceite Clover vegetal - L 83.00", 1, 83);
                break;
            case 3:
                agregarProductos("1 Aceite orisol olva light - 750 ml - L 73.00", 1, 73);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }
         case 3:
        {
            system("cls");
            cout << "B O L S A S  Y  H I G I E N E   P E R S O N A L" << endl;
            cout << "================================================" << endl << endl;
            cout << "1 - Papel alumino Diamond (75 Pies)" << endl;
            cout << "2 - Jabon Protex Aleo 110 G/96" << endl;
            cout << "3 - Shampoo Head & Shoilders Limpieza Renovadora (700 ml)" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Papel alumino Diamond (75 Pies) - L 162.00", 1, 162);
                break;
            case 2:
                agregarProductos("1 Jabon Protex Aleo 110 G/96 - L 24.00", 1, 24);
                break;
            case 3:
                agregarProductos("1 Shampoo Head & Shoilders Limpieza Renovadora (700 ml) - L 322.55", 1, 323);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }

        case 4:
        {
            system("cls");
            cout << "P A P E L  T O A L L A  Y  S E R V I L L E T A S" << endl;
            cout << "================================================" << endl << endl;
            cout << "1 - Papel toalla scott multiuso absorbente (2 Rollos)" << endl;
            cout << "2 - Toalla santarias Kotex escencial con alas (10Unds)" << endl;
            cout << "3 - Papel higiencio encanto 1,000 hojas (4 rollo)" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Papel toalla scott multiuso absorbente 2 Rollos - L52.63", 1, 53);
                break;
            case 2:
                agregarProductos("1 Toalla santarias Kotex escencial con alas (10Unds) - L25.75", 1, 26);
                break;
            case 3:
                agregarProductos("1 Papel higiencio encanto 1,000 hojas (4 rollo) - L72.68", 1, 73);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }

        case 5:
        {
            system("cls");
            cout << "F R U T A S    Y   V E R D U R A S" << endl;
            cout << "==================================" << endl << endl;
            cout << "1 - Limon (1r unidad)" << endl;
            cout << "2 - Zanahoria (1 libra)" << endl;
            cout << "3 - Cebolla roja (1 unidad)" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Limon - L2.23", 1, 2);
                break;
            case 2:
                agregarProductos("1 Zanahoria - L25.75", 1, 26);
                break;
            case 3:
                agregarProductos("1 Cebolla roja (1 unidad) - L", 1, 73);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }

    default: {
        cout <<"Opcion invalidad" << endl;
        return;
        break;
        }
    }
}

void Farmacia(int OpcionS) 
{ 
    system("cls");

    int opcionPrducto;
    int OpcionFarmacia;
    
    cout << "F A R M A C I A" << endl;
    cout << "===============" << endl;
    cout << "1 - Gripe, tos y Alegrias" << endl;
    cout << "2 - Primeros Auxilios" << endl;
    cout << "3 - Dolor y fiebre" << endl;
    cout << endl;
    cout << "Ingrese una opcion: "; cin >> OpcionFarmacia;

    switch (OpcionFarmacia)
    {
     case 1:
    {
        system("cls");
        cout << "G R I P E,  T O S  Y  A L E G R I A S " << endl;
        cout << "======================================" << endl << endl;
        cout << "1 - Borbalan Jarabe (120ml)" << endl;
        cout << "2 - Abrilar Jarabe (100ml)" << endl;
        cout << "3 - Mailen 5mg (30 tabletas)" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionPrducto;
                
        switch (opcionPrducto)
        {
        case 1:
            agregarProductos("1 Borbalan Jarabe (120ml) - L186.86", 1, 186.86);
            break;
        case 2:
            agregarProductos("1 Abrilar Jarabe (100ml) - L325.55", 1, 325.55);
            break;  
        case 3:
            agregarProductos("1 Mailen 5mg (30 tabletas) - L504.90", 1, 504.90);

        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
        case 2:
        {
            system("cls");
            cout << "P R I M E R O S   A U X I L I O S" << endl;
            cout << "=================================" << endl << endl;
            cout << "1 - Alcohol clinico fs (120ml)" << endl;
            cout << "2 - Venditas cure band (100 curitas)" << endl;
            cout << "3 - Hospro gasa (fs4x4) esteril por 1" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Alcohol clinico fs (120ml) - L40.50", 1, 40.50);
                break;
            case 2:
                agregarProductos("1 Venditas cure band (100 curitas) - L40.00", 1, 40);
                break;
            case 3:
                agregarProductos("1 Hospro gasa (fs4x4) esteril por 1 - L2.00", 1, 2);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }
         case 3:
        {
            system("cls");
            cout << "D O L O R  Y   F I E B R E" << endl;
            cout << "==========================" << endl << endl;
            cout << "1 - Ibuprofeno-Fs (600mg) (caja por 30 tabs gv)" << endl;
            cout << "2 - Cofal original tarro (35g)" << endl;
            cout << "3 - Hospro jeringa + dolorfor 2gm (5ml por 1 ampolla)" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Ibuprofeno-Fs (600mg) - L193.89", 1, 193.89);
                break;
            case 2:
                agregarProductos("1 Cofal original tarro (35g)- L62.85", 1, 62.85);
                break;
            case 3:
                agregarProductos("1 Hospro jeringa + dolorfor 2gm  - L31.55", 1, 31.55);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }
    default:
        break;
    }
}

void Tienda(int OpcionS) {
    system("cls");

    int opcionPrducto;
    int opcionTienda;

    if(OpcionS == 1) {
    
        system("cls");
        cout << "H U S  N A T U R A L" << endl;
        cout << "====================" << endl;
        cout << "1 - Cuidado capilar" << endl;
        cout << "2 - Acietes y cremas naturales" << endl;
        cout << "3 - Belleza y cuidado personal " << endl;
        cout << endl;
        cout << "Ingrese una opcion: "; cin >> opcionTienda;

        switch(opcionTienda) {
            case 1:
            {
                system("cls");
                cout << "C U I D A D O   C A P I L A R" << endl;
                cout << "=============================" << endl << endl;
                cout << "1 - Argan Oil Shampoo (L/Sal 50ml)" << endl;
                cout << "2 - Argan Oil Aconodicionador (500ml)" << endl;
                cout << "3 - Aleo vera gel (240ml)" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1 Argan Oil Shampoo (L/Sal 50ml) - L 250.00", 1, 250);
                    break;
                case 2:
                    agregarProductos("1 Argan Oil Aconodicionador (500ml) - L 250.00", 1, 250);
                    break;
                case 3:
                    agregarProductos("1 - Aleo vera gel (240ml) - L150.00", 1 , 150);  
                    break; 
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
                
                break;
            }
            case 2:
            {
                system("cls");
                cout << "A C E I T E S  Y   C R E M A S   N A T U R A L E S" << endl;
                cout << "==================================================" << endl << endl;
                cout << "1 - Argan aceites (nat.30ml)" << endl;
                cout << "2 - Lavanda/Almendera Body oli infusion (100ml)" << endl;
                cout << "3 - Jojoba crema hush (nat.240ml)" << endl;
                cout << "4 - Menta aceite para masaje 240ml" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1  Argan aceites (nat.30ml) - L200.00", 1, 200);
                    break;
                case 2:
                    agregarProductos("1 Lavanda/Almendera Body oli infusion (100ml) - L 500.00", 1, 500);
                    break;
                case 3:
                    agregarProductos("1 Jojoba crema hush (nat.240ml) - L200.00", 1, 200);
                    break;  
                case 4:
                    agregarProductos("1 Menta aceite para masaje 240ml - L200.00", 1, 200);  
                    break;
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
            
                break;
            }
            case 3:
            {
                system("cls");
                cout << "B E L L E Z A  Y  C U I D A D O   P E R S O N A L" << endl;
                cout << "=================================================" << endl << endl;
                cout << "1 - Sandia limpiador facial 240ml c/cepillo" << endl;
                cout << "2 - Serum de aleo 50ml" << endl;
                cout << "3 - Karite crema limpiadora" << endl;
                cout << "4 - Lavanda tonico facial 240ml" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1 Sandia limpiador facial 240ml c/cepillo - L300.00", 1, 300);
                    break;
                case 2:
                    agregarProductos("1 Serum de aleo 50ml - L250.00", 1, 250);
                    break;
                case 3:
                    agregarProductos("1 Karite crema limpiadora - L250.00", 1, 250);
                    break;
                case 4:
                    agregarProductos("1 Lavanda tonico facial 240ml - L150.00", 1, 150);  
                    break; 
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
            
                break;
            }
        default:
            break;
        }
    }
    
    if(OpcionS == 2) {
        system("cls");
        cout << "M A S C O T A S" << endl;
        cout << "================" << endl;
        cout << "1 - Comidas" << endl;
        cout << "2 - Accesorios de limpieza y mediciamentos" << endl;
        cout << "3 - Juguetes, collares, camas y casitas" << endl;
        cout << endl;
        cout << "Ingrese una opcion: "; cin >> opcionTienda;

        switch (opcionTienda) {
            case 1:
            {
                system("cls");
                cout << "C O M I D A S" << endl;
                cout << "=============" << endl << endl;
                cout << "1 - Beneful cacharro pollo" << endl;
                cout << "2 - Pedigree adulto pollo" << endl;
                cout << "3 - Regalos crupi sabor carne tocino" << endl;
                cout << "4 - Dog chow adulto med gran extra" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1 Beneful cacharro pollo  - L217.00", 1, 217);
                    break;
                case 2:
                    agregarProductos("1 Pedigree adulto pollo  - L23.50", 1, 23.50);
                    break;
                case 3:
                    agregarProductos("1 - Regalos crupi sabor carne tocino  - L275.00", 1 , 275);
                    break;
                case 4:
                    agregarProductos("1 Dog chow adulto med gran extra  - L201.50", 1 , 201.50); 
                    break;  
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
                
                break;
            }
            case 2:
            {
                system("cls");
                cout << "A C C E S O R I O S   D E   L I M P I E Z A   Y   M E D I C I A M E N T O S" << endl;
                cout << "===========================================================================" << endl << endl;
                cout << "1 - Shampoo de avena salon" << endl;
                cout << "2 - Jabon medicado mascotas Mr.Dog" << endl;
                cout << "3 - Peine para mascotas azul" << endl;
                cout << "4 - Cepillo de dientes para mascotas" << endl;
                cout << "5 - Jabon perro consentido antiseptico" << endl;
                cout << "6 - Drontal plus por 1 tableta" << endl;
                cout << "7 - Baytril 150mg inyectable" << endl;
                cout << "8 - Viusid Pets (150 ML)" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1  Shampoo de avena salon - L308.50", 1, 308.50);
                    break;
                case 2:
                    agregarProductos("1 Jabon medicado mascotas Mr.Dog - L157.00", 1, 157);
                    break;
                case 3:
                    agregarProductos("1 Peine para mascotas azul - L108.00", 1, 108);
                    break;  
                case 4:
                    agregarProductos("1 Cepillo de dientes para mascotas - L35.50", 1, 35.50);  
                    break;
                case 5:
                    agregarProductos("1 Jabon perro consentido antiseptico - L87.85", 1, 87.85);  
                    break;
                case 6:
                    agregarProductos("1 Drontal plus por 1 tableta - L69.20", 1, 69.20);  
                    break;
                case 7:
                    agregarProductos("1 Baytril 150mg inyectable - L945.00", 1, 945);  
                    break;
                case 8:
                    agregarProductos("1 Viusid Pets (150 ML) - L600.00", 1, 600);  
                    break;
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
            
                break;
            }
            case 3:
            {
             
                system("cls");
                cout << "J U G U E T E S, C O L L A R E S, C A M A S   Y  C A S I T A S" << endl;
                cout << "==============================================================" << endl << endl;
                cout << "1 - Sandia limpiador facial 240ml c/cepillo" << endl;
                cout << "2 - Serum de aleo 50ml" << endl;
                cout << "3 - Karite crema limpiadora" << endl;
                cout << "4 - Lavanda tonico facial 240ml" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1 Sandia limpiador facial 240ml c/cepillo - L300.00", 1, 300);
                    break;
                case 2:
                    agregarProductos("1 Serum de aleo 50ml - L250.00", 1, 250);
                    break;
                case 3:
                    agregarProductos("1 Karite crema limpiadora - L250.00", 1, 250);
                    break;
                case 4:
                    agregarProductos("1 Lavanda tonico facial 240ml - L150.00", 1, 150);  
                    break; 
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
            
                break;
            }
        default:
            break;
            }
        } 

    if(OpcionS == 3) {
       system("cls");
        cout << "H O G A R  Y  F E R R E T E R I A" << endl;
        cout << "=================================" << endl;
        cout << "1 - Accesorios" << endl;
        cout << "2 - Limpieza" << endl;
        cout << "3 - Hogar y ferreteria" << endl;
        cout << endl;
        cout << "Ingrese una opcion: "; cin >> opcionTienda;

        switch (opcionTienda) {
            case 1:
            {
                system("cls");
                cout << "A C C E S O R I O S" << endl;
                cout << "===================" << endl << endl;
                cout << "1 - Escoba completa" << endl;
                cout << "2 - Recogedor de basura" << endl;
                cout << "3 - Paño mircofibra azul" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1 Escoba completa - L69.00", 1, 69);
                    break;
                case 2:
                    agregarProductos("1 Recogedor de basura - L60.00", 1, 60);
                    break;
                case 3:
                    agregarProductos("1 Paño mircofibra azul - L40.00", 1 , 40); 
                    break;  
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
                
                break;
            }
            case 2:
            {
                system("cls");
                cout << "L I M P I E Z A" << endl;
                cout << "===============" << endl << endl;
                cout << "1 - Suavizante de ropa" << endl;
                cout << "2 - Mechas de trapeador" << endl;
                cout << "3 - Basurero de pedal" << endl;
                cout << "4 - Franelas de micro fibra" << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1 Suavizante de ropa - L140.00", 1, 140);
                    break;
                case 2:
                    agregarProductos("1 Mechas de trapeador - L60.00", 1, 60);
                    break;
                case 3:
                    agregarProductos("1 Basurero de pedal - L295.00", 1, 295);
                    break;  
                case 4:
                    agregarProductos("1 Franelas de micro fibra - L45.00", 1, 45);  
                    break;
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
            
                break;
            }
            case 3:
            {
                system("cls");
                cout << "H O G A R  Y  F E R R E T E R I A" << endl;
                cout << "=================================" << endl;
                cout << "1 - Cuchillos regalta" << endl;
                cout << "2 - Juegos de ollas Cinsa7 piezas" << endl;
                cout << "3 - Batidora black and decker" << endl;
                cout << "4 - Llaves de combinación 6 piezas " << endl;
                cout << endl;

                cout << "Ingrese una opcion: ";
                cin >> opcionPrducto;
                    
                switch (opcionPrducto)
                {
                case 1:
                    agregarProductos("1 Cuchillos regalta - L130.00", 1, 130);
                    break;
                case 2:
                    agregarProductos("1 Juegos de ollas Cinsa7 piezas - L1,295.00", 1, 1295);
                    break;
                case 3:
                    agregarProductos("1 Batidora black and decker - L690.00", 1, 690);
                    break;
                case 4:
                    agregarProductos("1 Llaves de combinación 6 piezas - L75.00", 1, 75);
                    break;   
                default:
                    {
                        cout << "opcion no valida";
                        return;
                        break;
                    }
                }

                cout << endl;
                cout << "Producto agregado" << endl << endl;
                system("pause");
            
                break;
            }
        default: {
            cout << "Opcion invalidad" << endl;
            break;
            }
        } 
        system("cls");
        }
}  
