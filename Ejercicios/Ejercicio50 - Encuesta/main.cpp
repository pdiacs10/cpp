#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string alumnos[3];
    string encuesta[3][2] =
    {
        { "Llevara clases el siguiente periodo?", "" },
        { "Matricula L2", "" }, 
        { "Matricula L2 con el Lic Billy?", "" },
    };
    int respuesta[3] = {0, 0, 0};

    cout << "Contesta la encuesta con s o n" << endl << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "Ingrese su nombre: ";
        cin >> alumnos[i];
        cout << endl;

        for(int j = 0; j < 3; j++)
        {
            cout << encuesta[j][0] << ": ";
            cin >> encuesta[j][1];

            if (encuesta[j][1] == "s")
            {
                respuesta[j]++;
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << "Resumen" << endl;
    cout << "Respuesta pregunta 1: " << respuesta[0] << endl;
    cout << "Respuesta pregunta 2: " << respuesta[1] << endl;
    cout << "Respuesta pregunta 3: " << respuesta[2] << endl;

    return 0;
}
