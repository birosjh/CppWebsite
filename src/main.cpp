#include "crow.h"

int main()
{
    crow::SimpleApp app; //define your crow application

    //define your endpoint at the root directory
    CROW_ROUTE(app, "/")([](){
        auto page = crow::mustache::load_text("main.html");
        return page;
    });

    //set the port, set the app to run on multiple threads, and run the app
    app.bindaddr("0.0.0.0").port(8000).multithreaded().run();
}