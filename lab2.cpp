//Екі санның минимумын табу
// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     int b;

//     cin >> a;
//     cin >> b;

//     if (a > b) {
//         cout << b;
//     }
//     else if (b > a){
//         cout << a;
//     }
//     return 0;
    
// }

// Пайдаланушы сан енгізеді. Сол санның жұп немесе тақ екенін анықтап, хабарлама
// шығару
// #include <iostream>
// using namespace std;

// int main(){
//     setlocale(LC_ALL, "Russian");
//     int number;

//     cin >> number;

//     if (number % 2 == 0){
//         cout << "Жұп сан";
//     }
//     else if (number % 2 != 0){
//         cout << "Тақ сан";
//     }
//     return 0;
// }

// 1.	1-ден N-ге дейінгі сандардың қосындысы
// Пайдаланушы N санын енгізеді. Цикл арқылы 1-ден N-ге дейінгі сандардың
// қосындысын табу.
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     int sum = 0;
//     int count = 0;
//     cin >> n;

//     while (count < n){
//         count++;
//         sum = sum + count;
//     }

//     cout << sum; 
//     return 0; 

// }

// 1.	Көбейту кестесі
// Берілген N саны үшін 1-ден 10-ға дейін көбейту кестесін шығар
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     int multiply_numbers = 0;

//     cin >> n;

//     while (multiply_numbers < 10){
//         multiply_numbers++;
//         cout << n << " * " << multiply_numbers << " = " << n * multiply_numbers 
//         << endl;    
//     }
//     return 0;

// }

// 1.	Факториалды табу
// Пайдаланушы N санын енгізеді. Цикл арқылы N санының факториалын табу.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int multiply_numbers = 0;
//     int factorial = 1;

//     cin >> n;

//     while (multiply_numbers < n){
//         multiply_numbers++;
//         factorial = factorial * multiply_numbers;
//         cout << factorial << ' ';
//     }
//     return 0;
// }

// 1.	Дауысты әріптердің саны
//  Пайдаланушы жол енгізеді. Жолда неше дауысты әріп бар екенін санау.
// #include <iostream>
// using namespace std;

// int main() {
//     const int SIZE = 256;
//     char s[SIZE];

//     cout << "Жол енгізіңіз:" << endl;
//     cin.getline(s, SIZE);

//     const char vowels[] = "aeiouAEIOU";
//     int count = 0;

//     for (int i = 0; s[i] != '\0'; i++) {        
//         for (int j = 0; vowels[j] != '\0'; j++) {
//             if (s[i] == vowels[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }

//     cout << "Дауысты әріптер саны: " << count << endl;
//     return 0;
// }

// 1.	Жолды кері шығару
//  Бағдарлама енгізілген жолды керісінше шығару керек.
// #include <iostream>
// using namespace std;

// int main() {
//     const int SIZE = 256;
//     char s[SIZE];

//     cout << "Жол енгізіңіз:" << endl;
//     cin.getline(s, SIZE);

//     int len = 0;
//     while (s[len] != '\0') {
//         len++;
//     }

//     cout << "Кері жол: ";
//     for (int i = len - 1; i >= 0; i--) {
//         cout << s[i];
//     }
//     cout << endl;

//     return 0;
// }


/** */
// 1.	Массивтегі максимумды табу
//  Пайдаланушы массивтегі сандарды (мысалы, бос орын арқылы) енгізеді. 
//  Сол массивтегі ең үлкен санды табу.
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
    
//     cin >> n;

//     int numbers[n]; 
//     int max_number = numbers[0];

//     for (int i = 0; i < n; i++){
//         cin >> numbers[i];
//     }

//     for (int i = 0; i < n; i++){
//         if (numbers[i] > max_number){
//             max_number = numbers[i];
//         }
//     }
//     cout << max_number;
//     return 0;
// }

// 1.	Массив элементтерінің қосындысы
// Массивтегі барлық элементтердің қосындысын табу.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int sum = 0;
//     int numbers[n];

//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }

//     for (int i = 0; i < n; i++) {
//         sum = sum + numbers[i];
//     }

//     cout << sum;
// }

// 1.	Массивтен элемент іздеу
//  Пайдаланушы массив және бір сан X енгізеді. Бағдарлама X саны массивтің ішінде 
//  бар-жоғын анықтау керек.

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Massiv olshemi: ";
//     cin >> n;
//     string result = " ";

//     int numbers[n];

//     int x;
//     cout << "Tekseru kerek san: ";
//     cin >> x;

//     for (int i = 0; i < n; i++){
//         cin >> numbers[i];
//     }

//     for (int i = 0; i < n; i++){
//         if (numbers[i] == x){
//             result = "san bar";
//             break;
//         }
//         else if (numbers[i] != x){
//             result = "san zhok";
//         }
//     }
//     cout << result;

//     return 0;
// }

