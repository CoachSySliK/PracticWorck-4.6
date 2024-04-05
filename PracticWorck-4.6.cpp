#include <iostream> 
// это просто копия https://github.com/CoachSySliK/lesson-4.3. Я сразу обратил внимание на то, что если деление с остатком, то надо добавить ещё одного барбера
// я не знаю как запретить ввод букв в консоли. если вводить буквы то получается белиберда
using namespace std;

int main()
{
    string barberMan[3] = { " барбер", " барбера", " барберов" };
    int workTime = 8 * 30;
    int men = 9000;
    int barber;
    int barberNeed;

    cout << "Добро пожаловать в помощник по организации рыбочего времени.\n\n";

    cout << "Сколько мужчин в вашем городе? ";
    cin >> men;
    cout << "Сколько барберов в вашей компании? ";
    cin >> barber;

    barberNeed = men / workTime;

    //cout << barberNeed << endl;

    if (men % workTime > 0) { //проверяем, если делится с остатком то добавляем ещё одного барбера
        barberNeed++;
    }

    //cout << barberNeed << endl;

    cout << "\nПри условии, что 1 барбер будет работать месяц(30 дней) без выходных\nпо 8 часов в сутки и будет обслуживать 1 клинета за 1 час,";

    if (barber < barberNeed) {
        cout << endl << "Вам не хватает " << barberNeed - barber;
        if (barberNeed - barber == 1) {
            cout << barberMan[0] << endl;
        }
        else if (1 < barberNeed - barber && barberNeed - barber < 5) {
            cout << barberMan[1] << endl;
        }
        else {
            cout << barberMan[2] << endl;
        }

    }
    else if (barber == barberNeed) {
        cout << endl << "У Вас достаточно барберов.\n\n";
    }
    else if (barber > barberNeed) {
        cout << endl << "У Вас " << barber - barberNeed;
        if (barber - barberNeed == 1) {
            cout << barberMan[0] << " останется без клиентов.\n\n";
        }
        else if (1 < barber - barberNeed && barber - barberNeed < 5) {
            cout << barberMan[1] << " останется без клиентов.\n\n";
        }
        else {
            cout << barberMan[2] << " останется без клиентов.\n\n";
        }
    }
    else {
        cout << endl << "Что-то пошло не так.\n\n";
    }

    return 0;
}