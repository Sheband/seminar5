#include <iostream>
#include <string>

// 1. Функция для генерации HTML-заголовка
std::string generateHtmlHeader(const std::string &title) {
    return "<!DOCTYPE html>\n"
           "<html lang=\"ru\">\n"
           "<head>\n"
           "    <meta charset=\"UTF-8\">\n"
           "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
           "    <title>" + title + "</title>\n"
           "</head>\n";
}

// 2. Функция для генерации CSS-градиента
void generateCssGradient(const std::string &color1, const std::string &color2) {
    std::cout << "    /* CSS градиент */\n"
              << "    .gradient-background {\n"
              << "        background: linear-gradient(135deg, " << color1 << ", " << color2 << ");\n"
              << "        min-height: 100vh;\n"
              << "        padding: 20px;\n"
              << "    }\n"
              << "    .content {\n"
              << "        background: rgba(255, 255, 255, 0.9);\n"
              << "        padding: 30px;\n"
              << "        border-radius: 10px;\n"
              << "        max-width: 800px;\n"
              << "        margin: 0 auto;\n"
              << "        box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);\n"
              << "    }\n"
              << "    h1 {\n"
              << "        color: #333;\n"
              << "        text-align: center;\n"
              << "        margin-bottom: 20px;\n"
              << "    }\n"
              << "    p {\n"
              << "        color: #666;\n"
              << "        line-height: 1.6;\n"
              << "    }\n";
}

// 3. Функция для создания простой веб-страницы
void createSimpleHtmlPage() {
    std::cout << generateHtmlHeader("Моя веб-страница");
    
    std::cout << "<body>\n"
              << "<style>\n";
    
    generateCssGradient("#667eea", "#764ba2");
    
    std::cout << "</style>\n"
              << "<div class=\"gradient-background\">\n"
              << "    <div class=\"content\">\n"
              << "        <h1>Добро пожаловать на мою страницу!</h1>\n"
              << "        <p>Это простая веб-страница, сгенерированная с помощью C++ функций.</p>\n"
              << "        <p>Градиент фона и HTML структура созданы автоматически.</p>\n"
              << "    </div>\n"
              << "</div>\n"
              << "</body>\n"
              << "</html>\n";
}

// Дополнительная функция для демонстрации разных градиентов
void generateMultipleGradients() {
    std::cout << "\n=== Примеры разных градиентов ===\n";
    
    std::cout << "/* Градиент 1 */\n";
    generateCssGradient("#ff6b6b", "#556270");
    
    std::cout << "\n/* Градиент 2 */\n";
    generateCssGradient("#00b4db", "#0083b0");
    
    std::cout << "\n/* Градиент 3 */\n";
    generateCssGradient("#f46b45", "#eea849");
}

int main() {
    std::cout << "=== Генерация веб-страницы ===\n";
    createSimpleHtmlPage();
    
    // Демонстрация дополнительной функциональности
    generateMultipleGradients();
    
    return 0;
}