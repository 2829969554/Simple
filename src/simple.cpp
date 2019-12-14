#include "simple"

_KRI_BEGIN

appl app;

void simple::main() {
    try {
        app.simple.create(1000,800);

        app.simple.msg_loop();
    } catch (std::string& e) {
        msgbox::error(app.simple, e);
    }
}

_KRI_END

