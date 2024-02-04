// Programa para pruebas en C++
//
// Dado un día y un mes, determinar en qué estación del año estamos,
// asumiendo que estamos en el hemisferio SUR
// 21 Dic -> 20 Mar -- VERANO
// 21 Mar -> 20 Jun -- OTOÑO
// 21 Jun -> 20 Sep -- INVIERNO
// 21 Sep -> 20 Dic -- PRIMAVERA
//

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <array>

using namespace std;

// Declaraciones y definiciones
#define SEASON_SPRING 0
#define SEASON_SUMMER 1
#define SEASON_AUTUMN 2
#define SEASON_WINTER 3
#define SEASON_UNKNOWN 4

// Función para identificar qué posición tiene un string dentro
// del array, i.e. numMes(meses, "febrero") devuelve un 2.
//

template <size_t N>
int fNumMes(const std::array<std::string, N> &arr, std::string mes)
{

    int ret = -1;
    // Uso un Range-based for loop
    // for ( init-statement (opcional) range-declaration : range-expression )
    //
    int i = 0;
    for (const auto &elem : arr)
    {
        std::cout << elem << "(" << i << ") ";
        if (!elem.compare(mes))
        {
            ret = i + 1;
            break;
        }
        i++;
    }
    cout << endl;
    cout << "i: " << i << ", ret=" << ret << endl;
    return ret;
}

// Entrada
int main()
{
    // Variables
    int nDia = -1, mes = -1;
    int nMes = -1;
    int nEstacion = SEASON_UNKNOWN;
    std::string line;
    array<string, 12> meses = {"enero",
                               "febrero",
                               "marzo",
                               "abril",
                               "mayo",
                               "junio",
                               "julio",
                               "agosto",
                               "septiembre",
                               "octubre",
                               "noviembre",
                               "diciembre"};
    array<string, 5> estacion = {"Primavera",
                                 "Verano",
                                 "Otoño",
                                 "Invierno",
                                 "DESCONOCIDA"};

    // Configuro cout
    cout << setfill(' ');
    cout << setprecision(14);
    cout << "--" << endl;

    // Pregunto el mes
    do
    {
        cout << "Día 1-31 (0 salir): ";
        std::getline(std::cin, line);

        // Análisis de la línea
        nDia = -1;
        try
        {
            nDia = stoi(line);
            if (!nDia)
                break;
            if (nDia <= 0 || nDia > 31)
            {
                cout << "invalid_out_of_range (0-31)" << endl;
                nDia = -1;
            }
            else
            {
                do
                {
                    cout << "Mes 1-12 (0 salir): ";
                    std::getline(std::cin, line);

                    // A pedir la línea
                    mes = -1;
                    try
                    {
                        mes = stoi(line);
                        if (!mes)
                            break;
                        if (mes <= 0 || mes > 12)
                        {
                            cout << "invalid_out_of_range (0-12)" << endl;
                            mes = -1;
                        }
                    }
                    catch (std::invalid_argument const &ex)
                    {
                        std::cout << "std::invalid_argument::what(): " << ex.what() << '\n';
                    }
                    catch (std::out_of_range const &ex)
                    {
                        std::cout << "std::out_of_range::what(): " << ex.what() << '\n';
                    }

                } while (mes == -1);

                if (!mes)
                    break;
                nMes = fNumMes(meses, meses[mes - 1]);

                // ** Season
                // **

                // 21 Sep -> 20 Dic -- PRIMAVERA
                if ((nMes == 9 && nDia >= 21) || (nMes == 10 || nMes == 11) || (nMes == 12 && nDia <= 20))
                    nEstacion = SEASON_SPRING;

                // 21 Dic -> 20 Mar -- VERANO
                else if ((nMes == 12 && nDia >= 21) || (nMes == 1 || nMes == 2) || (nMes == 3 && nDia <= 20))
                    nEstacion = SEASON_SUMMER;

                // 21 Mar -> 20 Jun -- OTOÑO
                else if ((nMes == 3 && nDia >= 21) || (nMes == 4 || nMes == 5) || (nMes == 6 && nDia <= 20))
                    nEstacion = SEASON_AUTUMN;

                // 21 Jun -> 20 Sep -- INVIERNO
                else if ((nMes == 6 && nDia >= 21) || (nMes == 7 || nMes == 8) || (nMes == 9 && nDia <= 20))
                    nEstacion = SEASON_WINTER;

                // Muestro season
                cout << "Fecha: " << nDia << " de " << meses[mes - 1] << " --> " << estacion[nEstacion] << endl;
            }
        }
        catch (std::invalid_argument const &ex)
        {
            std::cout << "std::invalid_argument::what(): " << ex.what() << '\n';
        }
        catch (std::out_of_range const &ex)
        {
            std::cout << "std::out_of_range::what(): " << ex.what() << '\n';
        }

    } while (nDia == -1);

    return 0;
}
