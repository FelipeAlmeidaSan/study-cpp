#include <iostream>
#include <iomanip> // std::fixed, std::setprecision
#include <cmath>   // floor  ceil  round
using namespace std;

int main()
{
    double n1, n2, n3;
    cout << "Digite 3 notas (ex.: 7.5 8.2 9.1): ";
    cin >> n1 >> n2 >> n3;

    // média “real” (double)
    double media = (n1 + n2 + n3) / 3.0;

    // ——‑‑‑‑‑‑‑ CONVERSÕES / ARREDONDAMENTOS ‑‑‑‑‑‑‑‑
    int mediaTrunc = static_cast<int>(media);             // descarta fração (demotion)
    int mediaFloor = static_cast<int>(std::floor(media)); // sempre para baixo
    int mediaCeil = static_cast<int>(std::ceil(media));   // sempre para cima
    int mediaRound = static_cast<int>(std::round(media)); // arredonda “normal”

    // ——‑‑‑‑‑‑‑ Saída formatada ‑‑‑‑‑‑‑‑
    cout << fixed << setprecision(2);
    cout << "\nMédia (double) ..............: " << media << '\n';

    cout << "Truncada  (static_cast<int>)  : " << mediaTrunc << '\n';
    cout << "floor     (std::floor)        : " << mediaFloor << '\n';
    cout << "ceil      (std::ceil)         : " << mediaCeil << '\n';
    cout << "round     (std::round)        : " << mediaRound << '\n';

    // Mostrar a perda de informação na truncagem
    cout << "\nPerda pela truncagem: " << (media - mediaTrunc) << "\n";
    return 0;
}
